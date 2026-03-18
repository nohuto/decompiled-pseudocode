/*
 * XREFs of UsbhPdoPower_SetPower @ 0x1C0003A70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoSystemPowerState @ 0x1C0003B78 (UsbhPdoSystemPowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C00058C0 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

__int64 __fastcall UsbhPdoPower_SetPower(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v5; // rsi
  __int64 v6; // r14
  _IO_STACK_LOCATION *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r9
  unsigned int Options; // eax
  __int64 v13; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = PdoExt(a1);
  v6 = *(_QWORD *)(v5 + 1176);
  PdoExt(a1);
  v7 = a2->Tail.Overlay.CurrentStackLocation;
  if ( v7->Parameters.Create.Options <= 1 )
  {
    Log(v6, 16, 1346653747, (_DWORD)v7, (__int64)a2);
    *(_QWORD *)(v8 + 8 * v9 + 800) = a2;
    *(_QWORD *)(v8 + 8 * v9 + 816) = v10;
    *(_DWORD *)(v8 + 4 * v9 + 832) = 752;
  }
  FdoExt(*(_QWORD *)(v5 + 1176));
  Log(*(_QWORD *)(v5 + 1176), 16, 1885623120, a1, (__int64)a2);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhPdoSystemPowerState(*(_QWORD *)(v5 + 1176), a1, a2);
  if ( Options == 1 )
    return UsbhPdoDevicePowerState(*(_QWORD *)(v5 + 1176), a1, a2);
  v13 = PdoExt(a1);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v13 + 1176), a1, a2, 767LL);
  a2->IoStatus.Status = -1073741637;
  IofCompleteRequest(a2, 0);
  return 3221225659LL;
}
