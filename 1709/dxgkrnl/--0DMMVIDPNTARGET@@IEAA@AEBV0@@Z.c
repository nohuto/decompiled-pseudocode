/*
 * XREFs of ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C00048F0
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C0005A60 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QE.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0005078 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(DMMVIDPNTARGET *this, const struct DMMVIDPNTARGET *a2)
{
  int v2; // eax
  __int64 v5; // rax
  char *v6; // rax
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v8)(_QWORD); // rcx
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v22; // r13
  char *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax

  v2 = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v2;
  if ( v2 == -1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable');
    *(_QWORD *)(v27 + 24) = 240LL;
    WdLogEvent5_WdAssertion(v27);
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
  v5 = *((_QWORD *)this + 12);
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 72));
  v6 = (char *)operator new(0x30uLL, 0x4E506456u, PagedPool);
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD))v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 0;
    *((_QWORD *)v6 + 4) = 0LL;
    *(_QWORD *)v6 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)v6 + 3) = v6 + 16;
    *((_QWORD *)v6 + 2) = v6 + 16;
    *((_DWORD *)v6 + 10) = 2;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v7 != v8 && v8 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v8)[2])(v8, 1LL);
  *((_QWORD *)this + 15) = v7;
  v9 = v7;
  if ( !v7 )
    goto LABEL_50;
  if ( !(**v7)(v7) )
  {
    v29 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v29 + 24) = this;
    *(_QWORD *)(v29 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v29);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    return this;
  }
  if ( !*((_QWORD *)a2 + 13) )
    goto LABEL_31;
  v10 = operator new(0x98uLL, 0x4E506456u, PagedPool);
  v11 = v10;
  if ( v10 )
  {
    v12 = *((_QWORD *)a2 + 13);
    v10[1] = 0LL;
    v10[2] = 0LL;
    *v10 = &SetElement::`vftable';
    if ( v12 )
      v13 = v12 + 32;
    else
      v13 = 8LL;
    v10[3] = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
    v10[4] = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
    *((_DWORD *)v10 + 10) = 0;
    *((_DWORD *)v10 + 18) = 1;
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))v13)(v13) || !*(_QWORD *)(v13 + 16) || !*(_QWORD *)(v13 + 24) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v30 + 24) = 155LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v11[7] = v11 + 6;
    v11[6] = v11 + 6;
    v11[8] = 0LL;
    v15 = *(_QWORD *)(v13 + 16);
    if ( v15 == v13 + 16 || (v22 = v15 - 8, v15 == 8) )
    {
LABEL_18:
      if ( v11[8] != *(_QWORD *)(v13 + 32) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v32 + 24) = 186LL;
        WdLogEvent5_WdAssertion(v32);
      }
      *((_DWORD *)v11 + 18) = 2;
    }
    else
    {
      while ( 1 )
      {
        v23 = (char *)operator new(0x90uLL, 0x4B677844u, PagedPool);
        if ( !v23 )
          break;
        *((_QWORD *)v23 + 1) = 0LL;
        *((_QWORD *)v23 + 2) = 0LL;
        *(_QWORD *)v23 = &SetElement::`vftable';
        *((_DWORD *)v23 + 6) = *(_DWORD *)(v22 + 24);
        *(_OWORD *)(v23 + 72) = *(_OWORD *)(v22 + 72);
        *(_OWORD *)(v23 + 88) = *(_OWORD *)(v22 + 88);
        *(_OWORD *)(v23 + 104) = *(_OWORD *)(v22 + 104);
        *((_QWORD *)v23 + 15) = *(_QWORD *)(v22 + 120);
        *((_QWORD *)v23 + 5) = 0LL;
        *((_QWORD *)v23 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
        *((_QWORD *)v23 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
        *((_DWORD *)v23 + 14) = *(_DWORD *)(v22 + 56);
        *(_QWORD *)v23 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
        *((_QWORD *)v23 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
        *((_QWORD *)v23 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
        *((_QWORD *)v23 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
        *((_DWORD *)v23 + 32) = *(_DWORD *)(v22 + 128);
        *((_DWORD *)v23 + 33) = *(_DWORD *)(v22 + 132);
        *((_DWORD *)v23 + 34) = *(_DWORD *)(v22 + 136);
        DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::InsertTail(v11 + 4);
        v24 = *(_QWORD *)(v22 + 8);
        v22 = v24 - 8;
        if ( v24 == v13 + 16 )
          v22 = 0LL;
        if ( !v22 )
          goto LABEL_18;
      }
      v31 = ((__int64 (*)(void))WdLogNewEntry5_WdLowResource)();
      *(_QWORD *)(v31 + 24) = 172LL;
      WdLogEvent5_WdLowResource(v31);
      *((_DWORD *)v11 + 10) = -1073741801;
    }
    *((_DWORD *)v11 + 20) = 0;
    v11[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
    v11[11] = &ReferenceCounted::`vftable';
    *((_DWORD *)v11 + 24) = 1;
    *((_BYTE *)v11 + 136) = 1;
    v11[14] = 0LL;
    *((_DWORD *)v11 + 32) = 1833173005;
    *v11 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
    v11[3] = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
    v11[11] = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
    v11[13] = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
    v11[15] = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v11[4])(v11 + 4) )
    {
      v16 = (_QWORD *)v11[6];
      if ( v16 != v11 + 6 )
      {
        v25 = v16 - 1;
        if ( v16 != (_QWORD *)8 )
        {
          do
          {
            if ( v25[5] )
            {
              v33 = WdLogNewEntry5_WdAssertion(v16);
              WdLogEvent5_WdAssertion(v33);
            }
            v25[5] = v11;
            if ( !v25 )
            {
              v34 = WdLogNewEntry5_WdAssertion(v16);
              WdLogEvent5_WdAssertion(v34);
            }
            v26 = (_QWORD *)v25[1];
            v25 = v26 - 1;
            if ( v26 == v11 + 6 )
              v25 = 0LL;
          }
          while ( v25 );
        }
      }
      v17 = *(_QWORD *)(v12 + 144);
      v11[18] = v17 ? IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v11 + 3, *(unsigned int *)(v17 + 24)) : 0LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v11 + 10);
    }
  }
  else
  {
    v11 = 0LL;
  }
  v18 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v18 && v11 != v18 )
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 11));
  *((_QWORD *)this + 13) = v11;
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))v11;
  if ( !v11 )
  {
LABEL_50:
    v28 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v28 + 24) = this;
    *(_QWORD *)(v28 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v28);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))v11[3])(v11 + 3) )
  {
    v35 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v35 + 24) = this;
    *(_QWORD *)(v35 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v35);
    *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
    return this;
  }
  v20 = *((_QWORD *)this + 13);
  if ( *(_QWORD *)(v20 + 112) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v36);
  }
  *(_QWORD *)(v20 + 112) = this;
LABEL_31:
  *((_DWORD *)this + 22) = 2;
  return this;
}
