/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C0009E6C
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C0009C50 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C00038D0 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0009DF8 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURC.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  const struct DMMVIDPNSOURCE *v6; // rbp
  __int64 v7; // rcx
  DMMVIDPNSOURCE *v8; // rax
  DMMVIDPNSOURCE *v9; // rax
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
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
    v6 = (const struct DMMVIDPNSOURCE *)(v7 - 8);
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4B677844u, PagedPool);
      v9 = v8 ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(v8, v6) : 0LL;
      if ( !v9 )
        break;
      DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::InsertTail(
        (_QWORD *)a1,
        (__int64)v9);
      v10 = *((_QWORD *)v6 + 1);
      v6 = (const struct DMMVIDPNSOURCE *)(v10 - 8);
      if ( v10 == a2 + 16 )
        v6 = 0LL;
      if ( !v6 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_14;
      }
    }
    v13 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v13 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v13);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_14:
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
