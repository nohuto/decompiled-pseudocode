/*
 * XREFs of ?GetPathImportance@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIQEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@QEAG@Z @ 0x1C021AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathImportance(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        _DWORD *a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *const a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 v8; // r15
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h]

  v5 = 0;
  v6 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  v24 = 0LL;
  v23 = 6059;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6059);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 6059);
  if ( !a4 || !a5 )
  {
    v19 = WdLogNewEntry5_WdError(v10);
    WdLogEvent5_WdError(v19);
    v14 = -1073741811;
    goto LABEL_12;
  }
  v11 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v11 )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    v14 = -1071774976;
LABEL_12:
    v5 = v14;
    goto LABEL_13;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v11, v8, v6);
  if ( !Path )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, 0LL, v17);
    v18[3] = v8;
    v18[4] = v6;
    v18[5] = this;
    WdLogEvent5_WdWarning(v18);
    v14 = -1071774937;
    goto LABEL_12;
  }
  *a4 = *((_DWORD *)Path + 26);
  *(_WORD *)a5 = *((_WORD *)Path + 54);
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return v5;
}
