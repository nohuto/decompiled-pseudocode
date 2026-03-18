/*
 * XREFs of ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0045418
 * Callers:
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01DC650 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C00085A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0011CC0 (-FindByValue@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGETSET::RemoveTarget(
        DMMVIDEOPRESENTTARGETSET ***this,
        struct DMMVIDEOPRESENTTARGET *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r11
  _QWORD *v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  DMMVIDEOPRESENTTARGETSET **v12; // rdx
  DMMVIDEOPRESENTTARGETSET *v13; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = Set<DMMVIDEOPRESENTTARGET>::FindByValue((__int64)this, (__int64)a2);
  if ( DoublyLinkedList<DMMVIDPNTARGETMODE>::ContainsByReference((__int64)(this + 1), v7) )
  {
    v9 = (_QWORD *)(v8 + 8);
    v10 = *(_QWORD *)(v8 + 8);
    v11 = *(_QWORD **)(v8 + 16);
    if ( *(_QWORD *)(v10 + 8) != v8 + 8 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *v9 = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
    this[5] = (DMMVIDEOPRESENTTARGETSET **)((char *)this[5] - 1);
  }
  v12 = this[15];
  v13 = (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 488);
  if ( *v12 != (DMMVIDEOPRESENTTARGETSET *)(this + 14) )
    __fastfail(3u);
  *(_QWORD *)v13 = this + 14;
  *((_QWORD *)a2 + 62) = v12;
  *v12 = v13;
  this[15] = (DMMVIDEOPRESENTTARGETSET **)v13;
  ReferenceCounted::Release((struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 64), (__int64)v12);
}
