/*
 * XREFs of _lambda_44ea6c42bf870d75ce9c33fd848cc99e_::_lambda_invoker_cdecl_ @ 0x180085780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18001950C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 */

_BOOL8 __fastcall lambda_44ea6c42bf870d75ce9c33fd848cc99e_::_lambda_invoker_cdecl_(__int64 a1, _DWORD *a2)
{
  struct IViewHierarchy *ViewHierarchy; // rax
  int ViewIdFromWindowId; // eax

  ViewHierarchy = ISMStatics::GetViewHierarchy();
  ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, a1);
  *a2 = ViewIdFromWindowId;
  return ViewIdFromWindowId == 0;
}
