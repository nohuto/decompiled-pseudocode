/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x14060D970
 * Callers:
 *     IopErrorLogThread @ 0x1406000E0 (IopErrorLogThread.c)
 *     WmiQueryTraceInformation @ 0x14060CC60 (WmiQueryTraceInformation.c)
 *     WdipSemGetLoggerIds @ 0x14060D8F0 (WdipSemGetLoggerIds.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14058E3AC (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(const UNICODE_STRING *a1, _QWORD *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int *v5; // rax
  unsigned int v6; // ecx

  if ( !a1 || !a1->Buffer || !a1->Length || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = (unsigned int *)EtwpAcquireLoggerContextByLoggerName(CurrentServerSiloGlobals[108], a1, 0);
  if ( !v5 )
    return 3221226134LL;
  *a2 = 0LL;
  v6 = *v5;
  if ( !*v5 )
    LOWORD(v6) = -1;
  *(_WORD *)a2 = v6;
  EtwpReleaseLoggerContext(v5, 0);
  return 0LL;
}
