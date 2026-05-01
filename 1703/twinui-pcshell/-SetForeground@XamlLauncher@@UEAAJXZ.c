/*
 * XREFs of ?SetForeground@XamlLauncher@@UEAAJXZ @ 0x18014AB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::SetForeground(XamlLauncher *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 31);
  if ( !v1 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 144LL))(v1);
  return 0LL;
}
