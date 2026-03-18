/*
 * XREFs of PfpRpControlRequestReset @ 0x14064A3D0
 * Callers:
 *     PfpRpControlRequestPerform @ 0x140491160 (PfpRpControlRequestPerform.c)
 *     PfpRpShutdown @ 0x14075C858 (PfpRpShutdown.c)
 * Callees:
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
 *     PfpRpCHashEmpty @ 0x14064A428 (PfpRpCHashEmpty.c)
 */

__int64 __fastcall PfpRpControlRequestReset(__int64 a1)
{
  _QWORD *i; // rcx
  unsigned __int64 NextProcess; // rax

  PfpRpCHashEmpty(a1, a1 + 96, a1 + 120);
  for ( i = 0LL; ; i = (_QWORD *)NextProcess )
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
