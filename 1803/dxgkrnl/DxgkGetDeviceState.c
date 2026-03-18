/*
 * XREFs of DxgkGetDeviceState @ 0x1C00E5AE0
 * Callers:
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F870 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkGetDeviceStateInternal @ 0x1C0097064 (DxgkGetDeviceStateInternal.c)
 */

__int64 __fastcall DxgkGetDeviceState(ULONG64 a1)
{
  char CurrentThreadPreviousMode; // al
  __int64 v3; // r8

  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  return DxgkGetDeviceStateInternal(a1, CurrentThreadPreviousMode == 1, v3);
}
