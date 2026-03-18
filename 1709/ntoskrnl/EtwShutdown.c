/*
 * XREFs of EtwShutdown @ 0x140748DA0
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x140715064 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     EtwpFlushCoverage @ 0x140745544 (EtwpFlushCoverage.c)
 *     EtwpTraceSystemShutdown @ 0x140747B54 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 v2; // rbp
  char IsCurrentThreadInServerSilo; // al
  char v4; // di
  __int16 v5; // bx
  __int64 v6; // rax
  _QWORD v7[22]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v4 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    *(_DWORD *)(v2 + 4036) = 1;
  }
  if ( !v4 )
    EtwpFlushCoverage();
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 176;
  v5 = *(_WORD *)(v2 + 8);
  HIDWORD(v7[5]) = 0x20000;
  while ( --v5 >= 0 )
  {
    v6 = EtwpAcquireLoggerContextByLoggerId(v2, v5, 0);
    if ( v6 )
    {
      if ( a1 )
      {
        if ( v4 || (*(_DWORD *)(v6 + 12) & 0x400000) != 0 )
          goto LABEL_12;
LABEL_16:
        EtwpReleaseLoggerContext((unsigned int *)v6, 0);
      }
      else
      {
        if ( !v4 && (*(_DWORD *)(v6 + 12) & 0x400) != 0 )
          goto LABEL_16;
LABEL_12:
        if ( v5 )
          LOWORD(v7[1]) = v5;
        else
          LOWORD(v7[1]) = -1;
        *(_OWORD *)&v7[3] = *(_OWORD *)(v6 + 292);
        EtwpReleaseLoggerContext((unsigned int *)v6, 0);
        if ( !a1 )
          ++EtwpStopTraceCount;
        EtwpStopTrace(v2, v7, 1);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
