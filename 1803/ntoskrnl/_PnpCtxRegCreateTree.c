/*
 * XREFs of _PnpCtxRegCreateTree @ 0x140586F54
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     DrvDbOpenObjectRegKey @ 0x1405027D0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140502990 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14050333C (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140503C50 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x14050421C (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405055A0 (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqOpenUserObjectRegKey @ 0x14051A080 (PiDqOpenUserObjectRegKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140564E68 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140586C28 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1407ED0A4 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x140586FAC (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegCreateTree(v7, a2, a3, a4, a5, a6);
}
