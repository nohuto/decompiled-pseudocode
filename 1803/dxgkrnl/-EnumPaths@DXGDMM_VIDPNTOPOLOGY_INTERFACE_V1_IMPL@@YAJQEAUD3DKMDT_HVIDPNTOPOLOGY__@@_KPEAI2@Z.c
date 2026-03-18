/*
 * XREFs of ?EnumPaths@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@_KPEAI2@Z @ 0x1C021A500
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPaths(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+20h] [rbp-18h] BYREF
  __int64 v24; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v23 = 6061;
  v24 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6061);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 6061);
  if ( !a4 || !a3 )
  {
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = a2;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdError(v19);
    v13 = -1073741811;
    goto LABEL_19;
  }
  *a4 = -1;
  *a3 = -1;
  v10 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v10 )
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    v13 = -1071774976;
LABEL_19:
    v4 = v13;
    goto LABEL_20;
  }
  v14 = v10 + 24;
  v15 = 0LL;
  v16 = *(_QWORD *)(v10 + 24);
  v17 = 0;
  if ( v16 != v10 + 24 )
    v15 = (_QWORD *)(v16 - 8);
  if ( a2 )
  {
    while ( v15 )
    {
      v18 = v15[1];
      v15 = (_QWORD *)(v18 - 8);
      if ( v18 == v14 )
        v15 = 0LL;
      if ( (struct D3DKMDT_HVIDPNTOPOLOGY__ *const)(unsigned int)++v17 == a2 )
        goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_15:
  if ( !v15 )
  {
LABEL_16:
    v13 = 1075708748;
    goto LABEL_19;
  }
  *a4 = *(_DWORD *)(v15[12] + 24LL);
  *a3 = *(_DWORD *)(v15[11] + 24LL);
LABEL_20:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return v4;
}
