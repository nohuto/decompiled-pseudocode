/*
 * XREFs of ?GetTopology@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C00D5140
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGK_VIDPNTOPOLOGY_INTERFACE **a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v14; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-18h] BYREF
  __int64 v22; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v21 = 7042;
  v22 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7042);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 7042);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = a2;
  v12[5] = a3;
  if ( a2 && a3 )
  {
    *(_QWORD *)a2 = 0LL;
    *a3 = 0LL;
    if ( !this || (v14 = this, *((_DWORD *)this + 16) != 1833172997) )
      v14 = 0LL;
    if ( v14 )
    {
      v15 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(*((_QWORD *)v14 + 6) + 376LL);
      *(_QWORD *)a2 = ((unsigned __int64)v14 + 96) & -(__int64)((DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v14 + 289) != 0LL);
      *a3 = v15;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdError(v20);
      v4 = -1071774973;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdError(v19);
    v4 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v21);
  return v4;
}
