/*
 * XREFs of PsCreateSystemThread @ 0x14052ABF0
 * Callers:
 *     SmKmStoreHelperStart @ 0x14007D91C (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x14007D9A8 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1400D151C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     MiZeroInParallel @ 0x14013A938 (MiZeroInParallel.c)
 *     PopCreatePowerThread @ 0x14016C8CC (PopCreatePowerThread.c)
 *     CcInitializePartition @ 0x140170A1C (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x140170F84 (CcInitializeAsyncRead.c)
 *     DisplayBootBitmap @ 0x140183118 (DisplayBootBitmap.c)
 *     ExRegisterBootDevice @ 0x1402B86B0 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140470660 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140820A44 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1408249D8 (VfPoolInitPhase1.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 *     PopInitializeDirectedDrips @ 0x1408A9118 (PopInitializeDirectedDrips.c)
 *     SeRmInitPhase1 @ 0x1408B209C (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x1408C1EA8 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x1408C7E8C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __stdcall PsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThreadEx(
           ThreadHandle,
           DesiredAccess,
           ObjectAttributes,
           ProcessHandle,
           ClientId,
           StartRoutine,
           StartContext,
           0LL,
           0LL);
}
