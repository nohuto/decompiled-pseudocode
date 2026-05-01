/*
 * XREFs of ??1?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@QEAA@XZ @ 0x180100F60
 * Callers:
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$3 @ 0x1801ED51C (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$3.c)
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$9 @ 0x1801ED534 (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$9.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@UIForegroundTarget@ComposableShell@78@UICoreForegroundTarget@Core@ComposableShell@78@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180102920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_180102920.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::~ComPtr<ApplicationViewBackedViewHostItem>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
