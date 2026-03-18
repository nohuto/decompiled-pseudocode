/*
 * XREFs of ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C0221AF8
 * Callers:
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C021E01C (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00460E4 (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0046168 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00461B8 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::DestroyDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a3)
{
  __int64 v4; // rbp
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v7; // rcx
  struct DMMVIDEOPRESENTTARGET *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  DMMVIDEOPRESENTTARGET *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  DMMVIDEOPRESENTTARGET *v21; // rax

  v4 = a2;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a2);
  v8 = TargetById;
  if ( !TargetById )
  {
    *(_DWORD *)a3 = 1;
    v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7);
    v10[3] = v4;
    v11 = *((_QWORD *)this + 11);
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v13);
      v12 = *(_QWORD *)(v11 + 8);
    }
    v14 = *(_QWORD *)(v12 + 16);
    v10[6] = 1LL;
LABEL_5:
    v10[5] = -1073741811LL;
    v10[4] = v14;
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
  v16 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)TargetById + 56);
  if ( !v16 )
  {
    *(_DWORD *)a3 = 5;
    v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL);
    v10[3] = v4;
    v18 = *((_QWORD *)this + 11);
    v19 = *(_QWORD *)(v18 + 8);
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v20);
      v19 = *(_QWORD *)(v18 + 8);
    }
    v14 = *(_QWORD *)(v19 + 16);
    v10[6] = 2LL;
    goto LABEL_5;
  }
  v21 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)TargetById + 63);
  if ( v21 )
  {
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v21, v8);
    v16 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v8 + 56);
  }
  if ( v16 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v16, v8);
  DMMVIDEOPRESENTTARGETSET::RemoveTarget((DMMVIDEOPRESENTTARGETSET ***)this, v8);
  return 0LL;
}
