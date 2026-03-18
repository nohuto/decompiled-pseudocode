/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x1405856BC
 * Callers:
 *     IopSessionChangeWorker @ 0x14014AAD0 (IopSessionChangeWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 8152LL), 0, 0);
}
