/*
 * XREFs of ?GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C00C5730
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00BC348 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::GetNumPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rsi
  int NumPathsFromSource; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // [rsp+20h] [rbp-18h] BYREF
  __int64 v23; // [rsp+28h] [rbp-10h]
  unsigned __int64 v24; // [rsp+50h] [rbp+18h] BYREF

  v23 = 0LL;
  v5 = (unsigned int)a2;
  v6 = (__int64)this;
  v22 = 6018;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6018);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 6018);
  if ( a3 )
  {
    *a3 = 0LL;
    v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v10 = v8;
    if ( v8 )
    {
      v24 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v8, v5, &v24);
      v6 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
        v21[3] = v5;
        v21[4] = v10;
        v21[5] = v6;
      }
      else
      {
        LODWORD(v6) = 0;
        *a3 = v24;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v20 + 24) = v6;
      WdLogEvent5_WdError(v20);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v19[3] = 0LL;
    v19[4] = v5;
    v19[5] = v6;
    WdLogEvent5_WdError(v19);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v22);
  return (unsigned int)v6;
}
