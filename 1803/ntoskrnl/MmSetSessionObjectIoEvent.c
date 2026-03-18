/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x14061364C
 * Callers:
 *     IopSessionChangeWorker @ 0x14016DD10 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 8280LL), 0, 0);
}
