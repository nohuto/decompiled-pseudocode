/*
 * XREFs of MiSectionControlArea @ 0x1400CDE10
 * Callers:
 *     MmCreateSystemSection @ 0x140034178 (MmCreateSystemSection.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MiCountSystemImageCommitment @ 0x1401443B8 (MiCountSystemImageCommitment.c)
 *     MmCheckImageMapping @ 0x14042B24C (MmCheckImageMapping.c)
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x140493DF0 (MmGetFileObjectForSection.c)
 *     MiMapViewInSystemSpace @ 0x140497594 (MiMapViewInSystemSpace.c)
 *     MiComputeProcessUserVa @ 0x14049E434 (MiComputeProcessUserVa.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PsReferenceProcessFilePointer @ 0x1404A1CC0 (PsReferenceProcessFilePointer.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     MiChargeSystemImageCommitment @ 0x1404B0FE4 (MiChargeSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImage @ 0x1404B12D8 (MiMapSystemImage.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x1404B2670 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     MiConstructLoaderEntry @ 0x1404B65FC (MiConstructLoaderEntry.c)
 *     NtMapViewOfSection @ 0x1404C9130 (NtMapViewOfSection.c)
 *     MmGetSectionInformation @ 0x1404ECBAC (MmGetSectionInformation.c)
 *     MiObtainSectionForDriver @ 0x1404F7528 (MiObtainSectionForDriver.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     NtCreateSection @ 0x14050FCB0 (NtCreateSection.c)
 *     MiSectionClose @ 0x140512010 (MiSectionClose.c)
 *     MiSectionOpen @ 0x140512040 (MiSectionOpen.c)
 *     MiSectionDelete @ 0x140512600 (MiSectionDelete.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140514AB0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 *     PsQuerySectionSignatureInformation @ 0x140545CE0 (PsQuerySectionSignatureInformation.c)
 *     MmCreateSpecialImageSection @ 0x140546050 (MmCreateSpecialImageSection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1405464A4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MiCompactServiceTable @ 0x140580324 (MiCompactServiceTable.c)
 *     MiReturnSystemImageCommitment @ 0x140585528 (MiReturnSystemImageCommitment.c)
 *     MiWriteProtectSystemImages @ 0x1405A2234 (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x1406B2C70 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x1406B5330 (MiLogSectionObjectEvent.c)
 *     MmSectionToSectionObjectPointers @ 0x1406B833C (MmSectionToSectionObjectPointers.c)
 *     MmGetSectionStrongImageReference @ 0x1406BF1BC (MmGetSectionStrongImageReference.c)
 *     MiInitializeCfg @ 0x140804A04 (MiInitializeCfg.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSectionControlArea(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = v1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)(*(_QWORD *)(result + 40) + 16LL);
  if ( (v1 & 2) != 0 )
    return **(_QWORD **)(result + 40);
  return result;
}
