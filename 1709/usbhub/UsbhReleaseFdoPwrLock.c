/*
 * XREFs of UsbhReleaseFdoPwrLock @ 0x1C0004944
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00015A0 (UsbhPdoSetD0_Finish.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C00017C0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoSetPowerSx_Action @ 0x1C0001A6C (UsbhFdoSetPowerSx_Action.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C0001F90 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C00020B0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0002AE0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0002C90 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0003480 (UsbhFdoD0Worker_Action.c)
 *     UsbhPdoSystemPowerState @ 0x1C0003B78 (UsbhPdoSystemPowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0003FC0 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C00044D4 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C0004700 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0010FC0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoResetPdoPort @ 0x1C003ED40 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0046020 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C00468E4 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048EBC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055BD0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReleaseFdoPwrLock(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rdx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v3 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_DWORD **)(v4 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(v4, 0LL);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(v4, v5);
  *(_DWORD *)(a2 + 32) = 1734964085;
  *(_QWORD *)(v3 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 5056), *(_BYTE *)(v3 + 5064));
}
