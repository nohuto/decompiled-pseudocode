/*
 * XREFs of ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006864
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006730 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00B6F48 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00BBB0C (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 11);
  v2 = 1;
  v3 = *(_QWORD *)(v1 + 104);
  if ( v3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 96), 1u);
    v4 = *(_QWORD *)(v1 + 104);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *((_QWORD *)this + 12);
  v10 = v4;
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v6 + 96), 1u);
    v6 = *(_QWORD *)(v5 + 104);
  }
  v7 = *(_QWORD *)(v4 + 144) == 0LL;
  v9 = v6;
  if ( v7 || !*(_QWORD *)(v6 + 144) )
    v2 = 0;
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v9, 0LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v10, 0LL);
  return v2;
}
