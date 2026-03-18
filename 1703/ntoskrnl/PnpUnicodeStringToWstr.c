/*
 * XREFs of PnpUnicodeStringToWstr @ 0x14048AF4C
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x14048ADE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDeviceRegistration @ 0x1404D9C6C (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404DE560 (PpForEachDeviceInstanceDriver.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E47B4 (IopBuildGlobalSymbolicLinkString.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405594C0 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140559660 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IoGetDeviceInterfaceAlias @ 0x14056BDA0 (IoGetDeviceInterfaceAlias.c)
 *     PnpDisableDeviceInterfaces @ 0x14056E2A4 (PnpDisableDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140581EA0 (IopDeviceObjectFromSymbolicName.c)
 *     PipApplyFunctionToServiceInstances @ 0x14059C6CC (PipApplyFunctionToServiceInstances.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     IoRegisterDeviceInterface @ 0x1405C2650 (IoRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405C4248 (PnpSetDeviceInterfacePropertyData.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1405D1220 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x1406934F8 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x140693BA0 (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14069629C (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
