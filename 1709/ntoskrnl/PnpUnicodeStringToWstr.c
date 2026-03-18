/*
 * XREFs of PnpUnicodeStringToWstr @ 0x140527F48
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140527DE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDeviceRegistration @ 0x1405554E4 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140555688 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1405565F0 (IopBuildGlobalSymbolicLinkString.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140586694 (IopDeviceObjectFromSymbolicName.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14058BFFC (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14058C190 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IoRegisterDeviceInterface @ 0x140590360 (IoRegisterDeviceInterface.c)
 *     PnpDisableDeviceInterfaces @ 0x14059DA44 (PnpDisableDeviceInterfaces.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405D37B8 (PnpSetDeviceInterfacePropertyData.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PnpGetDeviceDependencyList @ 0x1406BF19C (PnpGetDeviceDependencyList.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1406BF880 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406BF95C (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406C1E54 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpUnicodeStringToWstr(_QWORD *a1, unsigned int *a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v7; // dx
  _WORD *v8; // rcx
  unsigned __int16 v9; // r8
  unsigned int v10; // ebp
  _WORD *PoolWithTag; // rax
  _WORD *v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // r9
  _WORD *v16; // rax

  v3 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = a3[1];
  if ( v7 < 2u || (v8 = (_WORD *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    *a1 = 0LL;
    if ( a2 )
      *a2 = 0;
    return v3;
  }
  v9 = *a3;
  if ( v9 > v7 )
    return (unsigned int)-1073741811;
  if ( v9 )
  {
    if ( !*v8 || v9 == v7 && !v8[((unsigned __int64)v9 >> 1) - 1] )
      goto LABEL_17;
    if ( v9 <= (unsigned __int64)v7 - 2 )
    {
      v15 = (unsigned __int64)v9 >> 1;
      if ( !v8[v15 - 1] || !v8[v15] )
        goto LABEL_17;
    }
    v10 = v9 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x75737050u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *((const void **)a3 + 1), *a3);
      v13 = (unsigned __int64)*a3 >> 1;
      *a1 = v12;
      v12[v13] = 0;
      if ( a2 )
        *a2 = v10;
      return v3;
    }
    return (unsigned int)-1073741670;
  }
  if ( !*v8 )
  {
LABEL_17:
    *a1 = v8;
    if ( a2 )
      *a2 = v7;
    return v3;
  }
  v16 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x75737050u);
  if ( !v16 )
    return (unsigned int)-1073741670;
  *v16 = 0;
  *a1 = v16;
  if ( a2 )
    *a2 = 2;
  return v3;
}
