/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@U?$InterfaceList@UIServiceProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005C4C8
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@UIImmersiveApplication@@U?$InterfaceList@UIImmersiveApplicationHolographic@@U?$InterfaceList@UIImmersiveApplicationInternal@@U?$InterfaceList@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@U?$InterfaceList@UIServiceProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005C3B0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceL_ea_18005C3B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  int v4; // r9d
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // r10

  if ( *a2 == -1926591548
    && a2[1] == *(_DWORD *)&GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8.Data2
    && a2[2] == *(_DWORD *)GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8.Data4
    && a2[3] == *(_DWORD *)&GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  v3 = a1 + 8;
  v4 = 1;
  if ( *a2 == -2024199341
    && a2[1] == *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data2
    && a2[2] == *(_DWORD *)GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4
    && a2[3] == *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4[4] )
  {
    v5 = 1;
    *a3 = v3;
  }
  else
  {
    v5 = 0;
  }
  result = v5 == 0 ? 0x80004002 : 0;
  if ( !v5 )
  {
    v7 = v3 + 40;
    if ( *a2 == 1612740340
      && a2[1] == *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data2
      && a2[2] == *(_DWORD *)GUID_602076f4_9793_429d_a999_f951052e28e9.Data4
      && a2[3] == *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data4[4] )
    {
      *a3 = v7;
    }
    else
    {
      v4 = 0;
    }
    result = v4 == 0 ? 0x80004002 : 0;
    if ( !v4 )
    {
      if ( *a2 == 1834041537
        && a2[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        && a2[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        && a2[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        *a3 = v7 + 56;
        return 0LL;
      }
      return 2147500034LL;
    }
  }
  return result;
}
