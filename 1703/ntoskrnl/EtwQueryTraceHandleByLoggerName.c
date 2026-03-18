/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x140467800
 * Callers:
 *     WdipSemGetLoggerIds @ 0x14046777C (WdipSemGetLoggerIds.c)
 *     WmiQueryTraceInformation @ 0x140467C00 (WmiQueryTraceInformation.c)
 *     IopErrorLogThread @ 0x1405812A0 (IopErrorLogThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140551A2C (EtwpAcquireLoggerContextByLoggerName.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(__int64 a1, _QWORD *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int16 *v5; // rax
  __int16 v6; // cx

  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = (__int16 *)EtwpAcquireLoggerContextByLoggerName(CurrentServerSiloGlobals[108], a1, 0LL);
  if ( !v5 )
    return 3221226134LL;
  *a2 = 0LL;
  if ( *(_DWORD *)v5 )
    v6 = *v5;
  else
    v6 = -1;
  *(_WORD *)a2 = v6;
  EtwpReleaseLoggerContext(v5, 0LL);
  return 0LL;
}
