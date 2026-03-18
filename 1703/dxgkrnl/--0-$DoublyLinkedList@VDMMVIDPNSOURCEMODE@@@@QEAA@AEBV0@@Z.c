/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAA@AEBV0@@Z @ 0x1C00075B0
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0009870 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE>::DoublyLinkedList<DMMVIDPNSOURCEMODE>(__int64 a1, __int64 a2)
{
  char *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  char *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v16);
  }
  v8 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 == a2 + 16 || (v10 = v9 - 8, v9 == 8) )
  {
LABEL_19:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
      WdLogEvent5_WdAssertion(v18);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v11 = (char *)operator new(0x70uLL, 0x4E506456u, PagedPool);
      v4 = v11;
      if ( !v11 )
        break;
      *(_QWORD *)v11 = &SetElement::`vftable';
      v6 = v11 + 8;
      *((_QWORD *)v11 + 2) = 0LL;
      *((_QWORD *)v11 + 1) = 0LL;
      v5 = (_QWORD *)*(unsigned int *)(v10 + 24);
      *((_DWORD *)v11 + 6) = (_DWORD)v5;
      *((_QWORD *)v11 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
      *((_QWORD *)v11 + 5) = 0LL;
      *((_QWORD *)v11 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
      *((_DWORD *)v11 + 14) = *(_DWORD *)(v10 + 56);
      *(_QWORD *)v11 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
      *((_QWORD *)v11 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
      *((_QWORD *)v11 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
      *((_QWORD *)v11 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
      *((_DWORD *)v11 + 18) = *(_DWORD *)(v10 + 72);
      *(_OWORD *)(v11 + 76) = *(_OWORD *)(v10 + 76);
      *(_OWORD *)(v11 + 92) = *(_OWORD *)(v10 + 92);
      if ( (_QWORD *)*v8 == v8 )
        goto LABEL_14;
      v12 = *v8 - 8LL;
      if ( *v8 == 8LL )
        goto LABEL_14;
      do
      {
        if ( (char *)v12 == v4 )
          break;
        v5 = *(_QWORD **)(v12 + 8);
        v12 = (__int64)(v5 - 1);
        if ( v5 == v8 )
          v12 = 0LL;
      }
      while ( v12 );
      if ( !v12 )
      {
LABEL_14:
        v13 = *(_QWORD **)(a1 + 24);
        if ( (_QWORD *)*v13 != v8 )
          __fastfail(3u);
        *v6 = v8;
        v6[1] = v13;
        *v13 = v6;
        *(_QWORD *)(a1 + 24) = v6;
        ++*(_QWORD *)(a1 + 32);
      }
      v14 = *(_QWORD *)(v10 + 8);
      v10 = v14 - 8;
      if ( v14 == a2 + 16 )
        v10 = 0LL;
      if ( !v10 )
        goto LABEL_19;
    }
    v17 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v17);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
