/*
 * XREFs of ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002D5A0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgShareLock @ 0x1C002B3A0 (HmgShareLock.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002C830 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     INC_SHARE_REF_CNT @ 0x1C002CD30 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockEx @ 0x1C002CF00 (HmgShareLockEx.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C002EE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C002F12C (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     DrvGetHDEV @ 0x1C0045110 (DrvGetHDEV.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0047950 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C004E990 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00DC83C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceIncrement(
        unsigned int a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v2; // rcx

  if ( a2 )
  {
    v2 = *(&qword_1C019F730 + 2 * a1);
    if ( v2 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v2, a2, 1);
  }
}
