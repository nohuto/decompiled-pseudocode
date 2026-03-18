/*
 * XREFs of ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00D55B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0006578 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rbp
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 Container; // rbp
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned int v23[6]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (unsigned int)a3;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6027);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
  v10 = v8;
  if ( v8 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(v8, v7, v5);
    if ( Path )
    {
      if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v21);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v10 + 160);
      v23[0] = v7;
      v23[1] = v5;
      v15 = VIDPN_MGR::FormalizeVidPnChange(
              *(_QWORD *)(Container + 48),
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              8,
              a4,
              v23);
      v6 = v15;
      if ( v15 < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v22[3] = v7;
        v22[4] = v5;
        v22[5] = Container;
        v22[6] = v6;
        WdLogEvent5_WdError(v22);
      }
      else
      {
        LODWORD(v6) = 0;
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v20[3] = v7;
      v20[4] = v5;
      v20[5] = v6;
      WdLogEvent5_WdError(v20);
      LODWORD(v6) = -1071774937;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = v6;
    WdLogEvent5_WdError(v19);
    LODWORD(v6) = -1071774976;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, 6027);
  return (unsigned int)v6;
}
