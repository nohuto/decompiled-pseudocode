/*
 * XREFs of ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C0004930
 * Callers:
 *     ??_G?$AutoBuffer@G@DMM@@UEAAPEAXI@Z @ 0x1C0044270 (--_G-$AutoBuffer@G@DMM@@UEAAPEAXI@Z.c)
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00AF6C4 (DmmGetTargetIdFromCcdMonitorId.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

void **__fastcall DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(_QWORD *a1)
{
  void *v2; // rcx
  void **result; // rax

  *a1 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
  a1[3] = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v2 = (void *)a1[4];
  if ( v2 )
  {
    operator delete[](v2);
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  a1[3] = &DoublyLinkedListElement::`vftable';
  result = &DoublyLinkedListElement::`vftable';
  *a1 = &DoublyLinkedListElement::`vftable';
  return result;
}
