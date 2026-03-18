/*
 * XREFs of DxgkChangeD3RequestsState @ 0x1C0167290
 * Callers:
 *     <none>
 * Callees:
 *     DpiDisableD3Requests @ 0x1C0001CAC (DpiDisableD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DxgkChangeD3RequestsState(__int64 a1, char a2)
{
  __int64 v3; // rcx

  if ( !a1 )
    return 3221225480LL;
  v3 = *(_QWORD *)(a1 + 192);
  if ( a2 )
    DpiEnableD3Requests(v3);
  else
    DpiDisableD3Requests(v3);
  return 0LL;
}
