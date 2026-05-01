/*
 * XREFs of ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18021C5C8
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1800AB670 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x180208BD0 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 *     ?CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSwitchItemListViewModel@2345@PE$AAUISwitchItemDataSource@Multitasking@4Internal@Windows@@@Z @ 0x18020A3A0 (-CreateInstance@__ISwitchItemListViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIn.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x180215DF4 (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 *     ?PinUnPinSwitchItemToAllDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802160E8 (-PinUnPinSwitchItemToAllDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal.c)
 *     ??$TaskViewContextMenuInvoked@I@XamlSwitcherTelemetry@@SAX$$QEAI@Z @ 0x18021A9F4 (--$TaskViewContextMenuInvoked@I@XamlSwitcherTelemetry@@SAX$$QEAI@Z.c)
 *     ?CanSwitchItemMoveDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NPE$AAUISwitchItem@2345@@Z @ 0x18021C440 (-CanSwitchItemMoveDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windo.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18021DF2C (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 *     ?PinUnPinSwitchItemViewToAllDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18021EBF4 (-PinUnPinSwitchItemViewToAllDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Inte.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x180221C38 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     ?set@ContextMenuEntries@__ISwitchItemContextMenuArgsPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAU?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180221D08 (-set@ContextMenuEntries@__ISwitchItemContextMenuArgsPublicNonVirtuals@Switcher@Experiences@Compo.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _ContextMenuInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_5WindowsInternal___Z(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 Instance; // rax
  __int64 v9; // r12
  unsigned int v10; // esi
  __int64 v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  __int64 v21; // [rsp+20h] [rbp-20h]
  __int64 v22; // [rsp+28h] [rbp-18h]
  unsigned int v23; // [rsp+80h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+58h]

  v23 = 0;
  v5 = Windows::UI::Xaml::Interop::IBindableVector::Size::get(a3);
  v6 = v5;
  v7 = 4;
  if ( v5 < 0x5DD )
    goto LABEL_8;
  if ( v5 <= 0x5DE )
    goto LABEL_16;
  if ( v5 <= 0x5E0 )
  {
LABEL_8:
    if ( Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::CanSwitchItemMoveDesktops(
           a1[24],
           a2) )
    {
      if ( v6 == 1504 )
      {
        Instance = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(a1[24]);
        v9 = Instance;
        v24 = Instance;
        v10 = 1;
        v11 = Instance;
      }
      else
      {
        v21 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a1[23]);
        v23 = 2;
        Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemListViewModelFactory::CreateInstance(
                     v21,
                     v6);
        v11 = Instance;
        v24 = Instance;
        v10 = 6;
        v9 = Instance;
      }
      v23 = v10;
      v22 = __abi_winrt_ptr_ctor(Instance);
      if ( (v10 & 4) != 0 )
      {
        v10 &= ~4u;
        v23 = v10;
        __abi_winrt_ptr_dtor(v11);
      }
      if ( (v10 & 2) != 0 )
      {
        v10 &= ~2u;
        v23 = v10;
        __abi_winrt_ptr_dtor(v21);
      }
      if ( (v10 & 1) != 0 )
        __abi_winrt_ptr_dtor(v9);
      WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemContextMenuArgsPublicNonVirtuals::ContextMenuEntries::set(
        a1[24],
        a2);
      __abi_winrt_ptr_dtor(v22);
    }
    goto LABEL_25;
  }
  if ( v5 > 0x5E2 )
  {
    if ( v5 != 1507 )
    {
      if ( v5 == 1508 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(a1[2] + 88LL))(a1 + 2, a2);
        goto LABEL_25;
      }
      if ( v5 > 0x5E6 )
        goto LABEL_8;
    }
LABEL_16:
    XamlAllUpViewController::HandleSnappingCommands(a1, a2, v5);
    goto LABEL_25;
  }
  v12 = v5 - 1505;
  if ( v12 )
  {
    if ( v12 == 1 )
      Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::PinUnPinSwitchItemToAllDesktops(a1[24]);
  }
  else
  {
    Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::PinUnPinSwitchItemViewToAllDesktops(
      a1[24],
      a2);
  }
LABEL_25:
  v13 = v6 - 1501;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v7 = 3;
      v15 = v14 - 3;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                if ( v19 != 1 )
                  v7 = 9;
              }
              else
              {
                v7 = 2;
              }
            }
            else
            {
              v7 = 1;
            }
          }
          else
          {
            v7 = 6;
          }
        }
        else
        {
          v7 = 8;
        }
      }
      else
      {
        v7 = 7;
      }
    }
    else
    {
      v7 = 5;
    }
  }
  v23 = v7;
  XamlSwitcherTelemetry::TaskViewContextMenuInvoked<unsigned int>(&v23);
  return __abi_winrt_ptr_assign(a1 + 25, 0LL);
}
