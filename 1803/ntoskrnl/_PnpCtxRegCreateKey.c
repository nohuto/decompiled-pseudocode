/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1405D3598
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140502990 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpOpenPropertiesKey @ 0x14050421C (_PnpOpenPropertiesKey.c)
 *     _PnpSetPropertyWorker @ 0x1405D3304 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405D3828 (_CmCreateOrdinalInstanceKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x1405D3F7C (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1405F0B64 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     _CmAddPanelDeviceWorker @ 0x1407EC114 (_CmAddPanelDeviceWorker.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 *     PipCommitPendingOsExtensionResource @ 0x1408DF5A0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1408DF7B0 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x140587220 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(
        __int64 a1,
        char *a2,
        const WCHAR *a3,
        ULONG a4,
        ACCESS_MASK a5,
        void *a6,
        HANDLE *a7,
        ULONG *a8)
{
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a1 && (v8 = *(_QWORD *)(a1 + 224)) != 0 )
    v9 = *(_QWORD *)(v8 + 8);
  else
    v9 = 0LL;
  return RegRtlCreateKeyTransacted(a2, a3, a4, a5, a6, 0, a7, a8, v9);
}
