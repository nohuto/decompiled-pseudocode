/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C0004968
 * Callers:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z @ 0x1C000539C (--0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0004B28 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNT.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  char *v9; // rax
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v12 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = 0LL;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 != a2 + 16 )
    v6 = v7 - 8;
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = (char *)operator new[](0x90uLL, 0x4B677844u, PagedPool);
      v10 = v9;
      if ( v9 )
      {
        *((_QWORD *)v9 + 1) = 0LL;
        *((_QWORD *)v9 + 2) = 0LL;
        *(_QWORD *)v9 = &SetElement::`vftable';
        *((_DWORD *)v9 + 6) = *(_DWORD *)(v6 + 24);
        *(_OWORD *)(v9 + 72) = *(_OWORD *)(v6 + 72);
        *(_OWORD *)(v9 + 88) = *(_OWORD *)(v6 + 88);
        *(_OWORD *)(v9 + 104) = *(_OWORD *)(v6 + 104);
        *((_QWORD *)v9 + 15) = *(_QWORD *)(v6 + 120);
        *((_QWORD *)v9 + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
        *((_QWORD *)v9 + 5) = 0LL;
        *((_QWORD *)v9 + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
        *((_DWORD *)v9 + 14) = *(_DWORD *)(v6 + 56);
        *(_QWORD *)v9 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
        *((_QWORD *)v9 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
        *((_QWORD *)v9 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
        *((_QWORD *)v9 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
        *((_DWORD *)v9 + 32) = *(_DWORD *)(v6 + 128);
        *((_DWORD *)v9 + 33) = *(_DWORD *)(v6 + 132);
        *((_DWORD *)v9 + 34) = *(_DWORD *)(v6 + 136);
      }
      else
      {
        v10 = 0LL;
      }
      if ( !v10 )
        break;
      DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::InsertTail(a1);
      v11 = *(_QWORD *)(v6 + 8);
      v6 = v11 - 8;
      if ( v11 == a2 + 16 )
        v6 = 0LL;
      if ( !v6 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_7;
      }
    }
    v13 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v13 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v13);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_7:
    if ( v3 != *(_QWORD *)(a2 + 32) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v14 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v14);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  return a1;
}
