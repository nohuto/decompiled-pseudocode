/*
 * XREFs of ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z @ 0x18002BC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWRLObjectWithSite::SetSite(CWRLObjectWithSite *this, struct IUnknown *a2)
{
  __int64 v4; // rcx

  if ( *((struct IUnknown **)this + 1) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
