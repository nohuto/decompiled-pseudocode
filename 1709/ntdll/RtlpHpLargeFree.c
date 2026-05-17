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

unsigned __int64 __fastcall RtlpHpLargeFree(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  int v5; // edi
  unsigned __int64 *Metadata; // rax
  int v7; // edx
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v13 = a2;
  v5 = (unsigned __int8)a3 & 1;
  if ( ((unsigned __int8)a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 9), a2, a3, a4);
  Metadata = (unsigned __int64 *)RtlpHpLargeAllocGetMetadata(a1);
  v8 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((__int64)(a1 + 10), Metadata);
    if ( !v5 )
      RtlReleaseSRWLockExclusive(a1 + 9);
    v14 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v13, &v14, 0x8000LL);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(0x8000LL, v14, v13);
    _InterlockedExchangeAdd64(a1 + 13, -(__int64)(v8[4] >> 12));
    _InterlockedExchangeAdd64(a1 + 12, -(__int64)(v14 >> 12));
    RtlpHpMetadataFree(v8);
    v9 = v14;
    v10 = v14;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v9 = v14;
      v11 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v11 = 2147353480LL;
    }
    if ( *(_BYTE *)v11 )
      RtlpHeapLogRangeRelease(a1, v13, v9);
  }
  else
  {
    if ( !v5 )
    {
      RtlReleaseSRWLockExclusive(a1 + 9);
      v7 = v13;
    }
    RtlpLogHeapFailure(8, (_DWORD)a1, v7, 0, 0LL, 0LL);
    return 0LL;
  }
  return v10;
}
