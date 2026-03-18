/*
 * XREFs of PfpRpControlRequestReset @ 0x14043D754
 * Callers:
 *     PfpRpControlRequestPerform @ 0x14043E458 (PfpRpControlRequestPerform.c)
 *     PfpRpShutdown @ 0x1406F4308 (PfpRpShutdown.c)
 * Callees:
 *     PfpRpCHashEmpty @ 0x14043D7AC (PfpRpCHashEmpty.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 */

__int64 __fastcall PfpRpControlRequestReset(__int64 a1)
{
  void *i; // rcx
  __int64 NextProcess; // rax

  PfpRpCHashEmpty(a1, a1 + 96, a1 + 120);
  for ( i = 0LL; ; i = (void *)NextProcess )
  {
    NextProcess = PsGetNextProcess(i);
    if ( !NextProcess )
      break;
    _InterlockedAnd((volatile signed __int32 *)(NextProcess + 772), 0xFFFFBFFF);
  }
  PfpRpCHashEmpty(a1, a1 + 56, a1 + 88);
  *(_QWORD *)(a1 + 80) = 0LL;
  return 0LL;
}
