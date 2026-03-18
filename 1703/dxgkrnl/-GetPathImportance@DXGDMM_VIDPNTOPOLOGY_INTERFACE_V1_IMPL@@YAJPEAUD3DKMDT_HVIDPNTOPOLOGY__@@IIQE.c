/*
 * XREFs of ?GetPathImportance@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIQEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@QEAG@Z @ 0x1C00A6170
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathImportance(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        _DWORD *a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *const a5)
{
  __int64 v6; // rbp
  __int64 v8; // r15
  unsigned int v9; // ebx
  DMMVIDPNTOPOLOGY *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v19; // rax
  int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rax

  v6 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6059);
  v9 = 0;
  if ( !a4 || !a5 )
  {
    v22 = WdLogNewEntry5_WdError(this, a2);
    WdLogEvent5_WdError(v22);
    v20 = -1073741811;
    goto LABEL_14;
  }
  v10 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v10 )
  {
    v19 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    v20 = -1071774976;
LABEL_14:
    v9 = v20;
    goto LABEL_7;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v10, v8, v6);
  v17 = (__int64)Path;
  if ( !Path )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v14, v15, v16);
    v21[3] = v8;
    v21[4] = v6;
    v21[5] = this;
    WdLogEvent5_WdWarning(v21);
    v20 = -1071774937;
    goto LABEL_14;
  }
  *a4 = *((_DWORD *)Path + 26);
  *(_WORD *)a5 = *((_WORD *)Path + 54);
LABEL_7:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v15, 6059);
  return v9;
}
