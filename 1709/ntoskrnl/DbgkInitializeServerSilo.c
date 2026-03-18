/*
 * XREFs of DbgkInitializeServerSilo @ 0x1406A98F0
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407153F0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     DbgkpInitializePhase1SiloState @ 0x1405C4710 (DbgkpInitializePhase1SiloState.c)
 */

__int64 __fastcall DbgkInitializeServerSilo(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *ServerSiloGlobals; // rax
  int v4; // ebx

  v2 = PsAttachSiloToCurrentThread(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  ServerSiloGlobals[120] = 0LL;
  v4 = DbgkpInitializePhase1SiloState((__int64)(ServerSiloGlobals + 120));
  if ( v4 >= 0 )
    v4 = 0;
  PsDetachSiloFromCurrentThread(v2);
  return (unsigned int)v4;
}
