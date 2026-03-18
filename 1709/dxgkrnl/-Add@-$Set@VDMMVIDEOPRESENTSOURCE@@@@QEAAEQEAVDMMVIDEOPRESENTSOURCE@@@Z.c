/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0013138
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C011E888 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00131CC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r11
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  v2 = a1 + 8;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 != a1 + 24 )
  {
    v4 -= 8LL;
    if ( v4 )
    {
      do
      {
        if ( v4 == a2 )
          break;
        v12 = *(_QWORD *)(v4 + 8);
        v4 = v12 - 8;
        if ( v12 == a1 + 24 )
          v4 = 0LL;
      }
      while ( v4 );
      if ( v4 )
        return 0;
    }
  }
  if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::ContainsByReference(
                          v2,
                          a2,
                          v4) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v13);
  }
  else
  {
    v9 = *(_QWORD **)(v7 + 24);
    v10 = (_QWORD *)(v8 + 8);
    if ( *v9 != v7 + 16 )
      __fastfail(3u);
    *v10 = v7 + 16;
    *(_QWORD *)(v8 + 16) = v9;
    *v9 = v10;
    *(_QWORD *)(v7 + 24) = v10;
    ++*(_QWORD *)(v7 + 32);
  }
  return 1;
}
