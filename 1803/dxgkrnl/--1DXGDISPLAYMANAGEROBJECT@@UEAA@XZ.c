/*
 * XREFs of ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C0110F98
 * Callers:
 *     ??_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z @ 0x1C0019FF0 (--_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0004674 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001A030 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C001A078 (--1-$Set@VDXGTARGETENTRY@@@@UEAA@XZ.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C001A118 (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::~DXGDISPLAYMANAGEROBJECT(DXGDISPLAYMANAGEROBJECT *this)
{
  bool v1; // zf
  DXGFASTMUTEX *v3; // rcx
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &DXGDISPLAYMANAGEROBJECT::`vftable';
  if ( !v1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 96LL;
    WdLogEvent5_WdAssertion(v4);
  }
  *((_QWORD *)this + 12) = &DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::`vftable';
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)this + 96);
  Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>((_QWORD *)this + 5);
  v3 = (DXGFASTMUTEX *)*((_QWORD *)this + 2);
  if ( v3 )
    DXGFASTMUTEX::`scalar deleting destructor'(v3);
  ReferenceCounted::~ReferenceCounted(this);
}
