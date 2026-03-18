/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1400AE2A0
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     LdrpSearchResourceSection_U @ 0x1404D9C34 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404DA728 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     MmCreatePeb @ 0x1404DAD28 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x1404DC270 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1404DC7E4 (MiSnapThunk.c)
 *     EtwpFindDebugId @ 0x1404F1358 (EtwpFindDebugId.c)
 *     LdrpAccessResourceData @ 0x140516204 (LdrpAccessResourceData.c)
 *     MiCacheImageSymbols @ 0x140542E1C (MiCacheImageSymbols.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140543168 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiInitializeWowPeb @ 0x1405917C8 (MiInitializeWowPeb.c)
 *     MiMarkKernelImageCfgBits @ 0x14059EF50 (MiMarkKernelImageCfgBits.c)
 *     LdrRelocateImageWithBias @ 0x1405BE60C (LdrRelocateImageWithBias.c)
 *     KsepPatchDriverImportsTable @ 0x1405ECBF0 (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x1406E1F4C (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1406EA2D4 (MiMarkKernelCfgAddressTakenImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1406EA3C4 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrEnumResources @ 0x14071EA80 (LdrEnumResources.c)
 *     RtlFindHotPatchInformation @ 0x140727530 (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x140775620 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1407A1E18 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x1407A926C (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1407B5F70 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1407B62C8 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x1407B6350 (ViThunkApplyThunksCurrentSession.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0 (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __stdcall RtlImageDirectoryEntryToData(PVOID BaseAddress, BOOLEAN MappedAsImage, USHORT Directory, PULONG Size)
{
  int v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(BaseAddress, (__int64)v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
