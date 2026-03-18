/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x140245FD0
 * Callers:
 *     RtlpHpVsChunkDecommit @ 0x1402452B8 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsChunkSplit @ 0x14024552C (RtlpHpVsChunkSplit.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        char a6)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rcx
  int v15; // ebp
  unsigned __int64 v16; // rax

  _BitScanForward64(&v7, a3);
  _BitScanReverse64(&v8, a3);
  v10 = a4;
  v11 = (1 - (_DWORD)v7 + (_DWORD)v8) << 12;
  v12 = ((1LL << (1 - (unsigned __int8)v7 + (unsigned __int8)v8)) - 1) << v7;
  v13 = a2 + (unsigned int)((_DWORD)v7 << 12);
  if ( (a6 & 1) == 0 )
    ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  v14 = *(_QWORD *)(a1 + 56);
  if ( a5 )
  {
    v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80)))(v14, v13, v11);
    if ( v15 < 0 )
      goto LABEL_8;
    *(_QWORD *)(a2 + 16) |= v12;
    v16 = v10;
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 88)))(v14, v13, v11);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v16 = -(int)v10;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), v16);
  v15 = 0;
LABEL_8:
  if ( (a6 & 1) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 24));
    KeAbPostRelease(a2 + 24);
  }
  return (unsigned int)v15;
}
