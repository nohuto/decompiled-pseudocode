/*
 * XREFs of ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00A7B10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00092E8 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rbp
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 Container; // rbp
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _DWORD v30[6]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (unsigned int)a3;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6029);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
  v11 = v8;
  if ( v8 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(v8, v7, v5);
    if ( Path )
    {
      if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(Path) < 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
        WdLogEvent5_WdAssertion(v28);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160);
      v30[0] = v7;
      LOBYTE(v20) = a4;
      v30[1] = v5;
      v21 = VIDPN_MGR::FormalizeVidPnChange(
              *(_QWORD *)(Container + 48),
              Container & -(__int64)(Container != -88),
              10LL,
              v20,
              v30);
      v6 = v21;
      if ( v21 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v29[3] = v7;
        v29[4] = v5;
        v29[5] = Container;
        v29[6] = v6;
        WdLogEvent5_WdError(v29);
      }
      else
      {
        LODWORD(v6) = 0;
      }
    }
    else
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v27[3] = v7;
      v27[4] = v5;
      v27[5] = v6;
      WdLogEvent5_WdError(v27);
      LODWORD(v6) = -1071774937;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v26 + 24) = v6;
    WdLogEvent5_WdError(v26);
    LODWORD(v6) = -1071774976;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 6029);
  return (unsigned int)v6;
}
