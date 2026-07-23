/*
 * XREFs of RtlpHpLargeReAlloc @ 0x180107690
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180047E80 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpExtrasMove @ 0x180002878 (RtlpHpExtrasMove.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006F598 (RtlpHpLargeAllocGetMetadata.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800FFA98 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

unsigned __int64 __fastcall RtlpHpLargeReAlloc(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  int v11; // r12d
  unsigned __int64 Metadata; // rax
  void *v13; // r12
  const GUID *v14; // r9
  __int64 v15; // rcx
  const GUID *v16; // r9
  unsigned __int64 v17; // rsi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-8h]
  PVOID BaseAddress; // [rsp+98h] [rbp+58h] BYREF

  v4 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v9 = (v4 + 4095) >> 12;
  v20 = v9 << 12;
  if ( v9 << 12 < v4 )
    return 0LL;
  if ( v9 > v8 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return RtlpHpReallocMove((_DWORD *)a1, a3, a4, a2);
    return 0LL;
  }
  v11 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a3);
  if ( Metadata )
  {
    *(_QWORD *)(Metadata + 32) &= 0xFFFuLL;
    *(_QWORD *)(Metadata + 32) |= v9 << 12;
    *(_WORD *)(Metadata + 24) = ((_WORD)v9 << 12) - *(_WORD *)(a4 + 24);
    if ( !v11 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    if ( *(_DWORD *)(a4 + 16) )
      RtlpHpExtrasMove(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), a2);
    if ( v9 < v8 )
    {
      v13 = (void *)(a3 + v20);
      RegionSize = (v8 - v9) << 12;
      BaseAddress = (PVOID)(a3 + v20 + 4096);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000, (const GUID *)RegionSize, (const GUID *)BaseAddress, v14);
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v15 = 2147353480LL;
      if ( *(_BYTE *)v15 )
        RtlpHeapLogRangeRelease(a1, (__int64)BaseAddress, RegionSize);
      RegionSize = 4096LL;
      BaseAddress = v13;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x4000, (const GUID *)RegionSize, (const GUID *)BaseAddress, v16);
      v17 = v9 - v8;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), v17);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v17);
    }
    return a3;
  }
  else
  {
    if ( !v11 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    return -1LL;
  }
}
