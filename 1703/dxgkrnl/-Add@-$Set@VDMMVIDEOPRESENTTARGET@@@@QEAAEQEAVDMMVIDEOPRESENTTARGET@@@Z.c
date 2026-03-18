/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0011D08
 * Callers:
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C011E77C (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C00085A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0011CC0 (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

char __fastcall Set<DMMVIDEOPRESENTTARGET>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v12; // rax

  if ( Set<DMMVIDEOPRESENTTARGET>::FindByValue(a1, a2) )
    return 0;
  if ( DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference(a1 + 8, v3) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v12);
  }
  else
  {
    v9 = *(_QWORD **)(a1 + 32);
    v10 = (_QWORD *)(v8 + 8);
    if ( *v9 != a1 + 24 )
      __fastfail(3u);
    *v10 = a1 + 24;
    *(_QWORD *)(v8 + 16) = v9;
    *v9 = v10;
    *(_QWORD *)(a1 + 32) = v10;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}
