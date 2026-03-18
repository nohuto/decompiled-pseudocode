/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C000A870
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C000A598 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U?$DoubleLinkedListElementDeleter@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C000A804 (-InsertTail@-$DoublyLinkedList@UDISPMODECHANGEREQUEST@VIDPN_MGR@@U-$DoubleLinkedListElementDelet.c)
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C000AC48 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  const struct DMMVIDPNSOURCE *v6; // rsi
  DMMVIDPNSOURCE *v7; // rax
  __int64 v8; // rcx
  DMMVIDPNSOURCE *v9; // rax
  __int64 v10; // r11
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v12 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 == a2 + 16 || (v6 = (const struct DMMVIDPNSOURCE *)(v5 - 8)) == 0LL )
  {
LABEL_12:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v14 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v14);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v7 = (DMMVIDPNSOURCE *)operator new(0xB8uLL, 0x4B677844u, PagedPool);
      v9 = v7 ? DMMVIDPNSOURCE::DMMVIDPNSOURCE(v7, v6) : 0LL;
      if ( !v9 )
        break;
      DoublyLinkedList<VIDPN_MGR::DISPMODECHANGEREQUEST,DoubleLinkedListElementDeleter<VIDPN_MGR::DISPMODECHANGEREQUEST>>::InsertTail(
        (_QWORD *)a1,
        v9);
      v10 = *((_QWORD *)v6 + 1);
      v6 = (const struct DMMVIDPNSOURCE *)(v10 - 8);
      if ( v10 == a2 + 16 )
        v6 = 0LL;
      if ( !v6 )
        goto LABEL_12;
    }
    v13 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v13 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v13);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
