/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1400AE650
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14012B770 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x14027328C (SmKmEtwAppendObjectName.c)
 *     CmpCmdHiveClose @ 0x14046FEEC (CmpCmdHiveClose.c)
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 *     ObKillProcess @ 0x1404DCFD4 (ObKillProcess.c)
 *     CmpCmdHiveOpen @ 0x1404DD728 (CmpCmdHiveOpen.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     FsRtlGetFileSize @ 0x1404FA2F0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x14056C05C (FsRtlSetFileSize.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 *     SmKmFileInfoCleanup @ 0x14073A200 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x14073A424 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x14073A558 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14073AEF4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14073B37C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14073B5F8 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14073B688 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14073BB84 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14073BCF4 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14073BF08 (SmKmVolumeQueryUniqueId.c)
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 *     EtwpPsProvCaptureState @ 0x14074E7F0 (EtwpPsProvCaptureState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return v2 == 0;
}
