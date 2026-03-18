/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140085310
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140135BE0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x14024DADC (SmKmEtwAppendObjectName.c)
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     FsRtlSetFileSize @ 0x140459F80 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpCmdHiveOpen @ 0x1404D65D8 (CmpCmdHiveOpen.c)
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 *     ObKillProcess @ 0x1404EDAA0 (ObKillProcess.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 *     SmKmFileInfoCleanup @ 0x140701F04 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x140702128 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x140702254 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x140702BF0 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x140703078 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1407032F4 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x140703384 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x140703880 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1407039F0 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x140703C04 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x140711128 (EtwpPsProvCaptureState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rdx
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return v2 == 0;
}
