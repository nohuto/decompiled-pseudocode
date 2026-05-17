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

unsigned __int64 __fastcall RtlpHpLargeReAlloc(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  int v11; // r12d
  unsigned __int64 Metadata; // rax
  const GUID *v13; // r9
  __int64 v14; // rcx
  const GUID *v15; // r9
  unsigned __int64 v16; // rsi
  const GUID *v18; // [rsp+30h] [rbp-10h]
  unsigned __int64 v19; // [rsp+38h] [rbp-8h]
  int v20; // [rsp+88h] [rbp+48h]
  const GUID *v21; // [rsp+98h] [rbp+58h]

  v20 = a2;
  v4 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v9 = (v4 + 4095) >> 12;
  v19 = v9 << 12;
  if ( v9 << 12 < v4 )
    return 0LL;
  if ( v9 > v8 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return RtlpHpReallocMove((_DWORD *)a1, (unsigned __int64)a3, a4, a2);
    return 0LL;
  }
  v11 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 72, a2, a3, a4);
  Metadata = RtlpHpLargeAllocGetMetadata(a1, (unsigned __int64)a3);
  if ( Metadata )
  {
    *(_QWORD *)(Metadata + 32) &= 0xFFFuLL;
    *(_QWORD *)(Metadata + 32) |= v9 << 12;
    *(_WORD *)(Metadata + 24) = ((_WORD)v9 << 12) - *(_WORD *)(a4 + 24);
    if ( !v11 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
    if ( *(_DWORD *)(a4 + 16) )
      RtlpHpExtrasMove((__int64)a3, *(_QWORD *)a4, (__int64)a3, *(_QWORD *)(a4 + 24), v20);
    if ( v9 < v8 )
    {
      v18 = (const GUID *)((v8 - v9) << 12);
      v21 = (const GUID *)((char *)a3 + v19 + 4096);
      ZwFreeVirtualMemory();
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000, v18, v21, v13);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v14 = 2147353480LL;
      if ( *(_BYTE *)v14 )
        RtlpHeapLogRangeRelease(a1, (__int64)v21, (__int64)v18);
      ZwFreeVirtualMemory();
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x4000, (const GUID *)0x1000, (const GUID *)((char *)a3 + v19), v15);
      v16 = v9 - v8;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), v16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v16);
    }
    return (unsigned __int64)a3;
  }
  else
  {
    if ( !v11 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
    return -1LL;
  }
}
