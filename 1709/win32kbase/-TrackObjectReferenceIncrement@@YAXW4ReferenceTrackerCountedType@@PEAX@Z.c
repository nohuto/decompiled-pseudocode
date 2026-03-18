/*
 * XREFs of ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0049604
 * Callers:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003D0D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C003E0D0 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C004C880 (HmgIncrementShareReferenceCount.c)
 *     INC_SHARE_REF_CNT @ 0x1C004CDC0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0051670 (HmgShareLockCheckIgnoreStockBit.c)
 *     DrvGetHDEV @ 0x1C005A5C0 (DrvGetHDEV.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0070220 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE3F0 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceIncrement(
        unsigned int a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v2; // rcx

  if ( a2 )
  {
    v2 = *(&qword_1C018DF68 + 2 * a1);
    if ( v2 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v2, a2, 1);
  }
}
