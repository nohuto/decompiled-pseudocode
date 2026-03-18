/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C021C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0005EE4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C004518C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00B9C9C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
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
  __int64 Container; // rax
  unsigned int v24; // edx
  __int64 v25; // rsi
  VIDPN_MGR *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v33; // [rsp+30h] [rbp-18h] BYREF
  __int64 v34; // [rsp+38h] [rbp-10h]
  unsigned int v35; // [rsp+60h] [rbp+18h] BYREF
  int v36; // [rsp+64h] [rbp+1Ch]

  v34 = 0LL;
  v3 = (char)a2;
  v33 = 6008;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6008);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 6008);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
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
      v24 = *(_DWORD *)(v19 + 24);
      v25 = Container;
      v26 = *(VIDPN_MGR **)(Container + 48);
      v36 = -1;
      v35 = v24;
      v27 = VIDPN_MGR::FormalizeVidPnChange(
              v26,
              (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
              4,
              v3,
              &v35);
      v12 = v27;
      if ( v27 >= 0 )
      {
        LODWORD(v12) = 0;
      }
      else
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v29[3] = *(unsigned int *)(v19 + 24);
        v29[4] = v25;
        v29[5] = v12;
        WdLogEvent5_WdError(v29);
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
    LODWORD(v12) = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v12;
}
