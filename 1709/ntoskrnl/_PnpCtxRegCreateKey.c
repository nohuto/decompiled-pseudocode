/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140530B64
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     _PnpOpenPropertiesKey @ 0x14051FA08 (_PnpOpenPropertiesKey.c)
 *     _PnpSetPropertyWorker @ 0x14053034C (_PnpSetPropertyWorker.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140533894 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x14054E500 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405D6894 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1405DA954 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     PipCommitPendingOsExtensionResource @ 0x14086ABB0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x14086ADC0 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1405334F0 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  if ( a1 && *(_QWORD *)a1 )
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  else
    v10 = 0LL;
  v9 = 0;
  return RegRtlCreateKeyTransacted(a2, a3, 0LL, a5, a6, v9, a7, a8, v10);
}
