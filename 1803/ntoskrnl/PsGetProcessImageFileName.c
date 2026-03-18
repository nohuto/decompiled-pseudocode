/*
 * XREFs of PsGetProcessImageFileName @ 0x1400C1120
 * Callers:
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     PiUEventHandleVetoEvent @ 0x1405E5ED8 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140732698 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}
