/*
 * XREFs of ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C0009C50
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00BC9A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C0009E6C (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 */

DMMVIDPNSOURCESET *__fastcall DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(
        DMMVIDPNSOURCESET *this,
        const struct DMMVIDPNSOURCESET *a2)
{
  __int64 v4; // rax

  *(_QWORD *)this = &Set<DMMVIDPNSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>(
    (char *)this + 8,
    (char *)a2 + 8);
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &IndexedSet<DMMVIDPNSOURCE>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  v4 = (__int64)a2 + 88;
  if ( !a2 )
    v4 = 8LL;
  *((_DWORD *)this + 22) = *(_DWORD *)v4;
  *(_QWORD *)this = &DMMVIDPNSOURCESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCESET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCESET>'};
  return this;
}
