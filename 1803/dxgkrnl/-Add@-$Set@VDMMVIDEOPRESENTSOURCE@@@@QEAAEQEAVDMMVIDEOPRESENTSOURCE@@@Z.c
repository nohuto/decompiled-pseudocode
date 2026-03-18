/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0046AC8
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C02244A8 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0045220 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // r11
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 != a1 + 24 )
    v3 = v4 - 8;
  if ( v3 )
  {
    do
    {
      if ( v3 == a2 )
        break;
      v5 = *(_QWORD *)(v3 + 8);
      v3 = v5 - 8;
      if ( v5 == a1 + 24 )
        v3 = 0LL;
    }
    while ( v3 );
    if ( v3 )
      return 0;
  }
  if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
         a1 + 8,
         a2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v11 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v11);
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 24);
    v10 = (_QWORD *)(a2 + 8);
    if ( *v9 != v8 + 16 )
      __fastfail(3u);
    *v10 = v8 + 16;
    *(_QWORD *)(a2 + 16) = v9;
    *v9 = v10;
    *(_QWORD *)(v8 + 24) = v10;
    ++*(_QWORD *)(v8 + 32);
  }
  return 1;
}
