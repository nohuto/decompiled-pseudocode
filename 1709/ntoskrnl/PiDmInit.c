/*
 * XREFs of PiDmInit @ 0x140849880
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDmListInit @ 0x1405CD4D8 (PiDmListInit.c)
 *     PiDmObjectManagerPopulate @ 0x1405CD534 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectManagerInit @ 0x1405CD918 (PiDmObjectManagerInit.c)
 */

__int64 PiDmInit()
{
  __int64 result; // rax
  unsigned int i; // ebx

  PiDmObjectManagerInit((__int64)&PiDmDeviceManager, 1);
  PiDmObjectManagerInit((__int64)&PiDmDeviceInterfaceManager, 3);
  PiDmObjectManagerInit((__int64)&PiDmDeviceInterfaceClassManager, 4);
  PiDmObjectManagerInit((__int64)&PiDmDeviceContainerManager, 5);
  PiDmObjectManagerInit((__int64)&PiDmDeviceInstallerClassManager, 2);
  result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceManager);
  if ( (int)result >= 0 )
  {
    result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceInterfaceManager);
    if ( (int)result >= 0 )
    {
      result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceInterfaceClassManager);
      if ( (int)result >= 0 )
      {
        result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceContainerManager);
        if ( (int)result >= 0 )
        {
          result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceInstallerClassManager);
          if ( (int)result >= 0 )
          {
            for ( i = 0; i < 5; ++i )
            {
              result = PiDmListInit(i);
              if ( (int)result < 0 )
                break;
            }
          }
        }
      }
    }
  }
  return result;
}
