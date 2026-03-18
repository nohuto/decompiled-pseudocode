/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C00A7CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C0009C10 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C000C3B4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  char v3; // bp
  DMMVIDPNSOURCEMODESET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DMMVIDPNSOURCEMODESET *v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 Container; // rax
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  int v31; // [rsp+50h] [rbp+18h] BYREF
  int v32; // [rsp+54h] [rbp+1Ch]

  v3 = (char)a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6008);
  v5 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v8 = v5;
  if ( v5 )
  {
    v9 = DMMVIDPNSOURCEMODESET::UnpinMode(v5);
    v14 = v9;
    if ( v9 < 0 )
    {
      v27 = WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      *(_QWORD *)(v27 + 24) = this;
      *(_QWORD *)(v27 + 32) = v14;
    }
    else
    {
      v15 = *((_QWORD *)v8 + 14);
      if ( !v15 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        WdLogEvent5_WdAssertion(v28);
      }
      if ( !*(_QWORD *)(v15 + 40) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        WdLogEvent5_WdAssertion(v29);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL);
      v17 = *(_DWORD *)(v15 + 24);
      v18 = Container;
      LOBYTE(v19) = v3;
      v20 = *(_QWORD *)(Container + 48);
      v32 = -1;
      v31 = v17;
      v21 = VIDPN_MGR::FormalizeVidPnChange(v20, Container & -(__int64)(Container != -88), 4LL, v19, &v31);
      v14 = v21;
      if ( v21 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v30[3] = *(unsigned int *)(v15 + 24);
        v30[4] = v18;
        v30[5] = v14;
        WdLogEvent5_WdError(v30);
      }
      else
      {
        LODWORD(v14) = 0;
      }
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    LODWORD(v14) = -1071774968;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v23, &EventProfilerExit, v24, 6008);
  return (unsigned int)v14;
}
