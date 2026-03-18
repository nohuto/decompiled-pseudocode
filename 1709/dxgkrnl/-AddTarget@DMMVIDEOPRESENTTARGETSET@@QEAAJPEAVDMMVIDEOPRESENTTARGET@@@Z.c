/*
 * XREFs of ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C011E4DC
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E2E0 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F4BA0 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0012D5C (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AddTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  int v2; // ebx
  struct DMMVIDEOPRESENTTARGET *v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax

  v2 = 0;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v5 = (struct DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this, *((_DWORD *)a2 + 6));
  if ( v5 )
  {
    LOBYTE(v2) = v5 != a2;
    v7 = v2 + 1;
  }
  else
  {
    v6 = Set<DMMVIDEOPRESENTTARGET>::Add((__int64)this, (__int64)a2) != 0 ? 2 : 0;
    v7 = v6 + 1;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)a2 + 18);
        return 0LL;
      }
      else
      {
        v12 = WdLogNewEntry5_WdError(v6);
        WdLogEvent5_WdError(v12);
        return 3221225473LL;
      }
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v6);
      v13[3] = *((unsigned int *)a2 + 6);
      v13[4] = a2;
      v13[5] = this;
      WdLogEvent5_WdError(v13);
      return 3223192370LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = a2;
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdError(v14);
    return 3223192344LL;
  }
}
