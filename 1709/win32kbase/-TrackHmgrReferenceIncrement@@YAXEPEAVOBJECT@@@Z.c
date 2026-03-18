/*
 * XREFs of ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0070220
 * Callers:
 *     HmgShareLockIgnoreStockBit @ 0x1C0070104 (HmgShareLockIgnoreStockBit.c)
 *     HmgShareLockEx @ 0x1C00A9F70 (HmgShareLockEx.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0049604 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceIncrement(
        char a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **a2)
{
  if ( a1 == 5 )
  {
    TrackObjectReferenceIncrement(0, a2[77]);
  }
  else if ( a1 == 16 )
  {
    TrackObjectReferenceIncrement(2u, a2[19]);
  }
}
