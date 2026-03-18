/*
 * XREFs of Usbh_BS_BusPause @ 0x1C000B548
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000B320 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x1C000B640 (UsbhReleaseBusStateLock.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhBusDisconnect_Action @ 0x1C003F394 (UsbhBusDisconnect_Action.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F41C (UsbhBusPnpStop_Action.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C00458DC (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusPause(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rdx
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rdx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  FdoExt(*(_QWORD *)(a2 + 8));
  Log(a1, 2048, 1651724371, a2, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v3);
  v7 = v3 - 3;
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( v8 )
    {
      v11 = v8 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v9 = a2;
                v16 = v15 - 1;
                if ( v16 )
                {
                  if ( v16 != 1 )
                    return UsbhReleaseBusStateLock(a1, v9);
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
  v9 = a2;
  return UsbhReleaseBusStateLock(a1, v9);
}
