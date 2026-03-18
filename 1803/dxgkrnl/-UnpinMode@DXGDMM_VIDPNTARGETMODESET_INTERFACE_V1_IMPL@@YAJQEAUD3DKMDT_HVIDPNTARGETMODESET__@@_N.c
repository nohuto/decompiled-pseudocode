/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C021C880
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0005EA8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C004518C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9C9C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // bp
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  DMMVIDPNTARGETMODESET *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 Container; // rsi
  VIDPN_MGR *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+30h] [rbp-18h] BYREF
  __int64 v32; // [rsp+38h] [rbp-10h]
  unsigned int v33; // [rsp+60h] [rbp+18h] BYREF
  int v34; // [rsp+64h] [rbp+1Ch]

  v32 = 0LL;
  v3 = (char)a2;
  v31 = 6016;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6016);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 6016);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v10 = v5;
  if ( v5 )
  {
    v13 = DMMVIDPNTARGETMODESET::UnpinMode(v5, v6, v8, v9);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v19 = *((_QWORD *)v10 + 14);
      if ( !v19 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = *(_QWORD *)(v19 + 40);
      if ( !v21 )
      {
        v22 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v22);
        v21 = *(_QWORD *)(v19 + 40);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(v21 + 64);
      v24 = *(VIDPN_MGR **)(Container + 48);
      v33 = -1;
      v34 = *(_DWORD *)(v19 + 24);
      v25 = VIDPN_MGR::FormalizeVidPnChange(
              v24,
              (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
              6,
              v3,
              &v33);
      v12 = v25;
      if ( v25 >= 0 )
      {
        LODWORD(v12) = 0;
      }
      else
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v27[3] = *(unsigned int *)(v19 + 24);
        v27[4] = Container;
        v27[5] = v12;
        WdLogEvent5_WdError(v27);
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = v12;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdError(v11);
    LODWORD(v12) = -1071774967;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v31);
  return (unsigned int)v12;
}
