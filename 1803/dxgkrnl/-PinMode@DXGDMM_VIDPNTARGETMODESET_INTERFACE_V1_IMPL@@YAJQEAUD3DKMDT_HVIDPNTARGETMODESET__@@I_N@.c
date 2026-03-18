/*
 * XREFs of ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C021BB10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00B9770 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00BDC7C (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v4; // rbp
  DMMVIDPNTARGETMODESET *v6; // rax
  __int64 v7; // rcx
  struct DMMVIDPNTARGETMODESET *v8; // rsi
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 Container; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-18h] BYREF
  __int64 v27; // [rsp+28h] [rbp-10h]

  v27 = 0LL;
  v3 = a3;
  v4 = (unsigned int)a2;
  v26 = 6014;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6014);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 6014);
  v6 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v6;
  if ( v6 )
  {
    v10 = DMMVIDPNTARGETMODESET::PinMode(v6, v4);
    if ( v10 >= 0 )
    {
      v16 = *((_QWORD *)v8 + 14);
      if ( !v16 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v17);
      }
      v18 = *(_QWORD *)(v16 + 40);
      if ( !v18 )
      {
        v19 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v19);
        v18 = *(_QWORD *)(v16 + 40);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(v18 + 64);
      v10 = VIDPN_MGR::PinVidPnTargetMode(*(VIDPN_MGR **)(Container + 48), v8, v4, v3);
      if ( v10 >= 0 )
      {
        v10 = 0;
      }
      else
      {
        v22 = WdLogNewEntry5_WdDmmEvent(v21);
        *(_QWORD *)(v22 + 24) = v4;
        *(_QWORD *)(v22 + 32) = this;
        WdLogEvent5_WdDmmEvent(v22);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      *(_QWORD *)(v15 + 24) = v4;
      *(_QWORD *)(v15 + 32) = this;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
    v10 = -1071774967;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v26);
  return (unsigned int)v10;
}
