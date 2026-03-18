/*
 * XREFs of UsbhPoStartNextPowerIrp_Fdo @ 0x1C00034D0
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C0002120 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0002E50 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0003010 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoPower_QueryPower @ 0x1C0003170 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoQuerySystemPowerState @ 0x1C000322C (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQueryDevicePowerDxPoCompletion @ 0x1C0003320 (UsbhFdoQueryDevicePowerDxPoCompletion.c)
 *     UsbhFdoQueryDevicePowerState @ 0x1C00033B8 (UsbhFdoQueryDevicePowerState.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C0003434 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhFdoPower_SetPower @ 0x1C0004590 (UsbhFdoPower_SetPower.c)
 *     UsbhFdoSystemPowerState @ 0x1C0004680 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C00049E4 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C0004C10 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C0008B40 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Fdo(__int64 a1, IRP *a2, int a3)
{
  __int64 v6; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 Options; // rcx
  __int64 v9; // r8
  __int64 v10; // r11
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // rdx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    v9 = *(_QWORD *)(v6 + 8 * Options + 840);
    v10 = (unsigned int)Options;
    v11 = UsbhLogMask;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v12 = *(_QWORD *)(v6 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
      *(_DWORD *)v12 = 827215696;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v9;
      *(_QWORD *)(v12 + 24) = a2;
      v11 = UsbhLogMask;
    }
    v13 = *(_QWORD *)(v6 + 8 * v10 + 856);
    if ( (v11 & 0x10) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 843992912;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v13;
        *(_QWORD *)(v15 + 24) = CurrentStackLocation;
      }
    }
    *(_QWORD *)(v6 + 8 * v10 + 840) = 0LL;
    *(_QWORD *)(v6 + 8 * v10 + 856) = 0LL;
    *(_DWORD *)(v6 + 4 * v10 + 872) = a3;
    PoStartNextPowerIrp(a2);
  }
}
