/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CA?AW4Variant_HamOptIn@@XZ @ 0x180030B70
 * Callers:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@SA?AW4Variant_HamOptIn@@W4VariantReportingKind@2@_N@Z @ 0x1800306F8 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@SA-AW4Variant_HamOpt.c)
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CAX_NW4Variant_HamOptIn@@W4VariantReportingKind@2@_K@Z @ 0x180030714 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CAX_NW4Varian.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18003C8FC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x180062324 (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetCachedVariantState()
{
  char v0; // bl
  int v1; // esi
  unsigned int (*v3)(unsigned int, enum FEATURE_CHANGE_TIME, unsigned int *, int *); // rax
  unsigned int v4; // eax
  int v5; // ecx
  char v6; // al
  bool v7; // cf
  char v8; // bp
  char v9; // al
  unsigned int v10; // ebx
  int v11; // edi
  unsigned int v12; // ebx
  _BYTE v13[72]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+8h]
  int v15; // [rsp+88h] [rbp+10h] BYREF
  int v16; // [rsp+90h] [rbp+18h] BYREF

  v0 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v3 = g_wil_details_internalGetFeatureVariant;
    v15 = 0;
    if ( g_wil_details_internalGetFeatureVariant || (v3 = g_wil_details_apiGetFeatureVariant) != 0LL )
      v4 = ((__int64 (__fastcall *)(__int64, __int64, int *, int *))v3)(10956236LL, 3LL, &v16, &v15);
    else
      v4 = 0;
    v5 = (v4 >> 7) & 1;
    v6 = v4 & 0x7F;
    if ( !v6 )
    {
      v16 = 0;
      v6 = 0;
    }
    v7 = v0 != 0;
    v8 = v6;
    v9 = v0;
    v10 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v11 = v7 + 1;
    if ( v1 )
      v11 = v1;
    else
      LOBYTE(v10) = v5;
    if ( v1 )
      v8 = v9;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      &wil::details::g_enabledStateManager,
      &`wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data,
      3LL);
    if ( g_wil_details_testStates && (unsigned int)wil_details_HasTestState(10956236LL, 0LL, v13) )
      v11 = 0;
    v14 = (v15 != 0 ? 32 : 16) | `wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF;
    if ( !v1 )
    {
      v12 = v11 | (v15 != 0 ? 32 : 16) & 0xFFFFFFF8 | `wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (4 * (v10 & 1));
      v14 = v12;
      if ( dword_1800937DC != v16
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v8 )
      {
        dword_1800937DC = v16;
        v14 = v12 & 0xFFFFE03F | ((v8 & 0x3F) << 7);
      }
    }
    v0 = v8;
    if ( `wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data != v14 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data,
        v14);
  }
  return v0;
}
