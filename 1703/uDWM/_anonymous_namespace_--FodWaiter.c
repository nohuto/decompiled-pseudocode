/*
 * XREFs of _anonymous_namespace_::FodWaiter @ 0x180073570
 * Callers:
 *     <none>
 * Callees:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     _anonymous_namespace_::GetCbsSession @ 0x180073610 (_anonymous_namespace_--GetCbsSession.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::IsFodInstalled @ 0x1800738A4 (_anonymous_namespace_--IsFodInstalled.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x180074C54 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

void __fastcall anonymous_namespace_::FodWaiter(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work)
{
  void **CbsSession; // rax
  void *v4; // rcx
  LPVOID v5; // rax
  __int64 v6; // rcx
  LPVOID v7; // [rsp+20h] [rbp-18h] BYREF
  LPVOID v8[2]; // [rsp+28h] [rbp-10h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp+20h] BYREF

  anonymous_namespace_::GetCbsSession(&ppv);
  while ( !ppv )
  {
    Sleep(0x1F4u);
    CbsSession = (void **)anonymous_namespace_::GetCbsSession(v8);
    v4 = 0LL;
    if ( &v7 != CbsSession )
    {
      v4 = *CbsSession;
      *CbsSession = 0LL;
    }
    v5 = ppv;
    ppv = v4;
    v7 = v5;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
  }
  while ( !(unsigned __int8)anonymous_namespace_::IsFodInstalled(&ppv) )
    Sleep(0x1F4u);
  CDesktopManager::ModeChangeImpl(CDesktopManager::s_pDesktopManagerInstance);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,0,std::nullptr_t>>::reset(
    v6,
    0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
}
