/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0012018
 * Callers:
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C011EB08 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00120AC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE.c)
 */

char __fastcall Set<DMMVIDEOPRESENTSOURCE>::Add(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rax

  v2 = a1 + 8;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 != a1 + 24 && (v4 -= 8LL) != 0 )
  {
    while ( v4 != a2 )
    {
      v15 = *(_QWORD *)(v4 + 8);
      v4 = v15 - 8;
      if ( v15 == a1 + 24 )
        v4 = 0LL;
      if ( !v4 )
        goto LABEL_3;
    }
    return 0;
  }
  else
  {
LABEL_3:
    if ( (unsigned __int8)DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::ContainsByReference(v2, a2, v4) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v16);
    }
    else
    {
      v12 = *(_QWORD **)(v10 + 24);
      v13 = (_QWORD *)(v11 + 8);
      if ( *v12 != v10 + 16 )
        __fastfail(3u);
      *v13 = v10 + 16;
      *(_QWORD *)(v11 + 16) = v12;
      *v12 = v13;
      *(_QWORD *)(v10 + 24) = v13;
      ++*(_QWORD *)(v10 + 32);
    }
    return 1;
  }
}
