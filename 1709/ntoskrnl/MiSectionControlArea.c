/*
 * XREFs of MiSectionControlArea @ 0x1400A1610
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 *     MmCreateSystemSection @ 0x1400F9864 (MmCreateSystemSection.c)
 *     MiCountSystemImageCommitment @ 0x14014BA18 (MiCountSystemImageCommitment.c)
 *     MiComputeProcessUserVa @ 0x14045EAE8 (MiComputeProcessUserVa.c)
 *     MiConstructLoaderEntry @ 0x140471244 (MiConstructLoaderEntry.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     MmGetSectionInformation @ 0x14048C730 (MmGetSectionInformation.c)
 *     NtCreateSection @ 0x14049C090 (NtCreateSection.c)
 *     NtMapViewOfSection @ 0x1404CF7E0 (NtMapViewOfSection.c)
 *     MiMapViewOfSection @ 0x1404CFC50 (MiMapViewOfSection.c)
 *     MiSectionOpen @ 0x1404D09E0 (MiSectionOpen.c)
 *     MiSectionClose @ 0x1404D0F90 (MiSectionClose.c)
 *     MiSectionDelete @ 0x1404D11B0 (MiSectionDelete.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiChargeSystemImageCommitment @ 0x1404F5E38 (MiChargeSystemImageCommitment.c)
 *     MiMapSystemImage @ 0x1404F5F10 (MiMapSystemImage.c)
 *     MiMapViewInSystemSpace @ 0x1404F7614 (MiMapViewInSystemSpace.c)
 *     MmGetFileObjectForSection @ 0x1404FA1C0 (MmGetFileObjectForSection.c)
 *     PsQuerySectionSignatureInformation @ 0x140504940 (PsQuerySectionSignatureInformation.c)
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140538F14 (PspGetProcessProtectionRequirementsFromImage.c)
 *     MmCreateSpecialImageSection @ 0x14053A36C (MmCreateSpecialImageSection.c)
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140543848 (MiObtainSectionForDriver.c)
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 *     PsReferenceProcessFilePointer @ 0x1405770C0 (PsReferenceProcessFilePointer.c)
 *     PspInitializeFullProcessImageName @ 0x14057B454 (PspInitializeFullProcessImageName.c)
 *     MiFreeInitializationCode @ 0x14058F3A0 (MiFreeInitializationCode.c)
 *     MmCheckImageMapping @ 0x140591BCC (MmCheckImageMapping.c)
 *     MiReturnSystemImageCommitment @ 0x14059E9C8 (MiReturnSystemImageCommitment.c)
 *     MiWriteProtectSystemImages @ 0x1405B2CF0 (MiWriteProtectSystemImages.c)
 *     MiCompactServiceTable @ 0x1405B9B54 (MiCompactServiceTable.c)
 *     MmGetFileNameForSection @ 0x1406DEA24 (MmGetFileNameForSection.c)
 *     MiLogSectionObjectEvent @ 0x1406E1498 (MiLogSectionObjectEvent.c)
 *     MmSectionToSectionObjectPointers @ 0x1406E4FBC (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 *     MmGetSectionStrongImageReference @ 0x1406EC4E0 (MmGetSectionStrongImageReference.c)
 *     MiInitializeCfg @ 0x140857188 (MiInitializeCfg.c)
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
