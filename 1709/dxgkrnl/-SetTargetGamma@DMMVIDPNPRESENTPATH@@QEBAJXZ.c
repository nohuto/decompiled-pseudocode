/*
 * XREFs of ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01F626C
 * Callers:
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C007C440 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z @ 0x1C017CC10 (-DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetGamma(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  DXGADAPTER **v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v14; // xmm0
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v15; // xmm1_8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v23; // rax
  _DXGKARG_SETTARGETGAMMA v24; // [rsp+38h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *(DXGADAPTER ***)(v4 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6[2] + 24) + 64LL) + 40LL);
  if ( *(_DWORD *)(v10 + 28) < 0x700Au )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)this + 12);
  if ( !*(_BYTE *)(*(_QWORD *)(v12 + 96) + 410LL) )
    return 0LL;
  v24.TargetId = *(_DWORD *)(v12 + 24);
  v13 = *((_QWORD *)this + 23);
  if ( v13 )
  {
    v14 = *(_OWORD *)(v13 + 16);
    v15 = *(D3DDDI_GAMMA_RAMP_RGB256x3x16 **)(v13 + 32);
  }
  else
  {
    v14 = *(_OWORD *)&g_DefaultGammaRamp.Type;
    v15 = 0LL;
  }
  *(_OWORD *)&v24.GammaRamp.Type = v14;
  v24.GammaRamp.Data.pRgb256x3x16 = v15;
  v16 = ADAPTER_DISPLAY::DdiSetTargetGamma((ADAPTER_DISPLAY *)v6, &v24, v8);
  v20 = v16;
  if ( v16 == -1073741637 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = this;
    *(_QWORD *)(v21 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v21);
    return (unsigned int)v20;
  }
  if ( v16 >= 0 )
    return 0LL;
  v23 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v23 + 24) = this;
  *(_QWORD *)(v23 + 32) = v20;
  WdLogEvent5_WdError(v23);
  return (unsigned int)v20;
}
