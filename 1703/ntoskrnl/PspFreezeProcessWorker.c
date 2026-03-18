/*
 * XREFs of PspFreezeProcessWorker @ 0x1406E2CD0
 * Callers:
 *     <none>
 * Callees:
 *     SmIsCompressionProcess @ 0x14001E628 (SmIsCompressionProcess.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsCaptureExceptionPort @ 0x14053F0F0 (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x1406E4240 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rax
  __int64 v3; // rcx
  void *v4; // rax

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( (PEPROCESS)a1 != PsInitialSystemProcess
    && (PVOID)a1 != PsIdleProcess
    && a1 != ServerSiloGlobals[110]
    && !SmIsCompressionProcess((PVOID)a1) )
  {
    v4 = PsCaptureExceptionPort(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( (*(_DWORD *)(a1 + 772) & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
