/*
 * XREFs of ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C0003E70
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00BC9A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C000472C (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 */

DMMVIDPNTARGETSET *__fastcall DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(
        DMMVIDPNTARGETSET *this,
        const struct DMMVIDPNTARGETSET *a2)
{
  __int64 v4; // rax

  *(_QWORD *)this = &Set<DMMVIDPNTARGET>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
    (char *)this + 8,
    (char *)a2 + 8);
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGET>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  v4 = (__int64)a2 + 88;
  if ( !a2 )
    v4 = 8LL;
  *((_DWORD *)this + 22) = *(_DWORD *)v4;
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETSET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETSET>'};
  return this;
}
