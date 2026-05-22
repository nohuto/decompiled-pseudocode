/*
 * XREFs of ?RegisterViewHitTestClient@DWMInputRouter@@UEAAJPEAUIRemoteViewHitTestClient@@@Z @ 0x18001BAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RegisterViewHitTestClient(DWMInputRouter *this, struct IRemoteViewHitTestClient *a2)
{
  __int64 v4; // rcx

  if ( *((struct IRemoteViewHitTestClient **)this + 40) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IRemoteViewHitTestClient *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 40);
    *((_QWORD *)this + 40) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
