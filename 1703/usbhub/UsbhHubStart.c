/*
 * XREFs of UsbhHubStart @ 0x1C001DD84
 * Callers:
 *     Usbh_FDO_WaitPnpStart @ 0x1C001B980 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BCF0 (Usbh_FDO_WaitPnpRestart.c)
 * Callees:
 *     UsbhFdoSetD0Cold @ 0x1C00056B0 (UsbhFdoSetD0Cold.c)
 *     UsbhFinishStart @ 0x1C0009190 (UsbhFinishStart.c)
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhDisableTimerObject @ 0x1C0025130 (UsbhDisableTimerObject.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C0028290 (Usbh_HubRootHubInitNotification.c)
 *     UsbhReinitialize @ 0x1C003B514 (UsbhReinitialize.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubStart(__int64 a1, int a2)
{
  _DWORD *v4; // rsi
  int v5; // edi
  _DWORD *v6; // rax
  __int64 *v7; // rbx
  int inited; // edi
  int v9; // r10d
  int v11; // r8d

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        Log(*(_QWORD *)(a1 + 8), 2, 1919243092, 0LL, 0LL);
        inited = UsbhReinitialize(*(_QWORD *)(a1 + 8));
        if ( inited >= 0 )
          return (unsigned int)UsbhFdoSetD0Cold(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v6 = FdoExt(*(_QWORD *)(a1 + 8));
      v7 = (__int64 *)(v6 + 390);
      Log(*((_QWORD *)v6 + 196), 2, 1635341140, 0LL, (__int64)(v6 + 390));
      inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v7, File, 1u, 0x20u);
      if ( (inited & 0xC0000000) != 0xC0000000 )
      {
        Log(v7[1], 8, 1700023634, *((_QWORD *)v4 + 346), 0LL);
        UsbhEnableTimerObject(v7[1], *((_QWORD *)v4 + 346), 1000, 0, (__int64)v7, 0x49577473u);
        inited = Usbh_HubRootHubInitNotification(v7[1], v7, UsbhInitCallback);
        Log(v7[1], 8, 1919445358, inited, 0LL);
        if ( (inited & 0xC0000000) == 0xC0000000 && inited != -1073741536 )
        {
          Log(v7[1], v9, 2018790738, *((_QWORD *)v4 + 346), 0LL);
          UsbhDisableTimerObject(v7[1], *((_QWORD *)v4 + 346));
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              14,
              (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids,
              inited);
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v7, 0x20u);
        }
      }
    }
  }
  else
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1937331028, 0LL, 0LL);
    inited = UsbhFinishStart(*(_QWORD *)(a1 + 8), a1);
    v11 = 5;
    if ( inited < 0 )
      v11 = 9;
    UsbhDispatch_BusEvent(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, v11);
  }
  return (unsigned int)inited;
}
