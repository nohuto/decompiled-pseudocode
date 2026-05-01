/*
 * XREFs of ?Attach@?$ComPtr@VWin32BackedViewHostItem@@@WRL@Microsoft@@QEAAXPEAVWin32BackedViewHostItem@@@Z @ 0x1801AD520
 * Callers:
 *     ??$MakeAndInitialize@VWin32BackedViewHostItem@@V1@AEAPEAUIApplicationView@@AEAPEAUHWND__@@PEAVHolographicPositioner@@@Details@WRL@Microsoft@@YAJPEAPEAVWin32BackedViewHostItem@@AEAPEAUIApplicationView@@AEAPEAUHWND__@@$$QEAPEAVHolographicPositioner@@@Z @ 0x1801AB674 (--$MakeAndInitialize@VWin32BackedViewHostItem@@V1@AEAPEAUIApplicationView@@AEAPEAUHWND__@@PEAVHo.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIForegroundTarget@ComposableShell@78@UICoreForegroundTarget@Core@ComposableShell@78@UIImmersiveShellHookNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801AFD00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_1801AFD00.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Win32BackedViewHostItem>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,IImmersiveShellHookNotification,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
