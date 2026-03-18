/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C000CA1C
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C000C64C (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z @ 0x1C0002B8C (-InsertTail@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAEQEAVDMMVIDPNSOURCE@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0009FE8 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE>::DoublyLinkedList<DMMVIDPNSOURCE>(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  const struct DMMVIDPNSOURCE *v9; // rsi
  DMMVIDPNSOURCE *v10; // rax
  __int64 v11; // rcx
  DMMVIDPNSOURCE *v12; // rax
  __int64 v13; // r11
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v15);
  }
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 == a2 + 16 || (v9 = (const struct DMMVIDPNSOURCE *)(v8 - 8)) == 0LL )
  {
LABEL_12:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
      WdLogEvent5_WdAssertion(v17);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v10 = (DMMVIDPNSOURCE *)operator new(0xB8uLL, 0x4E506456u, PagedPool);
      v12 = v10 ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(v10, v9) : 0LL;
      if ( !v12 )
        break;
      DoublyLinkedList<DMMVIDPNSOURCE>::InsertTail((_QWORD *)a1, v12);
      v13 = *((_QWORD *)v9 + 1);
      v9 = (const struct DMMVIDPNSOURCE *)(v13 - 8);
      if ( v13 == a2 + 16 )
        v9 = 0LL;
      if ( !v9 )
        goto LABEL_12;
    }
    v16 = WdLogNewEntry5_WdLowResource(v11);
    WdLogEvent5_WdLowResource(v16);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
