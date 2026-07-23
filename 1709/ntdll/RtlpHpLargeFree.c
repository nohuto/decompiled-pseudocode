/*
 * XREFs of RtlpHpLargeFree @ 0x18006F490
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006F598 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800FFA98 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

ULONG_PTR __fastcall RtlpHpLargeFree(__int64 a1, void *a2, char a3)
{
  int v4; // edi
  _RTL_BALANCED_NODE *Metadata; // rax
  int v6; // edx
  _RTL_BALANCED_NODE *v7; // rsi
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rsi
  __int64 v10; // rcx
  PVOID BaseAddress; // [rsp+58h] [rbp+28h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+38h] BYREF

  BaseAddress = a2;
  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1);
  v7 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 80), Metadata);
    if ( !v4 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(0x8000LL, RegionSize, BaseAddress);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), -((unsigned __int64)v7[1].Children[1] >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(__int64)(RegionSize >> 12));
    RtlpHpMetadataFree(v7);
    v8 = RegionSize;
    v9 = RegionSize;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v8 = RegionSize;
      v10 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v10 = 2147353480LL;
    }
    if ( *(_BYTE *)v10 )
      RtlpHeapLogRangeRelease(a1, BaseAddress, v8);
  }
  else
  {
    if ( !v4 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
      v6 = (int)BaseAddress;
    }
    RtlpLogHeapFailure(8, a1, v6, 0, 0LL, 0LL);
    return 0LL;
  }
  return v9;
}
