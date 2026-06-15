/*
 * XREFs of ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18004F278
 * Callers:
 *     ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x18004F024 (-GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18004F3C0 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     _dynamic_atexit_destructor_for__CSpatialAudioTech::s_spAtmosCheck__ @ 0x18006B6D0 (_dynamic_atexit_destructor_for__CSpatialAudioTech--s_spAtmosCheck__.c)
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x1800FEED0 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 *     ??_E?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PEAVPackageInstallingEventArgs@23@@Foundation@Windows@@V_lambda_f6dae7814606855f79762b97c09932ee_@@$0?0PEAUIPackageCatalog@ApplicationModel@3@PEAUIPackageInstallingEventArgs@63@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVPackageCatalog@ApplicationModel@Windows@@PEAUIPackageCatalog@23@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPackageInstallingEventArgs@ApplicationModel@Windows@@PEAUIPackageInstallingEventArgs@23@@234@@Foundation@Windows@@EAAJPEAUIPackageCatalog@ApplicationModel@3@PEAUIPackageInstallingEventArgs@53@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18010F7D0 (--_E-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVPackageCatalog@ApplicationModel@Windows@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    else
      return v4();
  }
  return result;
}
