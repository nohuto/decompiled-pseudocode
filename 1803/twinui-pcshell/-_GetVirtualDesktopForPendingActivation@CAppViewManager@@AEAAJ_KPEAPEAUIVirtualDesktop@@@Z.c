/*
 * XREFs of ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x180009730
 * Callers:
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18000A8B0 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180033D00 (-GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation.c)
 *     ?GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAU_GUID@@@Z @ 0x180094294 (-GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_GetVirtualDesktopForPendingActivation(
        IUnknown **this,
        unsigned __int64 a2,
        struct IVirtualDesktop **a3)
{
  HRESULT ActivationVirtualDesktopId; // ebx
  ViewEventDispatcher *v7; // rbx
  __int64 (__fastcall *v8)(ViewEventDispatcher *__hidden, unsigned __int64, struct Windows::Foundation::Collections::IPropertySet **); // rax
  int PendingActivationData; // eax
  struct _GUID *v10; // r8
  struct Windows::Foundation::Collections::IPropertySet *v12; // [rsp+20h] [rbp-40h] BYREF
  void *v13; // [rsp+28h] [rbp-38h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15[2]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-18h] BYREF

  v15[1] = -2LL;
  *a3 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  ActivationVirtualDesktopId = IUnknown_QueryService(
                                 this[15],
                                 &SID_ViewEventDispatcher,
                                 &GUID_f36451a9_014a_43ea_9492_ff81c012e15f,
                                 &ppvOut);
  if ( ActivationVirtualDesktopId >= 0 )
  {
    v12 = 0LL;
    v7 = (ViewEventDispatcher *)ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v8 = *(__int64 (__fastcall **)(ViewEventDispatcher *__hidden, unsigned __int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v7 + 64LL);
    if ( v8 == ViewEventDispatcher::GetPendingActivationData )
      PendingActivationData = ViewEventDispatcher::GetPendingActivationData(v7, a2, &v12);
    else
      PendingActivationData = v8(v7, a2, &v12);
    ActivationVirtualDesktopId = PendingActivationData;
    if ( PendingActivationData >= 0 )
    {
      v15[0] = (__int64)v12;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v15);
      ActivationVirtualDesktopId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationVirtualDesktopId(
                                     (Windows::Internal::Shell::Desktop::ViewManagerInterop *)v15,
                                     (struct Windows::Internal::ShellHelpers::PropertySetHelper *)v16,
                                     v10);
      if ( ActivationVirtualDesktopId >= 0 )
      {
        v13 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        ActivationVirtualDesktopId = IUnknown_QueryService(
                                       this[15],
                                       (const GUID *const)&SID_VirtualDesktopManager,
                                       &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                                       &v13);
        if ( ActivationVirtualDesktopId >= 0 )
          ActivationVirtualDesktopId = (*(__int64 (__fastcall **)(void *, _BYTE *, struct IVirtualDesktop **))(*(_QWORD *)v13 + 96LL))(
                                         v13,
                                         v16,
                                         a3);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)ActivationVirtualDesktopId;
}
