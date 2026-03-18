/*
 * XREFs of ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00F5300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0009310 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4888 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r12
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rdi
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 Container; // r14
  __int64 v23; // rbp
  __int64 v24; // rcx
  D3DKMDT_HVIDPN v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r9
  _QWORD *v40; // rdi
  __int64 v41; // rax
  _QWORD *v42; // rax
  DXGK_ENUM_PIVOT v43[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (unsigned int)a3;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6027);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
  v11 = v8;
  if ( !v8 )
  {
    v33 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v33 + 24) = v6;
    WdLogEvent5_WdError(v33);
    LODWORD(v6) = -1071774976;
    goto LABEL_13;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v8, v7, v5);
  if ( !Path )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v34[3] = v7;
    v34[4] = v5;
    v34[5] = v6;
    WdLogEvent5_WdError(v34);
    LODWORD(v6) = -1071774937;
    goto LABEL_13;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    WdLogEvent5_WdAssertion(v35);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160);
  v43[0].VidPnSourceId = v7;
  v43[0].VidPnTargetId = v5;
  v23 = *(_QWORD *)(Container + 48);
  v24 = -(Container + 88);
  v25 = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
  if ( !v25 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v24, v19, v20, v21);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( a4 )
  {
    v31 = VIDPN_MGR::_EnumVidPnCofuncModality(v23, v25, 8LL, v43);
    v6 = v31;
    if ( v31 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v32);
      v40 = v37;
      v37[3] = v25;
      v37[4] = 8LL;
      v37[5] = v43;
      if ( !*(_QWORD *)(v23 + 8) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v38, v27, v29, v39);
        WdLogEvent5_WdAssertion(v41);
      }
      v28 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL);
      v40[6] = v28;
      v40[7] = v6;
      goto LABEL_11;
    }
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24, v19, v20, v21);
    v26[3] = 8LL;
    v26[4] = v25;
    v26[5] = v43[0].VidPnSourceId;
    v26[6] = v43[0].VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v26);
  }
  LODWORD(v6) = 0;
LABEL_11:
  if ( (int)v6 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
    v42[6] = (int)v6;
    v42[3] = v7;
    v42[4] = v5;
    v42[5] = Container;
    WdLogEvent5_WdError(v42);
  }
  else
  {
    LODWORD(v6) = 0;
  }
LABEL_13:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v28, &EventProfilerExit, v29, 6027);
  return (unsigned int)v6;
}
