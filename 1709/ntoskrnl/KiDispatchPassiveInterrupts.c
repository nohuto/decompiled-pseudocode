/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x14020AD80
 * Callers:
 *     KiScanInterruptObjectList @ 0x140182600 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x1401FE738 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
