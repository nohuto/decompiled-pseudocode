/*
 * XREFs of KeyboardClassCreateWaitWakeIrp @ 0x1C000D100
 * Callers:
 *     KeyboardClassPower @ 0x1C0001BA0 (KeyboardClassPower.c)
 *     KeyboardStart @ 0x1C00025B0 (KeyboardStart.c)
 *     KeyboardToggleWaitWakeWorker @ 0x1C0005240 (KeyboardToggleWaitWakeWorker.c)
 *     KeyboardClassCreateWaitWakeIrpWorker @ 0x1C000E410 (KeyboardClassCreateWaitWakeIrpWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardClassCreateWaitWakeIrp(char *Context)
{
  return PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 3),
           0,
           *(POWER_STATE *)(Context + 288),
           (PREQUEST_POWER_COMPLETE)KeyboardClassWaitWakeComplete,
           Context,
           0LL) == 259;
}
