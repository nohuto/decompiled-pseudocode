/*
 * XREFs of ?NotifyDismissalPolicy@XamlLauncherState@@UEAAXPEAUIStartDismissalPolicy@@@Z @ 0x180035710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::NotifyDismissalPolicy(XamlLauncherState *this, struct IStartDismissalPolicy *a2)
{
  __int64 v4; // rcx

  if ( *((struct IStartDismissalPolicy **)this + 10) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IStartDismissalPolicy *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
