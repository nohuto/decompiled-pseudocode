/*
 * XREFs of ?GetPathImportance@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIQEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@QEAG@Z @ 0x1C00F9690
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
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
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v17; // rax
  int v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // rax

  v6 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6059);
  v9 = 0;
  if ( !a4 || !a5 )
  {
    v20 = WdLogNewEntry5_WdError(this);
    WdLogEvent5_WdError(v20);
    v18 = -1073741811;
    goto LABEL_14;
  }
  v10 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    v18 = -1071774976;
LABEL_14:
    v9 = v18;
    goto LABEL_7;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v10, v8, v6);
  v15 = (__int64)Path;
  if ( !Path )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v13, v14);
    v19[3] = v8;
    v19[4] = v6;
    v19[5] = this;
    WdLogEvent5_WdWarning(v19);
    v18 = -1071774937;
    goto LABEL_14;
  }
  *a4 = *((_DWORD *)Path + 26);
  *(_WORD *)a5 = *((_WORD *)Path + 54);
LABEL_7:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v14, 6059);
  return v9;
}
