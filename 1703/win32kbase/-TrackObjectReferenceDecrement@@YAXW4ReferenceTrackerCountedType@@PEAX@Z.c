/*
 * XREFs of ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388
 * Callers:
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C002CD80 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C002F318 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C0035DB0 (GreGetBounds.c)
 *     EngLockSurface @ 0x1C0036A00 (EngLockSurface.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackObjectReferenceDecrement(
        unsigned int a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v2; // rcx

  v2 = *(&qword_1C0189408 + 2 * a1);
  if ( a2 )
  {
    if ( v2 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v2, a2, 0);
  }
}
