/*
 * XREFs of UsbhPdoArmedForWake @ 0x1C0024540
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0023164 (UsbhSyncSuspendPdoPort.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

bool __fastcall UsbhPdoArmedForWake(__int64 a1)
{
  return PdoExt(a1)[586] >= 0;
}
