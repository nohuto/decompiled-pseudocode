/*
 * XREFs of EtwShutdown @ 0x140578394
 * Callers:
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x1406DEC14 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTraceSystemShutdown @ 0x14070C4E4 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 v2; // rbp
  char IsCurrentThreadInServerSilo; // al
  char v4; // si
  __int16 v5; // bx
  unsigned int *v6; // rax
  _QWORD v7[22]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v4 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    *(_DWORD *)(v2 + 5036) = 1;
  }
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 176;
  v5 = 63;
  HIDWORD(v7[5]) = 0x20000;
  do
  {
    v6 = EtwpAcquireLoggerContextByLoggerId(v2, v5, 0);
    if ( !v6 )
      goto LABEL_4;
    if ( a1 )
    {
      if ( !v4 && (v6[3] & 0x400000) == 0 )
        goto LABEL_11;
    }
    else if ( !v4 && (v6[3] & 0x400) != 0 )
    {
LABEL_11:
      EtwpReleaseLoggerContext(v6, 0);
      goto LABEL_4;
    }
    if ( v5 )
      LOWORD(v7[1]) = v5;
    else
      LOWORD(v7[1]) = -1;
    *(_OWORD *)&v7[3] = *(_OWORD *)(v6 + 69);
    EtwpReleaseLoggerContext(v6, 0);
    if ( !a1 )
      ++EtwpStopTraceCount;
    EtwpStopTrace(v2, (__int64)v7, 1);
LABEL_4:
    --v5;
  }
  while ( v5 >= 0 );
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
