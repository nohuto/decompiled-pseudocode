/*
 * XREFs of ?GetActivationPropertySet@Win32BackedViewHostItem@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B7520
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Win32BackedViewHostItem::GetActivationPropertySet(
        Win32BackedViewHostItem *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  struct Windows::Foundation::Collections::IPropertySet **v2; // rbx

  *a2 = 0LL;
  v2 = (struct Windows::Foundation::Collections::IPropertySet **)((char *)this + 104);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 13);
  *a2 = *v2;
  return 0LL;
}
