/*
 * XREFs of UsbhReleaseFdoPwrLock @ 0x1C0004E50
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0001710 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoSetPowerSx_Action @ 0x1C00019BC (UsbhFdoSetPowerSx_Action.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C0001FF8 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0002120 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0002E50 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0003010 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0003840 (UsbhFdoD0Worker_Action.c)
 *     UsbhPdoSystemPowerState @ 0x1C0003FE8 (UsbhPdoSystemPowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C0004108 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0004430 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C0004680 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C00049E4 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C0004C10 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0006568 (UsbhPdoSetD0_Finish.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00129D0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoResetPdoPort @ 0x1C003DE90 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045170 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B18 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055D20 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReleaseFdoPwrLock(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // r8
  KIRQL v5; // dl

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v2 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(v3 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(v3, 0LL);
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(v3, *(_QWORD *)(v3 + 64));
  *(_DWORD *)(a2 + 32) = 1734964085;
  v5 = *(_BYTE *)(v2 + 5064);
  *(_QWORD *)(v2 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 5056), v5);
}
