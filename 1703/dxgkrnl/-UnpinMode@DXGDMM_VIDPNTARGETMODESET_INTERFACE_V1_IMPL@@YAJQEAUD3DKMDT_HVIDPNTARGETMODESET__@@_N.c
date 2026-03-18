/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C00F3D30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000889C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000D170 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4888 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // r15
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DMMVIDPNTARGETMODESET *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 Container; // r13
  __int64 v20; // r14
  __int64 v21; // rcx
  D3DKMDT_HVIDPN v22; // rbp
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r9
  _QWORD *v38; // rsi
  __int64 v39; // rax
  _QWORD *v40; // rax
  DXGK_ENUM_PIVOT v41[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6016);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v5;
  if ( !v5 )
  {
    v30 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    LODWORD(v14) = -1071774967;
    goto LABEL_15;
  }
  v9 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
  v14 = v9;
  if ( v9 < 0 )
  {
    v31 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = v14;
    goto LABEL_15;
  }
  v15 = *((_QWORD *)v8 + 14);
  if ( !v15 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !*(_QWORD *)(v15 + 40) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v33);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL);
  v20 = *(_QWORD *)(Container + 48);
  v41[0].VidPnSourceId = -1;
  v41[0].VidPnTargetId = *(_DWORD *)(v15 + 24);
  v21 = -(Container + 88);
  v22 = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
  if ( !v22 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v21, v16, v17, v18);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( v3 )
  {
    v28 = VIDPN_MGR::_EnumVidPnCofuncModality(v20, v22, 6LL, v41);
    v14 = v28;
    if ( v28 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v29);
      v38 = v35;
      v35[3] = v22;
      v35[4] = 6LL;
      v35[5] = v41;
      if ( !*(_QWORD *)(v20 + 8) )
      {
        v39 = WdLogNewEntry5_WdAssertion(v36, v24, v26, v37);
        WdLogEvent5_WdAssertion(v39);
      }
      v25 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL);
      v38[6] = v25;
      v38[7] = v14;
      goto LABEL_13;
    }
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21, v16, v17, v18);
    v23[3] = 6LL;
    v23[4] = v22;
    v23[5] = v41[0].VidPnSourceId;
    v23[6] = v41[0].VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v23);
  }
  LODWORD(v14) = 0;
LABEL_13:
  if ( (int)v14 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v40[3] = *(unsigned int *)(v15 + 24);
    v40[5] = (int)v14;
    v40[4] = Container;
    WdLogEvent5_WdError(v40);
  }
  else
  {
    LODWORD(v14) = 0;
  }
LABEL_15:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 6016);
  return (unsigned int)v14;
}
