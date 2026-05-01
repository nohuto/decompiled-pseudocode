/*
 * XREFs of ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801FAEA0
 * Callers:
 *     _lambda_b17e8ea3ce422613d156e832a7d26e56_::operator() @ 0x1800A0360 (_lambda_b17e8ea3ce422613d156e832a7d26e56_--operator().c)
 *     ?OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x1801FB150 (-OnSwitchItemInvoked@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@Xam_ea_1801FB150.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180223808 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform@@XZ @ 0x1801FBBFC (-get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x180235C40 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 */

// Hidden C++ exception states: #wind=1
struct _GUID *__fastcall AppViewDataSourceHelpers::GetApplicationViewForItem(struct _GUID *a1, __int64 a2)
{
  bool v4; // bl
  AppViewDataSourceHelpers *v5; // rbx
  struct IInspectable *v6; // rdx
  void **v7; // r9
  struct _GUID v9; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)v9.Data4 = Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
  v4 = *(_QWORD *)v9.Data4 == 0LL;
  __abi_winrt_ptr_dtor(*(__int64 *)v9.Data4);
  if ( v4 )
  {
    *(_QWORD *)&a1->Data1 = 0LL;
  }
  else
  {
    v5 = (AppViewDataSourceHelpers *)Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
    *(_QWORD *)v9.Data4 = v5;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v9.Data4);
    __abi_winrt_ptr_dtor((__int64)v5);
    *(_QWORD *)&v9.Data1 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v9);
    AppViewDataSourceHelpers::GetApplicationViewForItemData(v5, v6, &v9, v7);
    *(_QWORD *)&a1->Data1 = 0LL;
    if ( a1 != &v9 )
    {
      *(_QWORD *)&a1->Data1 = *(_QWORD *)&v9.Data1;
      *(_QWORD *)&v9.Data1 = 0LL;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v9);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)v9.Data4);
  }
  return a1;
}
