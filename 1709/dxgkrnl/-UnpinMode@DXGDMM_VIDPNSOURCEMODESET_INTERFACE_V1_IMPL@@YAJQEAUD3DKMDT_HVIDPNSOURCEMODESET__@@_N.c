/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C00E5A70
 * Callers:
 *     <none>
 * Callees:
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C000B560 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000BBA4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // bp
  DMMVIDPNSOURCEMODESET *v5; // rax
  __int64 v6; // rcx
  DMMVIDPNSOURCEMODESET *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 Container; // rax
  unsigned int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned int v26; // [rsp+50h] [rbp+18h] BYREF
  int v27; // [rsp+54h] [rbp+1Ch]

  v3 = (char)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6008);
  v5 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( v5 )
  {
    v8 = DMMVIDPNSOURCEMODESET::UnpinMode(v5);
    v11 = v8;
    if ( v8 < 0 )
    {
      v22 = WdLogNewEntry5_WdTrace(v10, v9);
      *(_QWORD *)(v22 + 24) = this;
      *(_QWORD *)(v22 + 32) = v11;
    }
    else
    {
      v12 = *((_QWORD *)v7 + 14);
      if ( !v12 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( !*(_QWORD *)(v12 + 40) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v24);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v12 + 40) + 64LL);
      v14 = *(_DWORD *)(v12 + 24);
      v15 = Container;
      v16 = *(_QWORD *)(Container + 48);
      v27 = -1;
      v26 = v14;
      v17 = VIDPN_MGR::FormalizeVidPnChange(
              v16,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              4,
              v3,
              &v26);
      v11 = v17;
      if ( v17 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v18);
        v25[3] = *(unsigned int *)(v12 + 24);
        v25[4] = v15;
        v25[5] = v11;
        WdLogEvent5_WdError(v25);
      }
      else
      {
        LODWORD(v11) = 0;
      }
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    LODWORD(v11) = -1071774968;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, 6008);
  return (unsigned int)v11;
}
