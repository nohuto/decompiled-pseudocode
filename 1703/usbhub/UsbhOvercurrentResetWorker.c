/*
 * XREFs of UsbhOvercurrentResetWorker @ 0x1C003D350
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003D150 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhWmiResetOvercurrent @ 0x1C004EEA0 (UsbhWmiResetOvercurrent.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhWait @ 0x1C0007FB8 (UsbhWait.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0009330 (UsbhDispatch_HardResetEvent.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     UsbhSetPortPower @ 0x1C003B724 (UsbhSetPortPower.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C003C8F0 (UsbhDispatch_PindicatorEvent.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00403A4 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Enable @ 0x1C0040754 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C0040AE4 (UsbhPCE_Resume.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhOvercurrentResetWorker(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v5; // rsi
  __int64 PortData; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // r10d
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r10
  int v15; // r11d
  __int64 v16; // r10
  int v17; // r11d
  int v18; // r11d
  unsigned __int16 v20; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 v21; // [rsp+7Ah] [rbp+12h]
  int v22; // [rsp+80h] [rbp+18h] BYREF

  v5 = a2;
  FdoExt(a1);
  PortData = UsbhGetPortData(a1, v5);
  Log(a1, 0x4000, 1870033495, a3, v5);
  UsbhWait(a1, 500);
  Log(a1, 0x4000, 1870016848, a3, (unsigned __int16)v5);
  v9 = UsbhGetPortData(a1, v5);
  if ( v9 )
    UsbhDispatch_PindicatorEvent(a1, v9, 3, a3);
  UsbhPCE_BusDisconnect(a1, a3, (unsigned __int16)v5);
  v10 = (int)UsbhSetPortPower(a1, v5);
  Log(a1, 0x4000, 1870017104, v10, (unsigned __int16)v5);
  if ( v11 < 0 )
  {
    if ( !Usb_Disconnected(v11) )
    {
      Log(a1, v18, 1870017569, a3, v5);
      UsbhDispatch_HardResetEvent(a1, a3, 3);
    }
  }
  else
  {
    UsbhWait(a1, SHIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next));
    UsbhPCE_Resume(a1, a3, (unsigned __int16)v5);
    Log(a1, 0x4000, 1870025299, v10, (unsigned __int16)v5);
    v12 = UsbhQueryPortState(a1, v5, (__int64)&v20, &v22);
    if ( !Usb_Disconnected(v12) )
    {
      Log(a1, 16, 1870017616, v20, v21);
      Log(a1, v15, 1870017582, v14, (unsigned __int16)v5);
      if ( (int)v16 >= 0 && (v20 & 1) != 0 && (v21 & 1) == 0 )
      {
        Log(a1, v17, 1870017872, (unsigned __int16)v5, v16);
        UsbhQueueSoftConnectChange(a1);
      }
      *(_DWORD *)(PortData + 2404) = 0;
      Log(a1, 0x4000, 1870017381, a3, (unsigned __int16)v5);
      UsbhPCE_Enable(a1, a3, (unsigned __int16)v5);
    }
  }
  LOBYTE(v13) = a4;
  return Usbh_OvercurrentDerefHubBusy(a1, PortData, v13);
}
