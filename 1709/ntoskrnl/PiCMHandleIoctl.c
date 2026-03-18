/*
 * XREFs of PiCMHandleIoctl @ 0x140525E40
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x140525DD0 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMGetDeviceInterfaceAlias @ 0x14044B0D0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMDeviceAction @ 0x14044E39C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140451DE0 (PiCMGetDeviceDepth.c)
 *     PiCMGetDeviceInterfaceList @ 0x140518AB4 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectProperty @ 0x140525460 (PiCMGetObjectProperty.c)
 *     PiCMGetRegistryProperty @ 0x140526810 (PiCMGetRegistryProperty.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140530950 (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x140530BE0 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405520B8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMOpenClassKey @ 0x140573DB4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x140573F4C (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140574110 (PiCMOpenObjectKey.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     PiCMSetObjectProperty @ 0x140574AD4 (PiCMSetObjectProperty.c)
 *     PiCMGetDeviceIdList @ 0x140586D80 (PiCMGetDeviceIdList.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1406CF784 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406CF8DC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406CFD04 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406CFDE0 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406D0000 (PiCMDeleteObject.c)
 *     PiCMEnumerateSubKeys @ 0x1406D0180 (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406D064C (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406D085C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1406D0A14 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1406D0C14 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1406D0D00 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406D0E9C (PiCMUnregisterDeviceInterface.c)
 */

__int64 __fastcall PiCMHandleIoctl(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *Handle,
        unsigned int a6,
        int a7)
{
  *Handle = 0;
  if ( a6 <= 0x47083F )
  {
    if ( a6 == 4655167 )
      return PiCMGetDeviceInterfaceAlias(a1, a2, a3, a4, a7, Handle);
    if ( a6 > 0x47081F )
    {
      switch ( a6 )
      {
        case 0x470823u:
          return PiCMGetRelatedDeviceInstance(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470827u:
          return PiCMGetDeviceStatus(a1);
        case 0x47082Bu:
          return PiCMGetDeviceDepth(a1, a2, a3, a4, a7, Handle);
        case 0x47082Fu:
          return PiCMSetDeviceProblem(a1, a2, a3, a4);
        case 0x470833u:
          return PiCMQueryRemove(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470837u:
          return PiCMRegisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x47083Bu:
          return PiCMUnregisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)Handle);
      }
    }
    else
    {
      switch ( a6 )
      {
        case 0x47081Fu:
          return PiCMSetRegistryProperty(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470803u:
          return PiCMGetDeviceIdList(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470807u:
          return PiCMGetDeviceInterfaceList(a1, a2, a3, a4, a7, Handle);
        case 0x47080Bu:
          return PiCMEnumerateSubKeys(a1, a2, a3, a4);
        case 0x47080Fu:
          return PiCMGetObjectPropertyKeys(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470813u:
          return PiCMGetObjectProperty(a1, a2, a3, a4, a7, Handle);
        case 0x470817u:
          return PiCMSetObjectProperty(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x47081Bu:
          return PiCMGetRegistryProperty(a1, a2, a3, a4, a7, (__int64)Handle);
      }
    }
    return 3221225659LL;
  }
  if ( a6 <= 0x47085F )
  {
    switch ( a6 )
    {
      case 0x47085Fu:
        return PiCMDeleteDeviceKey(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x470843u:
        return PiCMValidateDeviceInstance(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x470847u:
        return PiCMCreateDevice(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x47084Bu:
        return PiCMDeleteDevice(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x47084Fu:
        return PiCMDeviceAction(a1, a2, a3, a4, a7, Handle);
      case 0x470853u:
        return PiCMOpenDeviceInterfaceKey(a1, a2, a3, a4, a7, Handle);
      case 0x470857u:
        return PiCMDeleteDeviceInterfaceKey(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x47085Bu:
        return PiCMOpenDeviceKey(a1, a2, a3, a4, a7, (__int64)Handle);
    }
    return 3221225659LL;
  }
  switch ( a6 )
  {
    case 0x470863u:
      return PiCMOpenClassKey(a1, a2, a3, a4, a7, Handle);
    case 0x470867u:
      return PiCMDeleteClassKey(a1, a2, a3, a4, a7, (__int64)Handle);
    case 0x47086Bu:
      return PiCMOpenObjectKey(a1, a2, a3, a4, a7, (__int64)Handle);
    case 0x47086Fu:
      return PiCMCreateObject(a1, a2, a3, a4, a7, (__int64)Handle);
  }
  if ( a6 != 4655219 )
  {
    if ( a6 == 4655223 )
      return PiCMGetObjectList(a1, a2, a3, a4, a7, (__int64)Handle);
    return 3221225659LL;
  }
  return PiCMDeleteObject(a1, a2, a3, a4, a7, (__int64)Handle);
}
