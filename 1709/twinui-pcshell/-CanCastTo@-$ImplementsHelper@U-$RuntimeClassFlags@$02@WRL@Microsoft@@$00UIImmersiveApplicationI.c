/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@6789Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@89Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005E84C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005E730 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBas.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == -919595472
    && a2[1] == *(_DWORD *)&GUID_c9301630_27da_428e_a432_0a5e49c0ffee.Data2
    && a2[2] == *(_DWORD *)GUID_c9301630_27da_428e_a432_0a5e49c0ffee.Data4
    && a2[3] == *(_DWORD *)&GUID_c9301630_27da_428e_a432_0a5e49c0ffee.Data4[4]
    || (a1 += 8LL, *a2 == -1926591548)
    && a2[1] == *(_DWORD *)&GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8.Data2
    && a2[2] == *(_DWORD *)GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8.Data4
    && a2[3] == *(_DWORD *)&GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8.Data4[4]
    || (a1 += 8LL, *a2 == -2024199341)
    && a2[1] == *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data2
    && a2[2] == *(_DWORD *)GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4
    && a2[3] == *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4[4]
    || (a1 += 48LL, *a2 == 1612740340)
    && a2[1] == *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data2
    && a2[2] == *(_DWORD *)GUID_602076f4_9793_429d_a999_f951052e28e9.Data4
    && a2[3] == *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 1834041537
    && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
    && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
    && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
  {
    *a3 = a1 + 64;
    return 0LL;
  }
  return 2147500034LL;
}
