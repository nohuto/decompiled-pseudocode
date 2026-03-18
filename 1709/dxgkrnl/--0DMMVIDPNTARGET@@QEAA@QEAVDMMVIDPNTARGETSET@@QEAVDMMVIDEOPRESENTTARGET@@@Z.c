/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000450C
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00A4C10 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00A50B0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3)
{
  int v3; // eax
  void **v7; // rcx
  __int64 v8; // rax
  char *v9; // rax
  unsigned __int8 (__fastcall ***v10)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v11)(_QWORD); // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  int v16; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v3 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v7 = &SetElement::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v3;
  if ( v3 == -1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable');
    *(_QWORD *)(v18 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v18);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v8 = *((_QWORD *)this + 12);
  *((_DWORD *)this + 22) = 1;
  _InterlockedAdd((volatile signed __int32 *)(v8 + 72), 1u);
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v20);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v19 + 24) = (char *)this + 32;
    *(_QWORD *)(v19 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v19);
  }
  v9 = (char *)operator new(0x30uLL, 0x4E506456u, PagedPool);
  v10 = (unsigned __int8 (__fastcall ***)(_QWORD))v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 0;
    *((_QWORD *)v9 + 4) = 0LL;
    *(_QWORD *)v9 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)v9 + 3) = v9 + 16;
    *((_QWORD *)v9 + 2) = v9 + 16;
    *((_DWORD *)v9 + 10) = 2;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v10 != v11 && v11 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v11)[2])(v11, 1LL);
  *((_QWORD *)this + 15) = v10;
  if ( !v10 )
  {
    v21 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v21);
    v16 = -1073741801;
LABEL_32:
    *((_DWORD *)this + 18) = v16;
    return this;
  }
  if ( !(**v10)(v10) )
  {
    v24 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v24 + 24) = this;
    *(_QWORD *)(v24 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v24);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  v12 = operator new(0x98uLL, 0x4E506456u, PagedPool);
  v13 = v12;
  if ( v12 )
  {
    v12[1] = 0LL;
    v12[2] = 0LL;
    *v12 = &SetElement::`vftable';
    v12[4] = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
    *((_DWORD *)v12 + 10) = 0;
    v12[8] = 0LL;
    v12[7] = v12 + 6;
    v12[6] = v12 + 6;
    *((_DWORD *)v12 + 18) = 2;
    v12[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    *((_DWORD *)v12 + 20) = 0;
    v12[11] = &ReferenceCounted::`vftable';
    *((_DWORD *)v12 + 24) = 1;
    *((_BYTE *)v12 + 136) = 1;
    v12[14] = 0LL;
    *((_DWORD *)v12 + 32) = 1833173005;
    *v12 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
    v12[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
    v12[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
    v12[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
    v12[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
    v12[18] = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v12[4])(v12 + 4) )
    {
      if ( v13[14] )
      {
        v25 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v25);
      }
      v13[14] = this;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v13 + 10);
    }
  }
  else
  {
    v13 = 0LL;
  }
  v15 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v15 && v13 != v15 )
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 11));
  *((_QWORD *)this + 13) = v13;
  if ( !v13 )
  {
    v22 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v22);
    v16 = -1073741801;
LABEL_31:
    v23 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v23 + 32) = v16;
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    goto LABEL_32;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v13[3])(v13 + 3) )
  {
    v16 = 0;
  }
  else
  {
    v26 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v26 + 24) = this;
    *(_QWORD *)(v26 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v26);
    v16 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
  }
  if ( v16 < 0 )
    goto LABEL_31;
  *((_DWORD *)this + 22) = 2;
  return this;
}
