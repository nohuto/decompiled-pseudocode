/*
 * XREFs of _PnpCtxRegCreateTree @ 0x1404896A4
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x140483940 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x140486A00 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140486BA8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpOpenPropertiesKey @ 0x140487174 (_PnpOpenPropertiesKey.c)
 *     DrvDbLoadDatabaseNode @ 0x140489400 (DrvDbLoadDatabaseNode.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404BE304 (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DFC1C (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404E1878 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404E2728 (_CmOpenCommonClassRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x1404896F8 (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *a1;
  return SysCtxRegCreateTree(v7, a2, a3, a4, a5, a6);
}
