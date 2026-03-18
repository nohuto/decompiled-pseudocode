/*
 * XREFs of UsbhPdoArmedForWake @ 0x1C0046320
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

bool __fastcall UsbhPdoArmedForWake(__int64 a1)
{
  return PdoExt(a1)[586] > -1;
}
