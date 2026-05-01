/*
 * XREFs of ?UnsubscribeFromServices@XamlExplorerHostShellComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18011C1F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::UnsubscribeFromServices(
        XamlExplorerHostShellComponent *this,
        struct IServiceProvider *a2)
{
  (*(void (__fastcall **)(_QWORD, struct IServiceProvider *))(**((_QWORD **)this + 14) + 64LL))(
    *((_QWORD *)this + 14),
    a2);
  return 0LL;
}
