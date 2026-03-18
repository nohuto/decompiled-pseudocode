/*
 * XREFs of ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C0005D88
 * Callers:
 *     ??_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z @ 0x1C0005E30 (--_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x1C000590C (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE.c)
 */

void __fastcall DMMVIDPNSOURCEMODESET::~DMMVIDPNSOURCEMODESET(DMMVIDPNSOURCEMODESET *this)
{
  __int64 v2; // rax

  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_DWORD *)this + 32) |= 0x6D640000u;
  *((_QWORD *)this + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 24) )
  {
    v2 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v2 + 24) = *((int *)this + 24);
    WdLogEvent5_WdError(v2);
  }
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 4) = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear((void (__fastcall ***)(_QWORD, __int64))this + 4);
  *(_QWORD *)this = &SetElement::`vftable';
}
