/*
 * XREFs of _lambda_39145382b85a56bf0c3f442b4c54cd44_::_lambda_invoker_cdecl_ @ 0x1800A98A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x180035448 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 */

_BOOL8 __fastcall lambda_39145382b85a56bf0c3f442b4c54cd44_::_lambda_invoker_cdecl_(__int64 a1, _DWORD *a2)
{
  struct IViewHierarchy *ViewHierarchy; // rax
  int ViewIdFromWindowId; // eax

  ViewHierarchy = ISMStatics::GetViewHierarchy();
  ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, a1);
  *a2 = ViewIdFromWindowId;
  return ViewIdFromWindowId == 0;
}
