/*
 * XREFs of ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C01D92F4
 * Callers:
 *     ??_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z @ 0x1C002D080 (--_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000504C (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0007DC4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C002CF8C (--1-$Set@VDXGTARGETENTRY@@@@UEAA@XZ.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C002D17C (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::~DXGDISPLAYMANAGEROBJECT(DXGDISPLAYMANAGEROBJECT *this)
{
  bool v1; // zf
  __int64 v3; // rax
  DXGFASTMUTEX *v4; // rcx

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &DXGDISPLAYMANAGEROBJECT::`vftable';
  if ( !v1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 96LL;
    WdLogEvent5_WdAssertion(v3);
  }
  *((_QWORD *)this + 12) = &DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::`vftable';
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear((__int64)this + 96);
  Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>((_QWORD *)this + 5);
  v4 = (DXGFASTMUTEX *)*((_QWORD *)this + 2);
  if ( v4 )
    DXGFASTMUTEX::`scalar deleting destructor'(v4);
  ReferenceCounted::~ReferenceCounted(this);
}
