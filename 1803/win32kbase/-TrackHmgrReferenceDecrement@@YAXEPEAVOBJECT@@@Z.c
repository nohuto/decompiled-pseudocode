/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0027830
 * Callers:
 *     GreSetBitmapOwner @ 0x1C001DC00 (GreSetBitmapOwner.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029280 (DEC_SHARE_REF_CNT.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00660D0 (HmgShareUnlockRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00764AC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0024E74 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00DC83C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackHmgrReferenceDecrement(char a1, struct OBJECT *a2)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v2; // rdx

  if ( a1 == 5 )
  {
    v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a2 + 85);
    if ( v2 )
    {
      if ( qword_1C019F730 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C019F730, v2, 0);
    }
  }
  else if ( a1 == 16 )
  {
    TrackObjectReferenceDecrement(
      2u,
      *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 + 17));
  }
}
