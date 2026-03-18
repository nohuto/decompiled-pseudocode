/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x1406386F8
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x14050CE9C (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCreateDriverSwDevices @ 0x1405CAA60 (PiCreateDriverSwDevices.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140637390 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x140637574 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140637840 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _PnpGetGenericObjectList @ 0x140637A8C (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x140637C84 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140637FB0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140638420 (_CmEnumSubkeyCallback.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140638910 (_CmDevicePanelEnumSubkeyCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140722AC4 (PipHardwareConfigClearStartOverrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1407F25F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x1407F2920 (DrvDbGetObjectSubKeyList.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x140637DEC (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v7[0] = v4;
  v7[1] = PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v7[2] = v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2, (__int64)a2, (__int64)v7);
}
