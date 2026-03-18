/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0007DE0
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z @ 0x1C0008A30 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C000855C (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0008600 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000CB50 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        const struct DMMVIDPNTARGET *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  __int64 v7; // rax
  char *v8; // rax
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v10)(_QWORD); // rcx
  unsigned __int8 (__fastcall ***v11)(_QWORD); // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v33; // r13
  char *v34; // rax
  __int64 v35; // rax
  struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax

  v4 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v4;
  if ( v4 == -1 )
  {
    v37 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable', a2, a3, a4);
    WdLogEvent5_WdAssertion(v37);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v7 = *((_QWORD *)this + 12);
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 72));
  v8 = (char *)operator new(0x30uLL, 0x4E506456u, PagedPool);
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 0;
    *((_QWORD *)v8 + 4) = 0LL;
    *(_QWORD *)v8 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v8 + 3) = v8 + 16;
    *((_QWORD *)v8 + 2) = v8 + 16;
    *((_DWORD *)v8 + 10) = 2;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v9 != v10 && v10 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v10)[2])(v10, 1LL);
  *((_QWORD *)this + 15) = v9;
  v11 = v9;
  if ( !v9 )
    goto LABEL_46;
  if ( !(**v9)(v9) )
  {
    v39 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v39 + 24) = this;
    *(_QWORD *)(v39 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v39);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  if ( !*((_QWORD *)a2 + 13) )
    goto LABEL_31;
  v12 = operator new(0x98uLL, 0x4E506456u, PagedPool);
  v13 = v12;
  if ( v12 )
  {
    v14 = *((_QWORD *)a2 + 13);
    v12[1] = 0LL;
    v12[2] = 0LL;
    *v12 = &SetElement::`vftable';
    if ( v14 )
      v15 = v14 + 24;
    else
      v15 = 0LL;
    v12[3] = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
    *((_DWORD *)v12 + 10) = 0;
    v12[4] = &DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
    *((_DWORD *)v12 + 18) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v15 + 8))(v15 + 8)
      || !*(_QWORD *)(v15 + 24)
      || !*(_QWORD *)(v15 + 32) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v40);
    }
    v13[7] = v13 + 6;
    v13[6] = v13 + 6;
    v13[8] = 0LL;
    v20 = *(_QWORD *)(v15 + 24);
    if ( v20 == v15 + 24 || (v33 = v20 - 8, v20 == 8) )
    {
LABEL_18:
      if ( v13[8] != *(_QWORD *)(v15 + 40) )
      {
        v42 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v42);
      }
      *((_DWORD *)v13 + 18) = 2;
    }
    else
    {
      while ( 1 )
      {
        v34 = (char *)operator new(0x90uLL, 0x4E506456u, PagedPool);
        if ( !v34 )
          break;
        *((_QWORD *)v34 + 1) = 0LL;
        *((_QWORD *)v34 + 2) = 0LL;
        *(_QWORD *)v34 = &SetElement::`vftable';
        *((_DWORD *)v34 + 6) = *(_DWORD *)(v33 + 24);
        *(_OWORD *)(v34 + 72) = *(_OWORD *)(v33 + 72);
        *(_OWORD *)(v34 + 88) = *(_OWORD *)(v33 + 88);
        *(_OWORD *)(v34 + 104) = *(_OWORD *)(v33 + 104);
        *((_QWORD *)v34 + 15) = *(_QWORD *)(v33 + 120);
        *((_QWORD *)v34 + 5) = 0LL;
        *((_QWORD *)v34 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
        *((_QWORD *)v34 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
        *((_DWORD *)v34 + 14) = *(_DWORD *)(v33 + 56);
        *(_QWORD *)v34 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
        *((_QWORD *)v34 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
        *((_QWORD *)v34 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
        *((_QWORD *)v34 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
        *((_DWORD *)v34 + 32) = *(_DWORD *)(v33 + 128);
        *((_DWORD *)v34 + 33) = *(_DWORD *)(v33 + 132);
        *((_DWORD *)v34 + 34) = *(_DWORD *)(v33 + 136);
        DoublyLinkedList<DMMVIDPNTARGETMODE>::InsertTail(v13 + 4);
        v35 = *(_QWORD *)(v33 + 8);
        v33 = v35 - 8;
        if ( v35 == v15 + 24 )
          v33 = 0LL;
        if ( !v33 )
          goto LABEL_18;
      }
      v41 = ((__int64 (*)(void))WdLogNewEntry5_WdLowResource)();
      WdLogEvent5_WdLowResource(v41);
      *((_DWORD *)v13 + 10) = -1073741801;
    }
    *((_DWORD *)v13 + 20) = 0;
    v13[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    v13[11] = &ReferenceCounted::`vftable';
    *((_DWORD *)v13 + 24) = 1;
    *((_BYTE *)v13 + 136) = 1;
    v13[14] = 0LL;
    *((_DWORD *)v13 + 32) = 1833173005;
    *v13 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
    v13[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
    v13[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
    v13[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
    v13[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v13[4])(v13 + 4) )
    {
      v24 = (_QWORD *)v13[6];
      if ( v24 != v13 + 6 )
      {
        NextMode = (struct DMMVIDPNSOURCEMODE *)(v24 - 1);
        if ( v24 != (_QWORD *)8 )
        {
          do
          {
            if ( *((_QWORD *)NextMode + 5) )
            {
              v43 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
              WdLogEvent5_WdAssertion(v43);
            }
            *((_QWORD *)NextMode + 5) = v13;
            NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v13, NextMode);
          }
          while ( NextMode );
        }
      }
      v25 = *(_QWORD *)(v14 + 144);
      v13[18] = v25 ? IndexedSet<DMMVIDPNTARGETMODE>::FindById(v13 + 3, *(unsigned int *)(v25 + 24)) : 0LL;
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
  v26 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v26 && v13 != v26 )
    ReferenceCounted::Release((ReferenceCounted *)(v26 + 11));
  *((_QWORD *)this + 13) = v13;
  v11 = (unsigned __int8 (__fastcall ***)(_QWORD))v13;
  if ( !v13 )
  {
LABEL_46:
    v38 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v38 + 24) = this;
    *(_QWORD *)(v38 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v38);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))v13[3])(v13 + 3) )
  {
    v44 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v44 + 24) = this;
    *(_QWORD *)(v44 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v44);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
    return this;
  }
  v31 = *((_QWORD *)this + 13);
  if ( *(_QWORD *)(v31 + 112) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
    WdLogEvent5_WdAssertion(v45);
  }
  *(_QWORD *)(v31 + 112) = this;
LABEL_31:
  *((_DWORD *)this + 22) = 2;
  return this;
}
