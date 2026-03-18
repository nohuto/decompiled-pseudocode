/*
 * XREFs of MiFlushAllPages @ 0x1402259EC
 * Callers:
 *     MmFlushAllPagesEx @ 0x14022733C (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x140430948 (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140215448 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x140225AB0 (MiFlushAllPagesWorker.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  _KPROCESS *v9; // rbx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v10; // [rsp+20h] [rbp-48h] BYREF

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1144) )
    {
      v9 = *(_KPROCESS **)(a1 + 1264);
      KiStackAttachProcess(v9, 0, (__int64)&v10);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].IdealNode[12]);
      KiUnstackDetachProcess(&v10, 0LL);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL);
    }
  }
  return result;
}
