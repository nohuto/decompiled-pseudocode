/*
 * XREFs of ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008D94
 * Callers:
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C00DF1F0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00DF4EC (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0009668 (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000C360 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsFunctional(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v1 + 104);
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 96));
    v4 = *(_QWORD *)(v1 + 104);
  }
  else
  {
    v4 = 0LL;
  }
  v10 = v4;
  if ( *(_QWORD *)(v4 + 48) == v4 + 48 || !*(_QWORD *)(v4 + 144) )
  {
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v10, 0LL);
  }
  else
  {
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v10, 0LL);
    v5 = *((_QWORD *)this + 12);
    v6 = *(_QWORD *)(v5 + 104);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
      v7 = *(_QWORD *)(v5 + 104);
    }
    else
    {
      v7 = 0LL;
    }
    v9 = v7;
    if ( *(_QWORD *)(v7 + 48) == v7 + 48 || !*(_QWORD *)(v7 + 144) )
    {
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v9, 0LL);
    }
    else
    {
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v9, 0LL);
      if ( DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(
             this,
             *((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)this + 28))
        && DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(*((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29)) )
      {
        return 1;
      }
    }
  }
  return 0;
}
