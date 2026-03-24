/*
 * XREFs of MouseClassCreateWaitWakeIrp @ 0x1C000BEE8
 * Callers:
 *     MouseClassPower @ 0x1C0002C10 (MouseClassPower.c)
 *     MouseStart @ 0x1C0003F10 (MouseStart.c)
 *     MouseToggleWaitWakeWorker @ 0x1C00042F0 (MouseToggleWaitWakeWorker.c)
 *     MouseClassCreateWaitWakeIrpWorker @ 0x1C000BF40 (MouseClassCreateWaitWakeIrpWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall MouseClassCreateWaitWakeIrp(char *Context)
{
  return PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 3),
           0,
           *(POWER_STATE *)(Context + 272),
           (PREQUEST_POWER_COMPLETE)MouseClassWaitWakeComplete,
           Context,
           0LL) == 259;
}
