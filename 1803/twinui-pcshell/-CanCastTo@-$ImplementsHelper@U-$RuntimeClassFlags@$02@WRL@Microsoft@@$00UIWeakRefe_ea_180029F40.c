/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029F40
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B860 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18002B860.c)
 *     ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18004C810 (-IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // r9d
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r11
  int v7; // r9d
  _DWORD *v8; // r10

  v3 = *a2;
  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, v3 == -62389853)
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4]
    || (a1 += 40LL, v3 == -1961564021)
    && a2[1] == *(_DWORD *)&GUID_8b14e88b_5663_4caf_b196_c31479262831.Data2
    && a2[2] == *(_DWORD *)GUID_8b14e88b_5663_4caf_b196_c31479262831.Data4
    && a2[3] == *(_DWORD *)&GUID_8b14e88b_5663_4caf_b196_c31479262831.Data4[4]
    || (a1 += 8LL, v3 == 110086234)
    && a2[1] == *(_DWORD *)&GUID_068fc85a_d4d0_45b0_ab39_311de750a277.Data2
    && a2[2] == *(_DWORD *)GUID_068fc85a_d4d0_45b0_ab39_311de750a277.Data4
    && a2[3] == *(_DWORD *)&GUID_068fc85a_d4d0_45b0_ab39_311de750a277.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else if ( InlineIsEqualGUID(a2, &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e)
         || InlineIsEqualGUID(v4, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee)
         || (v6 += 8LL, v7 == -1926591548)
         && v8[1] == *(_DWORD *)&GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8.Data2
         && v8[2] == *(_DWORD *)GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8.Data4
         && v8[3] == *(_DWORD *)&GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8.Data4[4]
         || (v6 += 8LL, v7 == -2024199341)
         && v8[1] == *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data2
         && v8[2] == *(_DWORD *)GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4
         && v8[3] == *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4[4]
         || (v6 += 48LL, v7 == 1612740340)
         && v8[1] == *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data2
         && v8[2] == *(_DWORD *)GUID_602076f4_9793_429d_a999_f951052e28e9.Data4
         && v8[3] == *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data4[4] )
  {
    *v5 = v6;
    return 0LL;
  }
  else if ( v7 == 1834041537
         && v8[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
         && v8[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
         && v8[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
  {
    *v5 = v6 + 64;
    return 0LL;
  }
  else
  {
    return 2147500034LL;
  }
}
