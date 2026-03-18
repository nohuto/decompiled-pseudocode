/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C002F318
 * Callers:
 *     HmgShareUnlockRemoveObject @ 0x1C00817F0 (HmgShareUnlockRemoveObject.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

void __fastcall TrackHmgrReferenceDecrement(char a1, struct OBJECT *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( a1 == 5 )
  {
    v2 = *((_QWORD *)a2 + 77);
    v3 = 0LL;
LABEL_3:
    TrackObjectReferenceDecrement(v3, v2);
    return;
  }
  if ( a1 == 16 )
  {
    v2 = *((_QWORD *)a2 + 19);
    v3 = 2LL;
    goto LABEL_3;
  }
}
