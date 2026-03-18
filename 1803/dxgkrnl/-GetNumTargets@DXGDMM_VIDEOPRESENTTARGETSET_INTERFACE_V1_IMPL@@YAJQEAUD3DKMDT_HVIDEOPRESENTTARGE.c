/*
 * XREFs of ?GetNumTargets@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEA_K@Z @ 0x1C021AD70
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::GetNumTargets(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v13 = 6044;
  v14 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6044);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 6044);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( !this || (v8 = this, *((_DWORD *)this + 26) != 1833172994) )
      v8 = 0LL;
    if ( v8 )
    {
      *(_QWORD *)a2 = *((_QWORD *)v8 + 5);
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v9 + 24) = this;
      WdLogEvent5_WdError(v9);
      v3 = -1071774954;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = this;
    WdLogEvent5_WdError(v7);
    v3 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v13);
  return v3;
}
