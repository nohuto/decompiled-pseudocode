/*
 * XREFs of MiFlushAllPages @ 0x14013F290
 * Callers:
 *     MmFlushAllPagesEx @ 0x14013F244 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x14040E2BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14007C6D8 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiFlushAllPagesWorker @ 0x14013E0D8 (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  _KPROCESS *v9; // rbx
  $5BC46E0569261879018906DEC3127961 v10; // [rsp+20h] [rbp-48h] BYREF

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1192) )
    {
      v9 = *(_KPROCESS **)(a1 + 1296);
      KiStackAttachProcess(v9, 0, (__int64)&v10);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].IdealNode[12]);
      KiUnstackDetachProcess(&v10, 0LL);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL);
    }
  }
  return result;
}
