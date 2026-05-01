/*
 * XREFs of ?QueryService@CImmersiveApp@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800537E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U?$InterfaceList@UISplashScreen@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005EB20 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::QueryService(
        CImmersiveApp *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v7; // ebx
  IUnknown **GITSitePtr; // rax
  HRESULT Service; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_0e0da070_2224_4934_8090_041f7ff223eb )
  {
    return (unsigned int)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                           *((_QWORD *)this + 32),
                           a3,
                           a4);
  }
  else
  {
    GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((__int64)this - 160, &v12);
    Service = IUnknown_QueryService(*GITSitePtr, a2, a3, a4);
    v10 = v12;
    v7 = Service;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return v7;
}
