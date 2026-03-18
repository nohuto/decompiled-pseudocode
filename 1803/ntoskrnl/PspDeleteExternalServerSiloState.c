/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x140779254
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140778EA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     PsGetPermanentSiloContext @ 0x1400A5EF0 (PsGetPermanentSiloContext.c)
 *     EtwShutdown @ 0x1405EAAFC (EtwShutdown.c)
 *     CmpStopSiloKeyLockTracker @ 0x1406F6F64 (CmpStopSiloKeyLockTracker.c)
 *     SeShutdownServerSilo @ 0x14078C5A8 (SeShutdownServerSilo.c)
 */

ULONG_PTR **__fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *ServerSiloGlobals; // rsi
  __int64 v4; // rbx
  ULONG_PTR **result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( ServerSiloGlobals[108] )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  BugCheckParameter2 = 0LL;
  result = (ULONG_PTR **)PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    return CmpStopSiloKeyLockTracker(BugCheckParameter2);
  return result;
}
