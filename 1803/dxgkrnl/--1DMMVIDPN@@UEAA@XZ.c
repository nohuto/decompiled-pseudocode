/*
 * XREFs of ??1DMMVIDPN@@UEAA@XZ @ 0x1C00BC478
 * Callers:
 *     ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C00045F0 (--_EDMMVIDPN@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C00043A8 (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0004674 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000A8AC (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000A920 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax

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
      v19 = WdLogNewEntry5_WdAssertion(CurrentThread);
      WdLogEvent5_WdAssertion(v19);
    }
    v6 = Set<DMMVIDPN>::FindByValue(v3 + 96, (__int64)this);
    if ( DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(v3 + 104, v6) )
    {
      v8 = (_QWORD *)(v6 + 8);
      v7 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v7 + 8) != v6 + 8 || (v11 = *(_QWORD **)(v6 + 16), (_QWORD *)*v11 != v8) )
        __fastfail(3u);
      *v11 = v7;
      *(_QWORD *)(v7 + 8) = v11;
      *v8 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      --*(_QWORD *)(v3 + 136);
    }
    v12 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 32) = v3;
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = this;
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdWarning(v20);
  }
  v17 = *((_QWORD *)this + 39);
  if ( v17 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, 1LL);
  v18 = *((_QWORD *)this + 38);
  if ( v18 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, 1LL);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24));
  *(_QWORD *)this = &SetElement::`vftable';
}
