/*
 * XREFs of UsbhFinishStart @ 0x1C0017D60
 * Callers:
 *     UsbhAsyncStartComplete @ 0x1C0008830 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x1C00089E8 (UsbhHubStart.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhEnablePortIndicators @ 0x1C0007F00 (UsbhEnablePortIndicators.c)
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C00141E0 (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhSyncPowerOnPorts @ 0x1C00156B0 (UsbhSyncPowerOnPorts.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhLogStartFailure @ 0x1C003C60C (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041ECC (UsbhQueueSoftConnectChange.c)
 *     UsbhDisablePort @ 0x1C0043BCC (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhFinishStart(__int64 a1, __int64 a2)
{
  int v4; // esi
  unsigned __int16 i; // di
  __int64 v6; // rdx
  int v7; // eax
  char v9; // r10
  int v10; // [rsp+48h] [rbp-30h]
  char v11; // [rsp+90h] [rbp+18h] BYREF
  char v12; // [rsp+92h] [rbp+1Ah]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  Log(a1, 16, 1715622740, a1, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids);
  v4 = UsbhSyncPowerOnPorts(a1);
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(a1, v4, 3, 482, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\bus.c", "PowerOnPorts");
  }
  else
  {
    UsbhEnablePortIndicators(a1);
    for ( i = 1; ; ++i )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v6 = *(_QWORD *)(a1 + 64);
      if ( !v6 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v6 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v6);
      if ( i > *(unsigned __int8 *)(v6 + 2938) )
        break;
      v7 = UsbhQueryPortState(a1, i, (__int64)&v11, &v13);
      v4 = v7;
      if ( (v7 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 16, 1768843569, (unsigned int)i + 1, v7);
        if ( !Usb_Disconnected(v4) )
        {
          LOBYTE(v10) = 0;
          UsbhException(a1, i, 23, 0, 0, v4, v13, usbfile_bus_c, 511, v10);
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            13,
            (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
            v4);
        break;
      }
      if ( (v11 & 1) != 0 && (v12 & 1) == 0 )
      {
        Log(a1, 16, 1768843570, i, v7);
        if ( (v9 & 2) != 0 )
        {
          if ( UsbhGetPortData(a1, i) )
            UsbhDisablePort(a1);
        }
        UsbhQueueSoftConnectChange(a1);
      }
    }
  }
  if ( v4 >= 0 )
  {
    Log(a1, 8, 1381192747, 0LL, 0LL);
    UsbhDispatch_HardResetEvent(a1, a2, 1);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
      v4);
  Log(a1, 16, 1718514515, a1, v4);
  return (unsigned int)v4;
}
