/*
 * XREFs of _PnpCtxRegCreateTree @ 0x140533240
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     PiDqOpenUserObjectRegKey @ 0x140447AF4 (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14051CAB4 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x14051D800 (_CmOpenCommonClassRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140521660 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x14053360C (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140533894 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140533B00 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140550AC4 (_CmOpenDeviceContainerRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x140533294 (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *a1;
  return SysCtxRegCreateTree(v7, a2, a3, a4, a5, a6);
}
