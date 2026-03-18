/*
 * XREFs of DxgkEngReleaseDC @ 0x1C0250D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngReleaseDC(__int64 a1, __int64 a2)
{
  if ( a2 )
    return bDeleteDCInternal(a2, 1LL, 0LL);
  else
    return UserReleaseDC(a1);
}
