/*
 * XREFs of PsGetProcessImageFileName @ 0x140124270
 * Callers:
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     PnpLogVetoInformation @ 0x14055BDB8 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x1405E0CB0 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}
