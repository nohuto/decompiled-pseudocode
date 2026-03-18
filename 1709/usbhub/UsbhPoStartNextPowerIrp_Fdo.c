/*
 * XREFs of UsbhPoStartNextPowerIrp_Fdo @ 0x1C0003190
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C00020B0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0002AE0 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0002C90 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoPower_QueryPower @ 0x1C0002DF0 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoQuerySystemPowerState @ 0x1C0002EE4 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQueryDevicePowerDxPoCompletion @ 0x1C0002FE0 (UsbhFdoQueryDevicePowerDxPoCompletion.c)
 *     UsbhFdoQueryDevicePowerState @ 0x1C0003078 (UsbhFdoQueryDevicePowerState.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C00030F4 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhFdoPower_SetPower @ 0x1C0004120 (UsbhFdoPower_SetPower.c)
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C00044D4 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C0004700 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C0005BA0 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Fdo(__int64 a1, IRP *a2, int a3)
{
  _DWORD *v5; // rbx
  __int64 CurrentStackLocation; // rsi
  __int64 v7; // rax
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // r10

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v7 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v7 <= 1 )
  {
    Log(a1, 16, 1347374641, *(_QWORD *)&v5[2 * v7 + 210], (__int64)a2);
    Log(v9, 16, 1347374642, *(_QWORD *)&v5[2 * v8 + 214], CurrentStackLocation);
    *(_QWORD *)&v5[2 * v10 + 210] = 0LL;
    *(_QWORD *)&v5[2 * v10 + 214] = 0LL;
    v5[v10 + 218] = a3;
    PoStartNextPowerIrp(a2);
  }
}
