/*
 * XREFs of ?SetPosition@ApplicationViewOperation@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1800E2380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewOperation::SetPosition(
        ApplicationViewOperation *this,
        struct IApplicationViewPosition *a2)
{
  __int64 v4; // rcx

  if ( *((struct IApplicationViewPosition **)this + 5) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewPosition *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
