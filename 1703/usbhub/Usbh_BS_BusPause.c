/*
 * XREFs of Usbh_BS_BusPause @ 0x1C000ACB8
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhBusDisconnect_Action @ 0x1C003E4E4 (UsbhBusDisconnect_Action.c)
 *     UsbhBusPnpStop_Action @ 0x1C003E56C (UsbhBusPnpStop_Action.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044AA8 (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusPause(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rdx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  FdoExt(*(_QWORD *)(a2 + 8));
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = 1397781346;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a2;
      *(_QWORD *)(v8 + 24) = v3;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v3);
  v9 = v3 - 3;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v16 = v13 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                v14 = a2;
                v18 = v17 - 1;
                if ( v18 )
                {
                  if ( v18 != 1 )
                    return UsbhReleaseBusStateLock(a1, v14);
                  Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
                }
                else
                {
                  UsbhBusDisconnect_Action(a1, a2);
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    UsbhBusPnpStop_Action(a1, a2);
  }
  v14 = a2;
  return UsbhReleaseBusStateLock(a1, v14);
}
