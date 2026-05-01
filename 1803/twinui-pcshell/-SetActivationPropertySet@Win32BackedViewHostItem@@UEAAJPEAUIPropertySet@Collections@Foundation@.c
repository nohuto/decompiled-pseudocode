/*
 * XREFs of ?SetActivationPropertySet@Win32BackedViewHostItem@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B90B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008F428 (--4-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPrope.c)
 */

__int64 __fastcall Win32BackedViewHostItem::SetActivationPropertySet(
        Win32BackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::operator=((__int64 *)this + 13, (__int64)a2);
  return 0LL;
}
