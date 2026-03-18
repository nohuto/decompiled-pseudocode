/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CA?AW4Variant_DwmHintingPpm@@XZ @ 0x1800BA1F8
 * Callers:
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x180052D60 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800BBC24 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestState@@@Z @ 0x180143210 (-wil_details_HasTestState@@YAHIW4wil_details_FeatureTestStateKind@@PEAUwil_details_FeatureTestSt.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetCachedVariantState()
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
  int v10; // ebx
  int v11; // edi
  unsigned int v12; // ebx
  _BYTE v13[72]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+8h]
  int v15; // [rsp+88h] [rbp+10h] BYREF
  int v16; // [rsp+90h] [rbp+18h] BYREF

  v0 = (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v3 = g_wil_details_internalGetFeatureVariant;
    v15 = 0;
    if ( g_wil_details_internalGetFeatureVariant || (v3 = g_wil_details_apiGetFeatureVariant) != 0LL )
      v4 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, int *))v3)(12805652LL, 0LL, &v16, &v15);
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
    v10 = `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v11 = v7 + 1;
    if ( v1 )
    {
      v11 = v1;
      v8 = v9;
    }
    else
    {
      LOBYTE(v10) = v5;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      &wil::details::g_enabledStateManager,
      &`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
      0LL);
    if ( g_wil_details_testStates && (unsigned int)wil_details_HasTestState(12805652LL, 0LL, v13) )
      v11 = 0;
    v14 = (v15 != 0 ? 32 : 16) | `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF;
    if ( !v1 )
    {
      v12 = v11 | (v15 != 0 ? 32 : 16) & 0xFFFFFFF8 | `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (4 * (v10 & 1));
      v14 = v12;
      if ( dword_1802D616C != v16
        || ((`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v8 )
      {
        dword_1802D616C = v16;
        v14 = v12 & 0xFFFFE03F | ((v8 & 0x3F) << 7);
      }
    }
    v0 = v8;
    if ( `wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data != v14 )
      _InterlockedExchange(
        (volatile __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::GetFeatureVariantPropertyCache'::`2'::data,
        v14);
  }
  return v0;
}
