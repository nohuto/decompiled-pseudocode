/*
 * XREFs of ??1?$ComPtr@VWin32BackedViewHostItem@@@WRL@Microsoft@@QEAA@XZ @ 0x180100F80
 * Callers:
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$2 @ 0x1801ED4EC (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$2.c)
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$6 @ 0x1801ED504 (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$6.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIForegroundTarget@ComposableShell@78@UICoreForegroundTarget@Core@ComposableShell@78@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801025E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Hol.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Win32BackedViewHostItem>::~ComPtr<Win32BackedViewHostItem>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
