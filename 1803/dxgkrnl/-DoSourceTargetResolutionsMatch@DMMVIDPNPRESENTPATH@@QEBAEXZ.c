/*
 * XREFs of ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000677C
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006730 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00BBB0C (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 *     BmlPinPathContentScaling @ 0x1C00C3080 (BmlPinPathContentScaling.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C00072D8 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BF1FC (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(DMMVIDPNPRESENTPATH *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v10; // ecx
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v13; // eax
  DMMVIDPNPRESENTPATH *v14; // r8
  unsigned __int64 v15; // rdi
  int v17; // eax
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v2 = 1;
  v3 = *((_QWORD *)this + 11);
  v4 = *(_QWORD *)(v3 + 104);
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 96), 1u);
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *((_QWORD *)this + 12);
  v19 = v5;
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 96), 1u);
    v8 = *(_QWORD *)(v6 + 104);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(_QWORD *)(v5 + 144);
  v10 = *((_DWORD *)this + 29);
  v18 = v8;
  v11 = *(_QWORD *)(v8 + 144);
  v12 = *(_QWORD *)(v9 + 76);
  v13 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v10);
  if ( v13 == D3DKMDT_VPPR_ROTATE90 || v13 == D3DKMDT_VPPR_ROTATE270 )
  {
    LODWORD(v15) = v12;
  }
  else
  {
    v15 = HIDWORD(v12);
    if ( v13 != D3DKMDT_VPPR_UNPINNED || !DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(v14) )
    {
      v17 = v12;
      goto LABEL_14;
    }
    if ( v12 == *(_QWORD *)(v11 + 84) )
      goto LABEL_10;
    LODWORD(v15) = v12;
  }
  v17 = HIDWORD(v12);
LABEL_14:
  if ( v17 != *(_DWORD *)(v11 + 84) || (_DWORD)v15 != *(_DWORD *)(v11 + 88) )
    v2 = 0;
LABEL_10:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v18, 0LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v19, 0LL);
  return v2;
}
