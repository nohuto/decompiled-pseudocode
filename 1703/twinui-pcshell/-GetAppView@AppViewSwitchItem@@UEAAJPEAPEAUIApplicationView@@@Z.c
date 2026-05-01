/*
 * XREFs of ?GetAppView@AppViewSwitchItem@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180163FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewSwitchItem::GetAppView(AppViewSwitchItem *this, struct IApplicationView **a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *a2 = (struct IApplicationView *)*((_QWORD *)this + 6);
  return 0LL;
}
