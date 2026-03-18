/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x140204B90
 * Callers:
 *     KiScanInterruptObjectList @ 0x140182B80 (KiScanInterruptObjectList.c)
 * Callees:
 *     <none>
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
