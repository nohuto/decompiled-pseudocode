/*
 * XREFs of ??1?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B91E4
 * Callers:
 *     _VirtualDesktop_CreateInstance_::_1_::dtor$0 @ 0x1801F711E (_VirtualDesktop_CreateInstance_--_1_--dtor$0.c)
 *     _VirtualDesktop_CreateInstance_::_1_::dtor$3 @ 0x1801F7136 (_VirtualDesktop_CreateInstance_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B9290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@M.c)
 */

int __fastcall Microsoft::WRL::ComPtr<VirtualDesktop>::~ComPtr<VirtualDesktop>(VirtualDesktop **a1)
{
  VirtualDesktop *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return (int)v1;
}
