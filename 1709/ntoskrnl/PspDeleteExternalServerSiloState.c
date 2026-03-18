/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x140715064
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140714CB0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1407153F0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     PsGetPermanentSiloContext @ 0x140103440 (PsGetPermanentSiloContext.c)
 *     SepDeReferenceLogonSessionDirect @ 0x14012BB1C (SepDeReferenceLogonSessionDirect.c)
 *     CmpStopSiloKeyLockTracker @ 0x140693D70 (CmpStopSiloKeyLockTracker.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x14072F0F4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwShutdown @ 0x140748DA0 (EtwShutdown.c)
 */

ULONG_PTR **__fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rdi
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  ULONG_PTR **result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( ServerSiloGlobals[108] )
  {
    v3 = PsAttachSiloToCurrentThread(a1);
    EtwShutdown(0LL);
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
  result = (ULONG_PTR **)PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    return CmpStopSiloKeyLockTracker(BugCheckParameter2);
  return result;
}
