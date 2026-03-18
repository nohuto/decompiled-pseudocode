/*
 * XREFs of ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F4F78
 * Callers:
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F25AC (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0036144 (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00361C8 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0036218 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
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
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  DMMVIDEOPRESENTTARGET *v18; // rcx
  DMMVIDEOPRESENTTARGET *v19; // rcx

  v4 = a2;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a2);
  v8 = TargetById;
  if ( !TargetById )
  {
    *(_DWORD *)a3 = 1;
    v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7);
    v10[3] = v4;
    v11 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v11 + 8) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL);
    v10[6] = 1LL;
LABEL_5:
    v10[5] = -1073741811LL;
    v10[4] = v13;
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 56) )
  {
    *(_DWORD *)a3 = 5;
    v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7);
    v10[3] = v4;
    v16 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v16 + 8) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v17);
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 16LL);
    v10[6] = 2LL;
    goto LABEL_5;
  }
  v18 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)TargetById + 63);
  if ( v18 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v18, TargetById);
  v19 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v8 + 56);
  if ( v19 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v19, v8);
  DMMVIDEOPRESENTTARGETSET::RemoveTarget((DMMVIDEOPRESENTTARGETSET ***)this, v8);
  return 0LL;
}
