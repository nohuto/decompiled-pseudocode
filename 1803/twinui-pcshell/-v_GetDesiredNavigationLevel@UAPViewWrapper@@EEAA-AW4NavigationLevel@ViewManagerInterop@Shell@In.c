/*
 * XREFs of ?v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x18005AC10
 * Callers:
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18004EC5C (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x18004ED1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?get_NavigationLevel@ViewWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800508A0 (-get_NavigationLevel@ViewWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Interna.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180050B20 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?GetDesiredNavigationLevel@ViewWrapperBase@@UEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180052CB0 (-GetDesiredNavigationLevel@ViewWrapperBase@@UEAA-AW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UAPViewWrapper::v_GetDesiredNavigationLevel(__int64 a1)
{
  return *(unsigned int *)(a1 + 552);
}
