/*
 * XREFs of ??1DMMVIDPN@@UEAA@XZ @ 0x1C00A49FC
 * Callers:
 *     ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C0005BE0 (--_EDMMVIDPN@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C000504C (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C000579C (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000E448 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000E4CC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r10
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = *((_QWORD *)this + 6);
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*(_QWORD *)(v3 + 40) + 8LL) != CurrentThread )
    {
      v16 = WdLogNewEntry5_WdAssertion(CurrentThread);
      WdLogEvent5_WdAssertion(v16);
    }
    v6 = Set<DMMVIDPN>::FindByValue(v3 + 96, (__int64)this);
    if ( DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(v3 + 104, v6) )
    {
      v8 = (_QWORD *)(v9 + 8);
      v7 = *(_QWORD *)(v9 + 8);
      if ( *(_QWORD *)(v7 + 8) != v9 + 8 || (v10 = *(_QWORD **)(v9 + 16), (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v7;
      *(_QWORD *)(v7 + 8) = v10;
      *v8 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      --*(_QWORD *)(v3 + 136);
    }
    v11 = WdLogNewEntry5_WdTrace(v8, v7);
    *(_QWORD *)(v11 + 32) = v3;
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = this;
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdWarning(v17);
  }
  v14 = *((_QWORD *)this + 39);
  if ( v14 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, 1LL);
  v15 = *((_QWORD *)this + 38);
  if ( v15 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, 1LL);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24));
  *(_QWORD *)this = &SetElement::`vftable';
}
