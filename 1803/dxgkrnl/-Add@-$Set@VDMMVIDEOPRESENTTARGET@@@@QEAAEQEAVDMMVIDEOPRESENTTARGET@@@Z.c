/*
 * XREFs of ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0045F60
 * Callers:
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02212CC (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0045220 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0046020 (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

char __fastcall Set<DMMVIDEOPRESENTTARGET>::Add(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v6; // rcx
  __int64 v7; // r11
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rax

  if ( Set<DMMVIDEOPRESENTTARGET>::FindByValue() )
    return 0;
  if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
         v4 + 8,
         v3) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 108LL;
    WdLogEvent5_WdAssertion(v10);
  }
  else
  {
    v8 = *(_QWORD **)(v7 + 32);
    v9 = (_QWORD *)(a2 + 8);
    if ( *v8 != v7 + 24 )
      __fastfail(3u);
    *v9 = v7 + 24;
    *(_QWORD *)(a2 + 16) = v8;
    *v8 = v9;
    *(_QWORD *)(v7 + 32) = v9;
    ++*(_QWORD *)(v7 + 40);
  }
  return 1;
}
