/*
 * XREFs of Usbh_BS_BusRun @ 0x1C000AB60
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x1C000ADD0 (UsbhReleaseBusStateLock.c)
 *     UsbhBusPause_Action @ 0x1C000E8D0 (UsbhBusPause_Action.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSshBusBusy @ 0x1C001B1C4 (UsbhSshBusBusy.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhBusPnpStop_Action @ 0x1C003E56C (UsbhBusPnpStop_Action.c)
 */

__int64 __fastcall Usbh_BS_BusRun(PDEVICE_OBJECT DeviceObject, __int64 a2, int a3)
{
  __int64 v3; // rsi
  _DWORD *DeviceExtension; // rdx
  void *v7; // rdx
  __int64 v8; // rcx
  unsigned int *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax

  v3 = a3;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  FdoExt(*(_QWORD *)(a2 + 8));
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v7 = DeviceObject->DeviceExtension;
    if ( v7 )
    {
      v8 = *((_QWORD *)v7 + 111)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v7 + 220) & *((_DWORD *)v7 + 221));
      *(_DWORD *)v8 = 1314026338;
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
      12,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v3);
  if ( (_DWORD)v3 != 7 )
  {
    *(_DWORD *)(a2 + 128) = 1;
    if ( (_DWORD)v3 == 3 )
    {
      UsbhBusPause_Action(DeviceObject);
      UsbhBusPnpStop_Action(DeviceObject, a2);
      return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, a2);
    }
    if ( (_DWORD)v3 == 6 )
    {
      UsbhBusPause_Action(DeviceObject);
      UsbhSshBusBusy(DeviceObject, a2);
      return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, a2);
    }
    return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, a2);
  }
  if ( (UsbhBusPause_Action(DeviceObject) & 0xC0000000) == 0xC0000000 )
    return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, a2);
  v9 = (unsigned int *)DeviceObject->DeviceExtension;
  if ( !v9 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *v9 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v10 = 4;
  if ( v9[610] != 4 )
  {
    v9[610] = 4;
    *(_DWORD *)(a2 + 80) = 4;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v11 = v9[208];
  *((_QWORD *)v9 + 167) = 0LL;
  v9[8 * v11 + 137] = 4;
  KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 612), 16, 1, 0);
  return v10;
}
