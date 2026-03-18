/*
 * XREFs of DeviceSlot_Initialize @ 0x1C00164D8
 * Callers:
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0016290 (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C0006BC4 (XilCoreDeviceSlot_Initialize.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C001699C (XilDeviceSlot_InitializeSecureResources.c)
 */

__int64 __fastcall DeviceSlot_Initialize(__int64 a1)
{
  __int64 v3; // rcx

  if ( !Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 3221225666LL;
  v3 = a1 + 16;
  if ( *(_BYTE *)(a1 + 80) )
    return XilDeviceSlot_InitializeSecureResources(v3);
  else
    return XilCoreDeviceSlot_Initialize(v3);
}
