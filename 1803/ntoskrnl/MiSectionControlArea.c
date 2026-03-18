/*
 * XREFs of MiSectionControlArea @ 0x1400E54F0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MmMapViewInSystemCache @ 0x1400DD850 (MmMapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MmCreateSystemSection @ 0x140161354 (MmCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x140169A08 (MiCountSystemImageCommitment.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B3C20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     MiMapViewInSystemSpace @ 0x1404BBE1C (MiMapViewInSystemSpace.c)
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x1404BF1C0 (MmGetFileObjectForSection.c)
 *     NtCreateSection @ 0x1404C1930 (NtCreateSection.c)
 *     MiMapExParametersInitialize @ 0x1404E8F4C (MiMapExParametersInitialize.c)
 *     PspInitializeFullProcessImageName @ 0x1404EA924 (PspInitializeFullProcessImageName.c)
 *     MiComputeProcessUserVa @ 0x1404ED4D4 (MiComputeProcessUserVa.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     MmCreateSpecialImageSection @ 0x1404F0B68 (MmCreateSpecialImageSection.c)
 *     PsQuerySectionSignatureInformation @ 0x1404F1E20 (PsQuerySectionSignatureInformation.c)
 *     MmGetSectionInformation @ 0x1404F91C0 (MmGetSectionInformation.c)
 *     PsReferenceProcessFilePointer @ 0x140562A40 (PsReferenceProcessFilePointer.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140577B58 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MiSectionDelete @ 0x140593740 (MiSectionDelete.c)
 *     MiMapParametersInitialize @ 0x140593DD0 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 *     MiSectionOpen @ 0x1405958D0 (MiSectionOpen.c)
 *     MiSectionClose @ 0x140595900 (MiSectionClose.c)
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MmCheckImageMapping @ 0x1405BE128 (MmCheckImageMapping.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 *     MiChargeSystemImageCommitment @ 0x1405F8AB4 (MiChargeSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 *     MiConstructLoaderEntry @ 0x1405F8E14 (MiConstructLoaderEntry.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x1405FA21C (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 *     MiMapSystemImage @ 0x1405FB30C (MiMapSystemImage.c)
 *     MiReturnSystemImageCommitment @ 0x140605C64 (MiReturnSystemImageCommitment.c)
 *     MiCompactServiceTable @ 0x14060E084 (MiCompactServiceTable.c)
 *     MiWriteProtectSystemImages @ 0x14061C4F0 (MiWriteProtectSystemImages.c)
 *     MmGetFileNameForSection @ 0x1407498A8 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x14074C284 (MiLogSectionObjectEvent.c)
 *     MmSectionToSectionObjectPointers @ 0x14074F3E8 (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 *     MmGetSectionStrongImageReference @ 0x140755FFC (MmGetSectionStrongImageReference.c)
 *     VfDriverLoadImage @ 0x14080EEBC (VfDriverLoadImage.c)
 *     MiInitializeCfg @ 0x14089D624 (MiInitializeCfg.c)
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
