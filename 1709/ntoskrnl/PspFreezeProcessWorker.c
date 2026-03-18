/*
 * XREFs of PspFreezeProcessWorker @ 0x140719180
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     SmIsCompressionProcess @ 0x140116B88 (SmIsCompressionProcess.c)
 *     PsCaptureExceptionPort @ 0x1404D69B0 (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x140582840 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rax
  __int64 v3; // rcx
  void *v4; // rax

  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( (*(_DWORD *)(a1 + 1740) & 0x1000) == 0
    && (PVOID)a1 != PsIdleProcess
    && a1 != ServerSiloGlobals[110]
    && !SmIsCompressionProcess((PVOID)a1) )
  {
    v4 = PsCaptureExceptionPort(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( (*(_DWORD *)(a1 + 772) & 4) == 0 )
      PsSuspendProcess((struct _EX_RUNDOWN_REF *)a1);
  }
  return 0LL;
}
