/*
 * XREFs of ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02212CC
 * Callers:
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C022170C (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0223DF0 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0003570 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0045F60 (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AddTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  int v2; // ebx
  __int64 v5; // rax
  struct DMMVIDEOPRESENTTARGET *v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax

  v2 = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (struct DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this, *((_DWORD *)a2 + 6));
  if ( v6 )
  {
    LOBYTE(v2) = v6 != a2;
    v8 = v2 + 1;
  }
  else
  {
    v7 = Set<DMMVIDEOPRESENTTARGET>::Add((__int64)this, (__int64)a2) != 0 ? 2 : 0;
    v8 = v7 + 1;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)a2 + 18);
        return 0LL;
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v7);
        WdLogEvent5_WdError(v11);
        return 3221225473LL;
      }
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v13[3] = *((unsigned int *)a2 + 6);
      v13[4] = a2;
      v13[5] = this;
      WdLogEvent5_WdError(v13);
      return 3223192370LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 24) = a2;
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdError(v14);
    return 3223192344LL;
  }
}
