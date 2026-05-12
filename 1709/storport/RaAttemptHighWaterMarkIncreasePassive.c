/*
 * XREFs of RaAttemptHighWaterMarkIncreasePassive @ 0x1C001F160
 * Callers:
 *     <none>
 * Callees:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00407B4 (RaAttemptHighWaterMarkIncrease.c)
 */

void __fastcall RaAttemptHighWaterMarkIncreasePassive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1440, 0);
  RaAttemptHighWaterMarkIncrease(Context + 192);
}
