/*
 * XREFs of ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C02235E4
 * Callers:
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00BF2FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z @ 0x1C0162BD4 (-DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetGamma(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  DXGADAPTER **v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm0
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v16; // xmm1_8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v24; // rax
  _DXGKARG_SETTARGETGAMMA v25; // [rsp+38h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v5 = *(_QWORD *)(v3 + 88);
  v6 = *(DXGADAPTER ***)(v5 + 8);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
    v6 = *(DXGADAPTER ***)(v5 + 8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6[2] + 24) + 64LL) + 40LL);
  if ( *(_DWORD *)(v11 + 28) < 0x700Au )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)this + 12);
  if ( !*(_BYTE *)(*(_QWORD *)(v13 + 96) + 409LL) )
    return 0LL;
  v25.TargetId = *(_DWORD *)(v13 + 24);
  v14 = *((_QWORD *)this + 23);
  if ( v14 )
  {
    v15 = *(_OWORD *)(v14 + 16);
    v16 = *(D3DDDI_GAMMA_RAMP_RGB256x3x16 **)(v14 + 32);
  }
  else
  {
    v15 = *(_OWORD *)&g_DefaultGammaRamp.Type;
    v16 = 0LL;
  }
  *(_OWORD *)&v25.GammaRamp.Type = v15;
  v25.GammaRamp.Data.pRgb256x3x16 = v16;
  v17 = ADAPTER_DISPLAY::DdiSetTargetGamma((ADAPTER_DISPLAY *)v6, &v25, v9);
  v21 = v17;
  if ( v17 == -1073741637 )
  {
    v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v22 + 24) = this;
    *(_QWORD *)(v22 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v22);
    return 3221225659LL;
  }
  if ( v17 >= 0 )
    return 0LL;
  v24 = WdLogNewEntry5_WdError(v19);
  *(_QWORD *)(v24 + 24) = this;
  *(_QWORD *)(v24 + 32) = v21;
  WdLogEvent5_WdError(v24);
  return (unsigned int)v21;
}
