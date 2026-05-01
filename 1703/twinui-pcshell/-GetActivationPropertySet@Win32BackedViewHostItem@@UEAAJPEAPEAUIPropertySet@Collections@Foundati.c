/*
 * XREFs of ?GetActivationPropertySet@Win32BackedViewHostItem@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E2EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32BackedViewHostItem::GetActivationPropertySet(
        Win32BackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *a2 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 8);
  return 0LL;
}
