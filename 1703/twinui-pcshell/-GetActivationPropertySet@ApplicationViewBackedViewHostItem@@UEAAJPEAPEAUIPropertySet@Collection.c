/*
 * XREFs of ?GetActivationPropertySet@ApplicationViewBackedViewHostItem@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E6A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::GetActivationPropertySet(
        ApplicationViewBackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *a2 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 9);
  return 0LL;
}
