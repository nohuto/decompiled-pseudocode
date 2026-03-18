/*
 * XREFs of ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00F5140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C00DE500 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E4108 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v4; // rbp
  DMMVIDPNTARGETMODESET *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DMMVIDPNTARGETMODESET *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 Container; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax

  v3 = a3;
  v4 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6014);
  v6 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v9 = v6;
  if ( v6 )
  {
    v12 = DMMVIDPNTARGETMODESET::PinMode(v6, v4);
    if ( v12 < 0 )
    {
      v24 = WdLogNewEntry5_WdTrace(v11, v10, v13, v14);
      *(_QWORD *)(v24 + 24) = v4;
      *(_QWORD *)(v24 + 32) = this;
    }
    else
    {
      v15 = *((_QWORD *)v9 + 14);
      if ( !v15 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
        WdLogEvent5_WdAssertion(v25);
      }
      if ( !*(_QWORD *)(v15 + 40) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v11, v10, v13, v14);
        WdLogEvent5_WdAssertion(v26);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL);
      LOBYTE(v17) = v3;
      v12 = VIDPN_MGR::PinVidPnTargetMode(*(VIDPN_MGR **)(Container + 48), v9, (unsigned int)v4, v17);
      if ( v12 < 0 )
      {
        v27 = WdLogNewEntry5_WdDmmEvent(v19, v18, v20, v21);
        *(_QWORD *)(v27 + 24) = v4;
        *(_QWORD *)(v27 + 32) = this;
        WdLogEvent5_WdDmmEvent(v27);
      }
      else
      {
        v12 = 0;
      }
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    v12 = -1071774967;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 6014);
  return (unsigned int)v12;
}
