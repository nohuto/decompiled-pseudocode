/*
 * XREFs of ?get_Desktop@VirtualDesktopCollectionChangedEventArgs@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B44C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopCollectionChangedEventArgs::get_Desktop(
        VirtualDesktopCollectionChangedEventArgs *this,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)*((_QWORD *)this + 10);
  return 0LL;
}
