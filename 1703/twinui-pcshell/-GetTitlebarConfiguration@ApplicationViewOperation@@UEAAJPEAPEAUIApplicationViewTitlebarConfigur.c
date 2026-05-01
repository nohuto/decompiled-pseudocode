/*
 * XREFs of ?GetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800E1FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewOperation::GetTitlebarConfiguration(
        ApplicationViewOperation *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  __int64 v5; // rcx

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 18) )
    return 2147943568LL;
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *a2 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)this + 18);
  return 0LL;
}
