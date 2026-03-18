/*
 * XREFs of PsCreateSystemThread @ 0x140567970
 * Callers:
 *     MiZeroInParallel @ 0x14007CE14 (MiZeroInParallel.c)
 *     SmKmStoreHelperStart @ 0x14012E34C (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x14012E3D8 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14012FBAC (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PopCreatePowerThread @ 0x14014960C (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x140158E58 (DisplayBootBitmap.c)
 *     CcInitializeAsyncRead @ 0x1401618DC (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x14025A940 (ExRegisterBootDevice.c)
 *     PopFlushVolumes @ 0x14040B580 (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x140771AF4 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x14077594C (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 *     CcInitializeCacheManager @ 0x1407FE20C (CcInitializeCacheManager.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x140808D3C (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x1408195D8 (FsRtlInitializeWorkerThread.c)
 *     ExpWorkerFactoryInitialization @ 0x14082478C (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
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
           (_DWORD)ThreadHandle,
           DesiredAccess,
           (_DWORD)ObjectAttributes,
           (_DWORD)ProcessHandle,
           (__int64)ClientId,
           (__int64)StartRoutine,
           (__int64)StartContext,
           0LL,
           0LL);
}
