/*
 * XREFs of ?UnsubscribeFromServices@XamlExplorerHostShellComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180146500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::UnsubscribeFromServices(
        XamlExplorerHostShellComponent *this,
        struct IServiceProvider *a2)
{
  (*(void (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 18) + 64LL))(
    *((_QWORD *)this + 18),
    a2);
  return 0LL;
}
