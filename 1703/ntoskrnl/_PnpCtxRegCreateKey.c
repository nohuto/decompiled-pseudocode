/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1404DB470
 * Callers:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140486BA8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpOpenPropertiesKey @ 0x140487174 (_PnpOpenPropertiesKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404DB004 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x1404DB1E0 (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140596B0C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14059B8A4 (_CmCreateOrdinalInstanceKey.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140833A90 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140833CA0 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x140489954 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(
        __int64 a1,
        char *a2,
        const WCHAR *a3,
        __int64 a4,
        ACCESS_MASK a5,
        void *a6,
        HANDLE *a7,
        ULONG *a8)
{
  if ( a1 && *(_QWORD *)a1 )
    return RegRtlCreateKeyTransacted(a2, a3, 0, a5, a6, 0, a7, a8, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  else
    return RegRtlCreateKeyTransacted(a2, a3, 0, a5, a6, 0, a7, a8, 0LL);
}
