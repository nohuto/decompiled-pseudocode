/*
 * XREFs of UsbhAcquireFdoPwrLock @ 0x1C00049D0
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00015A0 (UsbhPdoSetD0_Finish.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C00017C0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C00020B0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0002AE0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0002C90 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0003480 (UsbhFdoD0Worker_Action.c)
 *     UsbhPdoSystemPowerState @ 0x1C0003B78 (UsbhPdoSystemPowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0003FC0 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C0004700 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoResetPdoPort @ 0x1C003ED40 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0046020 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048EBC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055BD0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhAcquireFdoPwrLock(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 result; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_BYTE *)(v7 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 5056));
  v8 = *(_DWORD *)(v7 + 4172);
  *(_DWORD *)(a2 + 44) = a3;
  *(_DWORD *)(a2 + 36) = a4;
  *(_DWORD *)(a2 + 40) = v8;
  *(_DWORD *)(a2 + 32) = 844055622;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  result = *(unsigned int *)(v7 + 4172);
  *(_QWORD *)(v7 + 1344) = a2;
  return result;
}
