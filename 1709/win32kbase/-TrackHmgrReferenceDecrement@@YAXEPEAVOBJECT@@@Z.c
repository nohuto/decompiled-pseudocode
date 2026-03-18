/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0040094
 * Callers:
 *     GreSetBitmapOwnerEx @ 0x1C003FC78 (GreSetBitmapOwnerEx.c)
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0088FD0 (HmgShareUnlockRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00A9BBC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceDecrement(char a1, struct OBJECT *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( a1 == 5 )
  {
    v2 = *((_QWORD *)a2 + 77);
    v3 = 0LL;
LABEL_5:
    TrackObjectReferenceDecrement(v3, v2);
    return;
  }
  if ( a1 == 16 )
  {
    v2 = *((_QWORD *)a2 + 19);
    v3 = 2LL;
    goto LABEL_5;
  }
}
