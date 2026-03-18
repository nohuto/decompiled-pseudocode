/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C00042E0
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C000B1C0 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  char *v8; // rax
  char *v9; // rdx
  _QWORD *v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v15 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v5 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 == a2 + 16 || (v7 = v6 - 8, v6 == 8) )
  {
LABEL_19:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v17 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v17);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v8 = (char *)operator new(0x70uLL, 0x4B677844u, PagedPool);
      v9 = v8;
      if ( !v8 )
        break;
      *(_QWORD *)v8 = &SetElement::`vftable';
      v10 = v8 + 8;
      *((_QWORD *)v8 + 2) = 0LL;
      *((_QWORD *)v8 + 1) = 0LL;
      v4 = (_QWORD *)*(unsigned int *)(v7 + 24);
      *((_DWORD *)v8 + 6) = (_DWORD)v4;
      *((_QWORD *)v8 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
      *((_QWORD *)v8 + 5) = 0LL;
      *((_QWORD *)v8 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
      *((_DWORD *)v8 + 14) = *(_DWORD *)(v7 + 56);
      *(_QWORD *)v8 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
      *((_QWORD *)v8 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
      *((_QWORD *)v8 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
      *((_QWORD *)v8 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
      *((_DWORD *)v8 + 18) = *(_DWORD *)(v7 + 72);
      *(_OWORD *)(v8 + 76) = *(_OWORD *)(v7 + 76);
      *(_OWORD *)(v8 + 92) = *(_OWORD *)(v7 + 92);
      if ( (_QWORD *)*v5 == v5 )
        goto LABEL_14;
      v11 = *v5 - 8LL;
      if ( *v5 == 8LL )
        goto LABEL_14;
      do
      {
        if ( (char *)v11 == v9 )
          break;
        v4 = *(_QWORD **)(v11 + 8);
        v11 = (__int64)(v4 - 1);
        if ( v4 == v5 )
          v11 = 0LL;
      }
      while ( v11 );
      if ( !v11 )
      {
LABEL_14:
        v12 = *(_QWORD **)(a1 + 24);
        if ( (_QWORD *)*v12 != v5 )
          __fastfail(3u);
        *v10 = v5;
        v10[1] = v12;
        *v12 = v10;
        *(_QWORD *)(a1 + 24) = v10;
        ++*(_QWORD *)(a1 + 32);
      }
      v13 = *(_QWORD *)(v7 + 8);
      v7 = v13 - 8;
      if ( v13 == a2 + 16 )
        v7 = 0LL;
      if ( !v7 )
        goto LABEL_19;
    }
    v16 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v16 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v16);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
