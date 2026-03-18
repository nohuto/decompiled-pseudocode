/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x1406DEC14
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1406DE840 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1406DEF80 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140036550 (SepDeReferenceLogonSessionDirect.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     EtwShutdown @ 0x140578394 (EtwShutdown.c)
 *     CmpStopSiloKeyLockTracker @ 0x140668FF8 (CmpStopSiloKeyLockTracker.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406F7524 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 */

PVOID *__fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rdi
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  PVOID *result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( ServerSiloGlobals[108] )
  {
    v3 = PsAttachSiloToCurrentThread(a1);
    EtwShutdown(0);
    PsDetachSiloFromCurrentThread(v3);
  }
  v4 = (void *)ServerSiloGlobals[94];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    ServerSiloGlobals[94] = 0LL;
  }
  v5 = (void *)ServerSiloGlobals[95];
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    ServerSiloGlobals[95] = 0LL;
  }
  v6 = (_QWORD *)ServerSiloGlobals[92];
  if ( v6 )
  {
    SepDeReferenceLogonSessionDirect(v6);
    ServerSiloGlobals[92] = 0LL;
  }
  v7 = (_QWORD *)ServerSiloGlobals[93];
  if ( v7 )
  {
    SepDeReferenceLogonSessionDirect(v7);
    ServerSiloGlobals[93] = 0LL;
  }
  SepDeleteUnreferencedLogonSessionsInSilo(a1);
  BugCheckParameter2 = 0LL;
  result = (PVOID *)PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    return CmpStopSiloKeyLockTracker(BugCheckParameter2);
  return result;
}
