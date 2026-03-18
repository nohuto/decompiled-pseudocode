/*
 * XREFs of ?GetNumModes@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEA_K@Z @ 0x1C021A960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0005EE4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v14 = 6002;
  v15 = 0LL;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 6002);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 6002);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v8 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
    if ( v8 )
    {
      *(_QWORD *)a2 = *(_QWORD *)(v8 + 64);
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = this;
      WdLogEvent5_WdError(v10);
      v3 = -1071774968;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v14);
  return v3;
}
