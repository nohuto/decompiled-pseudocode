/*
 * XREFs of ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C011E77C
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E580 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01DC278 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0011D08 (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AddTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        struct DMMVIDEOPRESENTTARGET *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  struct DMMVIDEOPRESENTTARGET *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax

  v4 = 0;
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  v7 = (struct DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this, *((_DWORD *)a2 + 6));
  if ( v7 )
  {
    LOBYTE(v4) = v7 != a2;
    v10 = v4 + 1;
  }
  else
  {
    v9 = Set<DMMVIDEOPRESENTTARGET>::Add((__int64)this, (__int64)a2) != 0 ? 2 : 0;
    v10 = v9 + 1;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)a2 + 18);
        return 0LL;
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(v9, v8);
        WdLogEvent5_WdError(v15);
        return 3221225473LL;
      }
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v16[3] = *((unsigned int *)a2 + 6);
      v16[4] = a2;
      v16[5] = this;
      WdLogEvent5_WdError(v16);
      return 3223192370LL;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v17 + 24) = a2;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdError(v17);
    return 3223192344LL;
  }
}
