/*
 * XREFs of ?SetActivationPropertySet@Win32BackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E2E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32BackedViewHostItem::SetActivationPropertySet(
        Win32BackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 v4; // rcx

  if ( *((struct Windows::Foundation::Collections::IPropertySet **)this + 8) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
