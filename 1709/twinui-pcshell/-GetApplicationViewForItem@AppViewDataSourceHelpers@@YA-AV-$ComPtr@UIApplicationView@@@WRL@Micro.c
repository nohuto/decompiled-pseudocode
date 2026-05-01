/*
 * XREFs of ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180147778
 * Callers:
 *     ?OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@Z @ 0x1801487D4 (-OnSwitchItemInvoked@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_09ef7075ad8fc93381d4536ce998b341__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::Invoke @ 0x18015F590 (Platform--Details--__abi_FunctorCapture__lambda_09ef7075ad8fc93381d4536ce998b341__void_Windows--.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18017AA5C (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform@@XZ @ 0x180148CC8 (-get@Data@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAVObject@Platform.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1801926A0 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall AppViewDataSourceHelpers::GetApplicationViewForItem(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // si
  __int64 v6; // rax
  AppViewDataSourceHelpers *v7; // rbx
  __int64 *v8; // rax
  struct IInspectable *v9; // rdx
  void **v10; // r9
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h]

  v4 = Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
  v14 = v4;
  v5 = v4 == 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
  {
    *a1 = 0LL;
  }
  else
  {
    v6 = Windows::Internal::ComposableShell::Multitasking::ISwitchItem::Data::get(a2);
    v7 = (AppViewDataSourceHelpers *)v6;
    v14 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    if ( v7 )
      (*(void (__fastcall **)(AppViewDataSourceHelpers *))(*(_QWORD *)v7 + 16LL))(v7);
    v13 = 0LL;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
    AppViewDataSourceHelpers::GetApplicationViewForItemData(v7, v9, (const struct _GUID *)v8, v10);
    *a1 = 0LL;
    if ( a1 == &v13 )
    {
      v11 = v13;
    }
    else
    {
      *a1 = v13;
      v11 = 0LL;
      v13 = 0LL;
    }
    if ( v11 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v7 )
      (*(void (__fastcall **)(AppViewDataSourceHelpers *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return a1;
}
