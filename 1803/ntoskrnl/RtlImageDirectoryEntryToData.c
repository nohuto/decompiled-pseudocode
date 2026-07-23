/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x140040D20
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     MmCreatePeb @ 0x1404E97D4 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x140519F90 (RtlFindExportedRoutineByName.c)
 *     EtwpFindDebugId @ 0x14058CC9C (EtwpFindDebugId.c)
 *     LdrpAccessResourceData @ 0x1405BB814 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1405BB8F0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x1405BBB44 (LdrpSearchResourceSection_U.c)
 *     MiInitializeWowPeb @ 0x1405BDD10 (MiInitializeWowPeb.c)
 *     MiCacheImageSymbols @ 0x1405F98C8 (MiCacheImageSymbols.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1405FAB30 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1405FB02C (MiSnapThunk.c)
 *     MiMarkKernelImageCfgBits @ 0x140605D78 (MiMarkKernelImageCfgBits.c)
 *     LdrRelocateImageWithBias @ 0x14062BD04 (LdrRelocateImageWithBias.c)
 *     KsepPatchDriverImportsTable @ 0x14074596C (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x14074CCF8 (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x14075410C (MiMarkKernelCfgAddressTakenImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407541FC (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrEnumResources @ 0x140782080 (LdrEnumResources.c)
 *     RtlFindHotPatchInformation @ 0x14078B13C (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x1407DE37C (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x14080F1B4 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1408162A4 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140823C64 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x140823FB8 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x140824040 (ViThunkApplyThunksCurrentSession.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14003FAC0 (RtlpImageDirectoryEntryToDataEx.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall RtlImageDirectoryEntryToData(PVOID BaseAddress, BOOLEAN MappedAsImage, USHORT Directory, PULONG Size)
{
  NTSTATUS v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseAddress, MappedAsImage, Directory, (__int64)Size, v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
