/*
 * XREFs of RaAttemptHighWaterMarkIncreasePassive @ 0x1C0017C30
 * Callers:
 *     <none>
 * Callees:
 *     RaAttemptHighWaterMarkIncrease @ 0x1C003F5F4 (RaAttemptHighWaterMarkIncrease.c)
 */

void __fastcall RaAttemptHighWaterMarkIncreasePassive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 1444, 0);
  RaAttemptHighWaterMarkIncrease(Context + 192);
}
