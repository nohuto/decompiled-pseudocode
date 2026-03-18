/*
 * XREFs of PiCMHandleIoctl @ 0x14050A580
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x14050A510 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMGetDeviceInterfaceList @ 0x14048FFD8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectProperty @ 0x14050A040 (PiCMGetObjectProperty.c)
 *     PiCMGetRegistryProperty @ 0x14050BA28 (PiCMGetRegistryProperty.c)
 *     PiCMOpenObjectKey @ 0x14050C084 (PiCMOpenObjectKey.c)
 *     PiCMGetObjectList @ 0x14050C2C8 (PiCMGetObjectList.c)
 *     PiCMOpenClassKey @ 0x14056AD20 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1405731B0 (PiCMOpenDeviceKey.c)
 *     PiCMGetDeviceIdList @ 0x140575248 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceStatus @ 0x140585B84 (PiCMGetDeviceStatus.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1405C1C98 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMValidateDeviceInstance @ 0x1405C664C (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405DE554 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14064069C (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1407366F0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140736894 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140736CBC (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140736D98 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140736FBC (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140737184 (PiCMDeviceAction.c)
 *     PiCMEnumerateSubKeys @ 0x140737488 (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceDepth @ 0x140737954 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140737A30 (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140737C88 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14073823C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1407384E0 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1407386B0 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14073884C (PiCMUnregisterDeviceInterface.c)
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
      return PiCMGetDeviceInterfaceAlias(a1, a2, a3, a4, a7, (__int64)Handle);
    if ( a6 > 0x47081F )
    {
      switch ( a6 )
      {
        case 0x470823u:
          return PiCMGetRelatedDeviceInstance(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470827u:
          return PiCMGetDeviceStatus(a1);
        case 0x47082Bu:
          return PiCMGetDeviceDepth(a1, a2, a3, a4, a7, (__int64)Handle);
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
        return PiCMDeviceAction(a1, a2, a3, a4, a7, (__int64)Handle);
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
