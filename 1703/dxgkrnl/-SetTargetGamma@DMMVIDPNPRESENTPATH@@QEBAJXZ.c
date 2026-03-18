/*
 * XREFs of ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C01DD874
 * Callers:
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00A2B34 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z @ 0x1C01792A0 (-DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetGamma(DMMVIDPNPRESENTPATH *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  DXGADAPTER **v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int128 v18; // xmm0
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v19; // xmm1_8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v28; // rax
  _DXGKARG_SETTARGETGAMMA v29; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v5 + 40) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 88LL);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(DXGADAPTER ***)(v7 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v9[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9[2] + 24) + 64LL) + 40LL);
  if ( *(_DWORD *)(v15 + 28) < 0x700Au )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15, v10, v12, v13);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(
          (ADAPTER_DISPLAY *)v9,
          *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
          v12,
          v13) )
    return 0LL;
  v18 = *(_OWORD *)((char *)this + 184);
  v19 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)this + 25);
  v29.TargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  *(_OWORD *)&v29.GammaRamp.Type = v18;
  v29.GammaRamp.Data.pRgb256x3x16 = v19;
  v20 = ADAPTER_DISPLAY::DdiSetTargetGamma((ADAPTER_DISPLAY *)v9, &v29, v17);
  v25 = v20;
  if ( v20 == -1073741637 )
  {
    v26 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    *(_QWORD *)(v26 + 24) = this;
    *(_QWORD *)(v26 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v26);
    return (unsigned int)v25;
  }
  if ( v20 >= 0 )
    return 0LL;
  v28 = WdLogNewEntry5_WdError(v22, v21);
  *(_QWORD *)(v28 + 24) = this;
  *(_QWORD *)(v28 + 32) = v25;
  WdLogEvent5_WdError(v28);
  return (unsigned int)v25;
}
