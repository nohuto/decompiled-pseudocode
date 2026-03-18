/*
 * XREFs of IoSetThreadHardErrorMode @ 0x14006CE40
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14014BCC0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x1402A7078 (SmKmEtwAppendObjectName.c)
 *     FsRtlGetFileSize @ 0x1404BF2F0 (FsRtlGetFileSize.c)
 *     CmpCmdHiveOpen @ 0x1404F7D70 (CmpCmdHiveOpen.c)
 *     ObKillProcess @ 0x1404F8400 (ObKillProcess.c)
 *     EtwTraceProcess @ 0x1404F846C (EtwTraceProcess.c)
 *     CmpCmdHiveClose @ 0x14054DC44 (CmpCmdHiveClose.c)
 *     FsRtlSetFileSize @ 0x1405558FC (FsRtlSetFileSize.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x14079D204 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x14079D428 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x14079D55C (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14079DEF8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079E384 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14079E600 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14079E690 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14079EB88 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14079ECF8 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14079EF0C (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1407AFA90 (EtwpPsProvCaptureState.c)
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
