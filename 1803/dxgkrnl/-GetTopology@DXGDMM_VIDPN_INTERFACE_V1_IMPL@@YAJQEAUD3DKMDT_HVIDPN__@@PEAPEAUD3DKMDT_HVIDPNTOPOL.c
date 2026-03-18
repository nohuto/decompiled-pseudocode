/*
 * XREFs of ?GetTopology@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00C6390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v21 = 0LL;
  v20 = 6033;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6033);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 6033);
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v11 = v9;
    if ( v9 )
    {
      v12 = *(_QWORD *)(v9 + 48);
      if ( *(_QWORD *)(v12 + 88) == v9 )
      {
        v19 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v19 + 24) = v11;
        WdLogEvent5_WdError(v19);
        v4 = -1071774909;
      }
      else
      {
        v13 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(v12 + 432);
        *(_QWORD *)a2 = (v9 + 96) & -(__int64)(v9 != -289);
        *a3 = v13;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      v4 = -1071774973;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v17 + 24) = 0LL;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdError(v17);
    v4 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v20);
  return v4;
}
