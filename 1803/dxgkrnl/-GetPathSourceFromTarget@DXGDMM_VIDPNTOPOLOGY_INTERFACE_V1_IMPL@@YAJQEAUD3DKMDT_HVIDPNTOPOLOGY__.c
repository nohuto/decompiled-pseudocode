/*
 * XREFs of ?GetPathSourceFromTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEAI@Z @ 0x1C021AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetPathSourceFromTarget(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v8; // rcx
  _QWORD *v9; // rax
  DMMVIDPNTOPOLOGY *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v5 = (unsigned int)a2;
  v17 = 0LL;
  v16 = 6020;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 6020);
  if ( a3 )
  {
    *a3 = -1;
    v10 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v10 )
    {
      *a3 = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v10, v5);
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = this;
      WdLogEvent5_WdError(v12);
      v4 = -1071774976;
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v9[3] = 0LL;
    v9[4] = this;
    v9[5] = v5;
    WdLogEvent5_WdError(v9);
    v4 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v16);
  return v4;
}
