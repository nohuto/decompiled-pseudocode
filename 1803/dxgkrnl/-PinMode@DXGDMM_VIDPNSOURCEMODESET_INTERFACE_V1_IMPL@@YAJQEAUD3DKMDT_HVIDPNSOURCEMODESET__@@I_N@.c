/*
 * XREFs of ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C021B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0005EE4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00B9854 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  struct DMMVIDPNSOURCEMODESET *v8; // rsi
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 Container; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-18h] BYREF
  __int64 v22; // [rsp+28h] [rbp-10h]

  v22 = 0LL;
  v3 = a3;
  v4 = (unsigned int)a2;
  v21 = 6007;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6007);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 6007);
  v6 = ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v8 = (struct DMMVIDPNSOURCEMODESET *)v6;
  if ( v6 )
  {
    v11 = *(_QWORD *)(v6 + 112);
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = *(_QWORD *)(v11 + 40);
    if ( !v13 )
    {
      v14 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v14);
      v13 = *(_QWORD *)(v11 + 40);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(v13 + 64);
    v10 = VIDPN_MGR::PinVidPnSourceMode(*(VIDPN_MGR **)(Container + 48), v8, v4, v3);
    if ( v10 >= 0 )
    {
      v10 = 0;
    }
    else
    {
      v17 = WdLogNewEntry5_WdDmmEvent(v16);
      *(_QWORD *)(v17 + 24) = v4;
      *(_QWORD *)(v17 + 32) = this;
      WdLogEvent5_WdDmmEvent(v17);
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
    v10 = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v21);
  return (unsigned int)v10;
}
