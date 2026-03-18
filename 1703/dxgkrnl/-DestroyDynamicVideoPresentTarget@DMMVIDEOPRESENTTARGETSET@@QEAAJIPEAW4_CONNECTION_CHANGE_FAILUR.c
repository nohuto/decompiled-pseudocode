/*
 * XREFs of ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01DC650
 * Callers:
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01D93EC (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0045344 (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00453C8 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0045418 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::DestroyDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        __int64 a2,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a3,
        __int64 a4)
{
  __int64 v5; // rbp
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DMMVIDEOPRESENTTARGET *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  DMMVIDEOPRESENTTARGET *v28; // rcx
  DMMVIDEOPRESENTTARGET *v29; // rcx

  v5 = (unsigned int)a2;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a2, (__int64)a3, a4);
  v12 = TargetById;
  if ( !TargetById )
  {
    *(_DWORD *)a3 = 1;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    v15[3] = v5;
    v18 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v18 + 8) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14, v13, v16, v17);
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL);
    v15[6] = 1LL;
LABEL_5:
    v15[5] = -1073741811LL;
    v15[4] = v20;
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 56) )
  {
    *(_DWORD *)a3 = 5;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    v15[3] = v5;
    v26 = *((_QWORD *)this + 11);
    if ( !*(_QWORD *)(v26 + 8) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v20 = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL);
    v15[6] = 2LL;
    goto LABEL_5;
  }
  v28 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)TargetById + 63);
  if ( v28 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v28, TargetById);
  v29 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v12 + 56);
  if ( v29 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v29, v12);
  DMMVIDEOPRESENTTARGETSET::RemoveTarget((DMMVIDEOPRESENTTARGETSET ***)this, v12, v10, v11);
  return 0LL;
}
