/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D6F80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00BDB38 (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  DMMVIDPNTARGETMODESET *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h]

  v20 = 0LL;
  v19 = 7012;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7012);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 7012);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( a2 )
  {
    v11 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v13 = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v11, a2);
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
      v13 = -1071774967;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    v13 = -1071774959;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v19);
  return v13;
}
