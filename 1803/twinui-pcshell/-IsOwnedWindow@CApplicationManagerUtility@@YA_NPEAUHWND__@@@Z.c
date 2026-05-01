/*
 * XREFs of ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800051EC
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800413D0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010C7F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801125B4 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ShouldWindowBeConsideredForRecovery @ 0x180113220 (ShouldWindowBeConsideredForRecovery.c)
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationManagerUtility::IsOwnedWindow(CApplicationManagerUtility *this, HWND a2)
{
  return GetWindow((HWND)this, 4u) != 0LL;
}
