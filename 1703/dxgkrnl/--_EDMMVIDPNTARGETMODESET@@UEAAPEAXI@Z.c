/*
 * XREFs of ??_EDMMVIDPNTARGETMODESET@@UEAAPEAXI@Z @ 0x1C0008750
 * Callers:
 *     ??_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z @ 0x1C0015980 (--_EDMMVIDPNTARGETMODESET@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z @ 0x1C0015990 (--_EDMMVIDPNTARGETMODESET@@WFI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z @ 0x1C00159A0 (--_EDMMVIDPNTARGETMODESET@@WGI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z @ 0x1C00159B0 (--_EDMMVIDPNTARGETMODESET@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGETMODESET::`vector deleting destructor'(
        DMMVIDPNTARGETMODESET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // si
  DMMVIDPNTARGETMODESET *v5; // rbx
  __int64 **v6; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  v4 = a2;
  v5 = this;
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
    v10 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v10 + 24) = *((int *)v5 + 24);
    WdLogEvent5_WdError(v10);
  }
  *((_QWORD *)v5 + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  v6 = (__int64 **)((char *)v5 + 48);
  *((_QWORD *)v5 + 4) = &DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
  while ( *v6 != (__int64 *)v6 )
  {
    v8 = *v6;
    v9 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v6 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v6;
    --*((_QWORD *)v5 + 8);
    *v8 = 0LL;
    v8[1] = 0LL;
    this = (DMMVIDPNTARGETMODESET *)(v8 + 7);
    if ( v8 != (__int64 *)-56LL )
      (**(void (__fastcall ***)(DMMVIDPNTARGETMODESET *, __int64))this)(this, 1LL);
  }
  if ( *((_QWORD *)v5 + 8) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  *(_QWORD *)v5 = &DoublyLinkedListElement::`vftable';
  if ( (v4 & 1) != 0 )
    operator delete(v5);
  return v5;
}
