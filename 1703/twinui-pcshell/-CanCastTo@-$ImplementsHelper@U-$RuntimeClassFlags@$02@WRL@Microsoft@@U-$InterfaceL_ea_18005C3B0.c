/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@UIImmersiveApplication@@U?$InterfaceList@UIImmersiveApplicationHolographic@@U?$InterfaceList@UIImmersiveApplicationInternal@@U?$InterfaceList@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@U?$InterfaceList@UIServiceProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005C3B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@UIImmersiveApplication@@U?$InterfaceList@UIImmersiveApplicationHolographic@@U?$InterfaceList@UIImmersiveApplicationInternal@@U?$InterfaceList@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@U?$InterfaceList@UIServiceProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A390 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_18005A390.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@U?$InterfaceList@UIServiceProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005C4C8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@UIObjectW.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveApplication,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationHolographic,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationInternal,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  int v4; // ecx
  __int64 result; // rax

  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    goto LABEL_16;
  }
  v3 = a1 + 8;
  if ( *a2 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    v4 = 1;
    *a3 = v3;
  }
  else
  {
    v4 = 0;
  }
  result = v4 == 0 ? 0x80004002 : 0;
  if ( !v4 )
  {
    a1 = v3 + 32;
    if ( *a2 != -1961564021
      || a2[1] != *(_DWORD *)&GUID_8b14e88b_5663_4caf_b196_c31479262831.Data2
      || a2[2] != *(_DWORD *)GUID_8b14e88b_5663_4caf_b196_c31479262831.Data4
      || a2[3] != *(_DWORD *)&GUID_8b14e88b_5663_4caf_b196_c31479262831.Data4[4] )
    {
      a1 = v3 + 40;
      if ( *a2 != -191750833
        || a2[1] != *(_DWORD *)&GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e.Data2
        || a2[2] != *(_DWORD *)GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e.Data4
        || a2[3] != *(_DWORD *)&GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e.Data4[4] )
      {
        a1 = v3 + 48;
        if ( *a2 != -919595472
          || a2[1] != *(_DWORD *)&GUID_c9301630_27da_428e_a432_0a5e49c0ffee.Data2
          || a2[2] != *(_DWORD *)GUID_c9301630_27da_428e_a432_0a5e49c0ffee.Data4
          || a2[3] != *(_DWORD *)&GUID_c9301630_27da_428e_a432_0a5e49c0ffee.Data4[4] )
        {
          return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,Microsoft::WRL::Details::InterfaceList<IServiceProvider,Microsoft::WRL::Details::Nil>>>>,1,0>::CanCastTo(v3 + 56);
        }
      }
    }
LABEL_16:
    *a3 = a1;
    return 0LL;
  }
  return result;
}
