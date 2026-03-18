/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C00D9120
 * Callers:
 *     <none>
 * Callees:
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000550C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // bp
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rcx
  DMMVIDPNTARGETMODESET *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 Container; // rsi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v24; // [rsp+50h] [rbp+18h] BYREF
  int v25; // [rsp+54h] [rbp+1Ch]

  v3 = (char)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6016);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( v5 )
  {
    v8 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
    v11 = v8;
    if ( v8 < 0 )
    {
      v20 = WdLogNewEntry5_WdTrace(v10, v9);
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = v11;
    }
    else
    {
      v12 = *((_QWORD *)v7 + 14);
      if ( !v12 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v21);
      }
      if ( !*(_QWORD *)(v12 + 40) )
      {
        v22 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v22);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v12 + 40) + 64LL);
      v14 = *(_QWORD *)(Container + 48);
      v24 = -1;
      v25 = *(_DWORD *)(v12 + 24);
      v15 = VIDPN_MGR::FormalizeVidPnChange(
              v14,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              6,
              v3,
              &v24);
      v11 = v15;
      if ( v15 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v23[3] = *(unsigned int *)(v12 + 24);
        v23[4] = Container;
        v23[5] = v11;
        WdLogEvent5_WdError(v23);
      }
      else
      {
        LODWORD(v11) = 0;
      }
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    LODWORD(v11) = -1071774967;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, 6016);
  return (unsigned int)v11;
}
