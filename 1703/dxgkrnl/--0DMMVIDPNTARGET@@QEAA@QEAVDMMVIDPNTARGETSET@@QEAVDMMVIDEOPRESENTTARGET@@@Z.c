/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0007A00
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DE7F0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00DEC70 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3,
        __int64 a4)
{
  int v4; // eax
  void **v8; // rcx
  __int64 v9; // rax
  char *v10; // rax
  unsigned __int8 (__fastcall ***v11)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v12)(_QWORD); // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rax

  v4 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v8 = &SetElement::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v4;
  if ( v4 == -1 )
  {
    v21 = WdLogNewEntry5_WdAssertion(&SetElement::`vftable', a2, a3, a4);
    WdLogEvent5_WdAssertion(v21);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v9 = *((_QWORD *)this + 12);
  *((_DWORD *)this + 22) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 72));
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
      WdLogEvent5_WdAssertion(v23);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v8, a2);
    *(_QWORD *)(v22 + 24) = (char *)this + 32;
    *(_QWORD *)(v22 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v22);
  }
  v10 = (char *)operator new(0x30uLL, 0x4E506456u, PagedPool);
  v11 = (unsigned __int8 (__fastcall ***)(_QWORD))v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 2) = 0;
    *((_QWORD *)v10 + 4) = 0LL;
    *(_QWORD *)v10 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v10 + 3) = v10 + 16;
    *((_QWORD *)v10 + 2) = v10 + 16;
    *((_DWORD *)v10 + 10) = 2;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v11 != v12 && v12 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v12)[2])(v12, 1LL);
  *((_QWORD *)this + 15) = v11;
  if ( v11 )
  {
    if ( (**v11)(v11) )
    {
      v13 = operator new(0x98uLL, 0x4E506456u, PagedPool);
      v14 = v13;
      if ( v13 )
      {
        v13[1] = 0LL;
        v13[2] = 0LL;
        *v13 = &SetElement::`vftable';
        v13[4] = &DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
        *((_DWORD *)v13 + 10) = 0;
        v13[8] = 0LL;
        v13[7] = v13 + 6;
        v13[6] = v13 + 6;
        *((_DWORD *)v13 + 18) = 2;
        v13[3] = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
        *((_DWORD *)v13 + 20) = 0;
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
        v13[18] = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v13[4])(v13 + 4) )
        {
          if ( v14[14] )
          {
            v26 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
            WdLogEvent5_WdAssertion(v26);
          }
          v14[14] = this;
        }
        else
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)v14 + 10);
        }
      }
      else
      {
        v14 = 0LL;
      }
      v19 = (_QWORD *)*((_QWORD *)this + 13);
      if ( v19 && v14 != v19 )
        ReferenceCounted::Release((ReferenceCounted *)(v19 + 11));
      *((_QWORD *)this + 13) = v14;
      if ( !v14 )
      {
        v27 = WdLogNewEntry5_WdLowResource();
        WdLogEvent5_WdLowResource(v27);
        v30 = -1073741801;
LABEL_34:
        v32 = WdLogNewEntry5_WdError(v29, v28);
        *(_QWORD *)(v32 + 32) = v30;
        *(_QWORD *)(v32 + 24) = this;
        WdLogEvent5_WdError(v32);
        *((_DWORD *)this + 18) = v30;
        return this;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))v14[3])(v14 + 3) )
      {
        v31 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v31 + 24) = this;
        *(_QWORD *)(v31 + 32) = *((unsigned int *)this + 6);
        WdLogEvent5_WdDmmEvent(v31);
        v30 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
        if ( v30 < 0 )
          goto LABEL_34;
      }
      *((_DWORD *)this + 22) = 2;
    }
    else
    {
      v25 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v25 + 24) = this;
      *(_QWORD *)(v25 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v25);
      *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v24 + 24) = this;
    *(_QWORD *)(v24 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v24);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
