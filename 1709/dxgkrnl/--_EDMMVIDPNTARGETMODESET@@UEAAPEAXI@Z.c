/*
 * XREFs of ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x1C00053C0
 * Callers:
 *     ??_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z @ 0x1C0016D00 (--_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z @ 0x1C0016D10 (--_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z @ 0x1C0016D20 (--_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z @ 0x1C0016D30 (--_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGETMODESET::`vector deleting destructor'(
        DMMVIDPNTARGETMODESET *this,
        char a2)
{
  DMMVIDPNTARGETMODESET *v3; // rbx
  char *v4; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  v3 = this;
  *((_QWORD *)this + 3) = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *((_DWORD *)this + 32) |= 0x6D640000u;
  *((_QWORD *)this + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 24) )
  {
    v8 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v8 + 24) = *((int *)v3 + 24);
    WdLogEvent5_WdError(v8);
  }
  *((_QWORD *)v3 + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  v4 = (char *)v3 + 48;
  *((_QWORD *)v3 + 4) = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  while ( *(char **)v4 != v4 )
  {
    v6 = *(_QWORD **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v4 = v7;
    *(_QWORD *)(v7 + 8) = v4;
    this = (DMMVIDPNTARGETMODESET *)(v6 + 7);
    --*((_QWORD *)v3 + 8);
    *v6 = 0LL;
    v6[1] = 0LL;
    if ( v6 != (_QWORD *)-56LL )
      (**(void (__fastcall ***)(DMMVIDPNTARGETMODESET *, __int64))this)(this, 1LL);
  }
  if ( *((_QWORD *)v3 + 8) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *(_QWORD *)v3 = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}
