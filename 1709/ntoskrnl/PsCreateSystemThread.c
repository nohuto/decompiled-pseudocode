/*
 * XREFs of PsCreateSystemThread @ 0x140554950
 * Callers:
 *     SmKmStoreHelperStart @ 0x140005060 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1400050EC (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x1400CFA48 (MiZeroInParallel.c)
 *     CcInitializePartition @ 0x140147624 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x140147B98 (CcInitializeAsyncRead.c)
 *     PopCreatePowerThread @ 0x140156070 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x140156EF4 (DisplayBootBitmap.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140265110 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     ExRegisterBootDevice @ 0x140284090 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x140436890 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x1407B3894 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1407B7798 (VfPoolInitPhase1.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 *     SeRmInitPhase1 @ 0x140849C70 (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x1408513B8 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x140855B44 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
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
