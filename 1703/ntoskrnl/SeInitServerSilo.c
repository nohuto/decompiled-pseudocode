/*
 * XREFs of SeInitServerSilo @ 0x1406F063C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1406DEF80 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     SepCreateLogonSessionTrack @ 0x14045672C (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSessionSilo @ 0x14046F47C (SepReferenceLogonSessionSilo.c)
 *     SepDeleteLogonSessionTrack @ 0x140579760 (SepDeleteLogonSessionTrack.c)
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 */

__int64 __fastcall SeInitServerSilo(__int64 a1)
{
  __int64 *ServerSiloGlobals; // rsi
  __int64 v3; // rbp
  signed int LogonSessionTrack; // ebx

  if ( PsIsHostSilo(a1) )
    KeBugCheckEx(0x33u, 0LL, 0LL, 0LL, 0LL);
  ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals(a1);
  v3 = PsAttachSiloToCurrentThread(a1);
  LogonSessionTrack = SepCreateLogonSessionTrack((__int64)&SeSystemAuthenticationId);
  if ( LogonSessionTrack >= 0 )
  {
    LogonSessionTrack = SepReferenceLogonSessionSilo(&SeSystemAuthenticationId, a1, ServerSiloGlobals + 92);
    if ( LogonSessionTrack >= 0 )
    {
      LogonSessionTrack = SepCreateLogonSessionTrack((__int64)&SeAnonymousAuthenticationId);
      if ( LogonSessionTrack < 0 )
        goto LABEL_9;
      LogonSessionTrack = SepReferenceLogonSessionSilo(&SeAnonymousAuthenticationId, a1, ServerSiloGlobals + 93);
      if ( LogonSessionTrack >= 0 )
      {
        LogonSessionTrack = SepInitializationPhase1() == 0 ? 0xC0000001 : 0;
        goto LABEL_9;
      }
    }
    SepDeleteLogonSessionTrack(&SeSystemAuthenticationId, 0);
  }
LABEL_9:
  PsDetachSiloFromCurrentThread(v3);
  return (unsigned int)LogonSessionTrack;
}
