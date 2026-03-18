/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0012D5C
 * Callers:
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C011E4DC (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00050C4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012D14 (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

char __fastcall Set<DMMVIDEOPRESENTTARGET>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 v4; // rcx
  __int64 v5; // r11
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v9; // rax

  if ( Set<DMMVIDEOPRESENTTARGET>::FindByValue(a1, a2) )
    return 0;
  if ( DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::ContainsByReference(
         a1 + 8,
         v3) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v9);
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 32);
    v7 = (_QWORD *)(v5 + 8);
    if ( *v6 != a1 + 24 )
      __fastfail(3u);
    *v7 = a1 + 24;
    *(_QWORD *)(v5 + 16) = v6;
    *v6 = v7;
    *(_QWORD *)(a1 + 32) = v7;
    ++*(_QWORD *)(a1 + 40);
  }
  return 1;
}
