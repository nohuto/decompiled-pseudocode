/*
 * XREFs of ??_GDMMVIDPNSOURCEMODESET@@UEAAPEAXI@Z @ 0x1C000B430
 * Callers:
 *     ??_EDMMVIDPNSOURCEMODESET@@WBI@EAAPEAXI@Z @ 0x1C0016CC0 (--_EDMMVIDPNSOURCEMODESET@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODESET@@WFI@EAAPEAXI@Z @ 0x1C0016CD0 (--_EDMMVIDPNSOURCEMODESET@@WFI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODESET@@WGI@EAAPEAXI@Z @ 0x1C0016CE0 (--_EDMMVIDPNSOURCEMODESET@@WGI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODESET@@WHI@EAAPEAXI@Z @ 0x1C0016CF0 (--_EDMMVIDPNSOURCEMODESET@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::`scalar deleting destructor'(
        DMMVIDPNSOURCEMODESET *this,
        char a2)
{
  DMMVIDPNSOURCEMODESET *v3; // rdi
  char *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  v3 = this;
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_DWORD *)this + 32) |= 0x6D640000u;
  *((_QWORD *)this + 15) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 13) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 24) )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = *((int *)v3 + 24);
    WdLogEvent5_WdError(v8);
  }
  *((_QWORD *)v3 + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  v4 = (char *)v3 + 48;
  *((_QWORD *)v3 + 4) = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  while ( *(char **)v4 != v4 )
  {
    v5 = *(_QWORD **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    this = (DMMVIDPNSOURCEMODESET *)(v5 + 7);
    --*((_QWORD *)v3 + 8);
    *v5 = 0LL;
    v5[1] = 0LL;
    if ( v5 != (_QWORD *)-56LL )
      (**(void (__fastcall ***)(DMMVIDPNSOURCEMODESET *, __int64))this)(this, 1LL);
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
