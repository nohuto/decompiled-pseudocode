/*
 * XREFs of ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F350
 * Callers:
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C002CDD0 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C002E8AC (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C002F3B0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00364B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00367D0 (HmgIncrementShareReferenceCount.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0038A40 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     DrvGetHDEV @ 0x1C0062010 (DrvGetHDEV.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackObjectReferenceIncrement(
        unsigned int a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v2; // rcx

  v2 = *(&qword_1C0189408 + 2 * a1);
  if ( a2 )
  {
    if ( v2 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v2, a2, 1);
  }
}
