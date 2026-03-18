/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C0005730
 * Callers:
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0005B20 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v16 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v6 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  v7 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 != a2 + 16 )
    v7 = v8 - 8;
  if ( v7 )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4B677844u);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *PoolWithTag = &SetElement::`vftable';
      v12 = PoolWithTag + 1;
      PoolWithTag[2] = 0LL;
      PoolWithTag[1] = 0LL;
      *((_DWORD *)PoolWithTag + 6) = *(_DWORD *)(v7 + 24);
      PoolWithTag[4] = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
      PoolWithTag[5] = 0LL;
      PoolWithTag[6] = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
      *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v7 + 56);
      *PoolWithTag = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
      PoolWithTag[4] = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
      PoolWithTag[6] = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
      PoolWithTag[8] = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
      *((_DWORD *)PoolWithTag + 18) = *(_DWORD *)(v7 + 72);
      v13 = 0LL;
      *(_OWORD *)((char *)v11 + 76) = *(_OWORD *)(v7 + 76);
      *(_OWORD *)((char *)v11 + 92) = *(_OWORD *)(v7 + 92);
      v8 = *v6 - 8LL;
      if ( (_QWORD *)*v6 != v6 )
        v13 = *v6 - 8LL;
      if ( !v13 )
        goto LABEL_20;
      do
      {
        if ( (_QWORD *)v13 == v11 )
          break;
        v8 = *(_QWORD *)(v13 + 8);
        v13 = v8 - 8;
        if ( (_QWORD *)v8 == v6 )
          v13 = 0LL;
      }
      while ( v13 );
      if ( !v13 )
      {
LABEL_20:
        v14 = *(_QWORD **)(a1 + 24);
        if ( (_QWORD *)*v14 != v6 )
          __fastfail(3u);
        *v12 = v6;
        v12[1] = v14;
        *v14 = v12;
        *(_QWORD *)(a1 + 24) = v12;
        ++*(_QWORD *)(a1 + 32);
      }
      v15 = *(_QWORD *)(v7 + 8);
      v7 = v15 - 8;
      if ( v15 == a2 + 16 )
        v7 = 0LL;
      if ( !v7 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_7;
      }
    }
    v17 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v17 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v17);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_7:
    if ( v3 != *(_QWORD *)(a2 + 32) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v18 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v18);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  return a1;
}
