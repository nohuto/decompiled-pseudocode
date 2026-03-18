/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x140594ADC
 * Callers:
 *     DrvDbGetObjectSubKeyCallback @ 0x1404483F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x14044FF2C (DrvDbGetObjectSubKeyList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1405319B8 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCreateDriverSwDevices @ 0x140552348 (PiCreateDriverSwDevices.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405D18F0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405D3230 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405E7994 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405EA4A0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405EC82C (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _PnpGetGenericObjectList @ 0x1405ED3FC (_PnpGetGenericObjectList.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1406BDAE0 (PipHardwareConfigClearStartOverrides.c)
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x14057E7E4 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *a1;
  v7[0] = v4;
  v7[1] = PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v7[2] = v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2, a2, (__int64)v7);
}
