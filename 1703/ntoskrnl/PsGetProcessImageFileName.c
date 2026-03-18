/*
 * XREFs of PsGetProcessImageFileName @ 0x14002BD00
 * Callers:
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     PiUEventHandleVetoEvent @ 0x1405743B4 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x14059A4E0 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}
