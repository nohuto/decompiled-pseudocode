/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x1405EECD4
 * Callers:
 *     IopSessionChangeWorker @ 0x14015AB90 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 8152LL), 0, 0);
}
