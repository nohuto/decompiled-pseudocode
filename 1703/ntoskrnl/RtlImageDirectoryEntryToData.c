/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x14008B8F0
 * Callers:
 *     LdrpAccessResourceData @ 0x14042A024 (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14042A100 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x14042A354 (LdrpSearchResourceSection_U.c)
 *     MiInitializeWowPeb @ 0x14042AE48 (MiInitializeWowPeb.c)
 *     EtwpFindDebugId @ 0x140448384 (EtwpFindDebugId.c)
 *     MmCreatePeb @ 0x14049B450 (MmCreatePeb.c)
 *     MiCacheImageSymbols @ 0x1404B1270 (MiCacheImageSymbols.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1404B15A0 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     RtlFindExportedRoutineByName @ 0x1404C05B0 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1404F93D8 (MiSnapThunk.c)
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     MiMarkKernelImageCfgBits @ 0x1405858D8 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x140599AB8 (KsepPatchDriverImportsTable.c)
 *     LdrRelocateImageWithBias @ 0x1405BAA74 (LdrRelocateImageWithBias.c)
 *     MiSnapUnresolvedImport @ 0x1406B5D38 (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1406BD4F4 (MiMarkKernelCfgAddressTakenImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1406BD5E4 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrEnumResources @ 0x1406E63C0 (LdrEnumResources.c)
 *     RtlFindHotPatchInformation @ 0x1406EF054 (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x1407314AC (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x140762088 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140767714 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1407741B4 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x14077450C (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x140774594 (ViThunkApplyThunksCurrentSession.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
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
