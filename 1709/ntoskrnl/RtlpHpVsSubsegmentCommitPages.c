/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x14025D4E0
 * Callers:
 *     RtlpHpVsChunkDecommit @ 0x14025C7D8 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsChunkSplit @ 0x14025CA10 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v9; // rcx
  volatile signed __int64 *v10; // rdi
  __int64 v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // r14d
  unsigned __int64 v16; // rax

  _BitScanForward64(&v5, a3);
  _BitScanReverse64(&v9, a3);
  v10 = (volatile signed __int64 *)(a2 + 24);
  v11 = a2 + (unsigned int)((_DWORD)v5 << 12);
  v12 = (1 - (_DWORD)v5 + (_DWORD)v9) << 12;
  v13 = ((1LL << (1 - (unsigned __int8)v5 + (unsigned __int8)v9)) - 1) << v5;
  ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  v14 = *(_QWORD *)(a1 + 56);
  if ( a5 )
  {
    v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80)))(v14, v11, v12);
    if ( v15 < 0 )
      goto LABEL_6;
    *(_QWORD *)(a2 + 16) |= v13;
    v16 = a4;
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 88)))(v14, v11, v12);
    *(_QWORD *)(a2 + 16) &= ~v13;
    v16 = -a4;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), v16);
  v15 = 0;
LABEL_6:
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  return (unsigned int)v15;
}
