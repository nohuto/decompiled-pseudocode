/*
 * XREFs of PspDeferredWorkerRoutine @ 0x1406DEBE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

LONG __fastcall PspDeferredWorkerRoutine(__int64 a1)
{
  *(_DWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 32));
  return KeSetEvent((PRKEVENT)a1, 1, 0);
}
