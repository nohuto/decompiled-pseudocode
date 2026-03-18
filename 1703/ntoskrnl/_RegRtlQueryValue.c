/*
 * XREFs of _RegRtlQueryValue @ 0x140483F04
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x140484BF0 (_PnpRegQueryValueIndirect.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404DB004 (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x1404DF9A4 (_CmIsDeviceInContainer.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404E0178 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404E31E8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1404E6C28 (PiCMValidateDeviceInstance.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E8AB4 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404E8D50 (DrvDbGetRegValueMappedProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14059365C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14059A2E0 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1405A99BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405AAA10 (_CmDeviceClassesSubkeyCallback.c)
 *     PnpGetServiceStartType @ 0x1405AD9AC (PnpGetServiceStartType.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1405B07E8 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PipHardwareConfigGetIndex @ 0x1405B6654 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405B66DC (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _SysCtxOpenControlSet @ 0x1405CD4A0 (_SysCtxOpenControlSet.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140691E34 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x140695738 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406964B8 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     _PnpCtxRegQueryValue @ 0x140739C98 (_PnpCtxRegQueryValue.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140742D74 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1407431AC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140743318 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140743484 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140744B74 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlQueryValue(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  void *v8; // rsi
  unsigned int inited; // ebx
  unsigned int v10; // eax
  ULONG Length; // ebp
  PVOID PoolWithTag; // rax
  char *v13; // rdi
  NTSTATUS v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-F8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-F0h] BYREF
  char v20; // [rsp+48h] [rbp-E0h] BYREF

  v8 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  if ( !a4 || *a5 <= 0x80 )
  {
    v13 = &v20;
    Length = 140;
LABEL_10:
    v14 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v13, Length, &ResultLength);
    inited = v14;
    if ( !v14 || v14 == -2147483643 )
    {
      v15 = *a5;
      v16 = *((_DWORD *)v13 + 2);
      *a5 = v16;
      if ( v15 < v16 )
        inited = -1073741789;
      else
        memmove(a4, v13 + 12, *((unsigned int *)v13 + 2));
      if ( a3 )
        *a3 = *((_DWORD *)v13 + 1);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return inited;
  }
  v10 = *a5 + 12;
  Length = -1;
  if ( v10 >= 0xC )
    Length = *a5 + 12;
  inited = *a5 >= 0xFFFFFFF4 ? 0xC0000095 : 0;
  if ( v10 >= 0xC )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v13 = (char *)PoolWithTag;
    goto LABEL_10;
  }
  return inited;
}
