/*
 * XREFs of UsbhFinishStart @ 0x1C0009190
 * Callers:
 *     UsbhAsyncStartComplete @ 0x1C0009800 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x1C001DD84 (UsbhHubStart.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0009330 (UsbhDispatch_HardResetEvent.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSyncPowerOnPorts @ 0x1C00155A0 (UsbhSyncPowerOnPorts.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhLogStartFailure @ 0x1C003B280 (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C003C8F0 (UsbhDispatch_PindicatorEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 *     UsbhDisablePort @ 0x1C0042D8C (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhFinishStart(__int64 a1, __int64 a2)
{
  int v4; // ebp
  __int64 v5; // rdi
  unsigned __int16 j; // di
  __int64 v7; // rdx
  int PortState; // eax
  unsigned __int16 i; // di
  __int64 PortData; // rsi
  __int64 v12; // rax
  char v13; // r10
  int v14; // [rsp+48h] [rbp-40h]
  char v15; // [rsp+A0h] [rbp+18h]
  char v16; // [rsp+A2h] [rbp+1Ah]
  int v17; // [rsp+A8h] [rbp+20h]

  Log(a1, 16, 1715622740, a1, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids);
  v4 = UsbhSyncPowerOnPorts(a1);
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(a1, v4, 3, 482, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\bus.c", "PowerOnPorts");
  }
  else
  {
    v5 = FdoExt(a1);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        13,
        (__int64)&WPP_71d4df441bc53643947fc1224878c183_Traceguids);
    if ( *(_BYTE *)(v5 + 3008) )
    {
      for ( i = 1; i <= *(unsigned __int8 *)(FdoExt(a1) + 2938); ++i )
      {
        PortData = UsbhGetPortData(a1, i);
        if ( PortData )
        {
          v12 = FdoExt(a1);
          UsbhDispatch_PindicatorEvent(a1, PortData, 5LL, v12 + 1384);
        }
      }
    }
    for ( j = 1; ; ++j )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v7 = *(_QWORD *)(a1 + 64);
      if ( !v7 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v7 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v7);
      if ( j > *(unsigned __int8 *)(v7 + 2938) )
        break;
      PortState = UsbhQueryPortState(a1);
      v4 = PortState;
      if ( (PortState & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 16, 1768843569, j + 1, PortState);
        if ( !Usb_Disconnected(v4) )
        {
          LOBYTE(v14) = 0;
          UsbhException(a1, j, 23, 0, 0, v4, v17, usbfile_bus_c, 511, v14);
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            13,
            (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
            v4);
        break;
      }
      if ( (v15 & 1) != 0 && (v16 & 1) == 0 )
      {
        Log(a1, 16, 1768843570, j, PortState);
        if ( (v13 & 2) != 0 )
        {
          if ( UsbhGetPortData(a1, j) )
            UsbhDisablePort(a1);
        }
        UsbhQueueSoftConnectChange(a1);
      }
    }
  }
  if ( v4 >= 0 )
  {
    Log(a1, 8, 1381192747, 0, 0LL);
    UsbhDispatch_HardResetEvent(a1, a2, 1LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
      v4);
  Log(a1, 16, 1718514515, a1, v4);
  return (unsigned int)v4;
}
