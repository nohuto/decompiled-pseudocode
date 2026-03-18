/*
 * XREFs of _RegRtlQueryValue @ 0x140505EBC
 * Callers:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404908C8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _PnpRegQueryValueIndirect @ 0x1405087D0 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14050CE9C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x14050DA40 (DrvDbGetRegValueMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14056B1FC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140586188 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1405C664C (PiCMValidateDeviceInstance.c)
 *     _CmAddDeviceToContainerWorker @ 0x1405D3F7C (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x1405D56CC (_CmIsDeviceInContainer.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405DB02C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1405DC7A0 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1405E7EF8 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _SysCtxOpenControlSet @ 0x140624574 (_SysCtxOpenControlSet.c)
 *     PnpGetServiceStartType @ 0x14063392C (PnpGetServiceStartType.c)
 *     PipHardwareConfigGetIndex @ 0x140634100 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14063418C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _PnpCtxRegQueryValue @ 0x140634274 (_PnpCtxRegQueryValue.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140637FB0 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140722B68 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x1407271D8 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407280A4 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14073D110 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmAddPanelDeviceWorker @ 0x1407EC114 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1407F1978 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1407F1DB8 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x1407F1F24 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1407F2090 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1407F37B4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
