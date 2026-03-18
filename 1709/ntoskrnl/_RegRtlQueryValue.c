/*
 * XREFs of _RegRtlQueryValue @ 0x140521C44
 * Callers:
 *     DrvDbSetDriverPackageMappedProperty @ 0x140443FC8 (DrvDbSetDriverPackageMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14045A670 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14045A8F0 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140518C7C (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1405199A8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PnpGetServiceStartType @ 0x140519C14 (PnpGetServiceStartType.c)
 *     _PnpRegQueryValueIndirect @ 0x140522A20 (_PnpRegQueryValueIndirect.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140530A4C (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1405319B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmAddDeviceToContainerWorker @ 0x14054E500 (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x140550E28 (_CmIsDeviceInContainer.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14059B174 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405A48C8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpCtxRegQueryValue @ 0x1405C45E0 (_PnpCtxRegQueryValue.c)
 *     _SysCtxOpenControlSet @ 0x1405C4E74 (_SysCtxOpenControlSet.c)
 *     PipHardwareConfigGetIndex @ 0x1405C8818 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405C88A0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405D18F0 (_CmDeviceClassesSubkeyCallback.c)
 *     PnpCheckDriverDependencies @ 0x1406C14F8 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406C2070 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140786BA4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140786FD4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140787140 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1407872AC (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v8; // rsi
  unsigned int inited; // ebx
  char *p_KeyValueInformation; // rdi
  ULONG Length; // ebp
  NTSTATUS v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v16; // eax
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-F0h] BYREF
  char KeyValueInformation; // [rsp+48h] [rbp-E0h] BYREF

  v8 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  if ( !a4 || *a5 <= 0x80 )
  {
    p_KeyValueInformation = &KeyValueInformation;
    Length = 140;
LABEL_5:
    v12 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v12;
    if ( !v12 || v12 == -2147483643 )
    {
      v13 = *a5;
      v14 = *((_DWORD *)p_KeyValueInformation + 2);
      *a5 = v14;
      if ( v13 < v14 )
        inited = -1073741789;
      else
        memmove(a4, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      if ( a3 )
        *a3 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return inited;
  }
  v16 = *a5 + 12;
  Length = -1;
  if ( v16 >= 0xC )
    Length = *a5 + 12;
  inited = *a5 >= 0xFFFFFFF4 ? 0xC0000095 : 0;
  if ( v16 >= 0xC )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    p_KeyValueInformation = (char *)PoolWithTag;
    goto LABEL_5;
  }
  return inited;
}
