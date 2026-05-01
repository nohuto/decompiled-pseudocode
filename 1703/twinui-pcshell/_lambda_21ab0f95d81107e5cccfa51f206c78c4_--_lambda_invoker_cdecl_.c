/*
 * XREFs of _lambda_21ab0f95d81107e5cccfa51f206c78c4_::_lambda_invoker_cdecl_ @ 0x18004A720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_21ab0f95d81107e5cccfa51f206c78c4_::_lambda_invoker_cdecl_(HWND a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  int pvAttribute; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !(unsigned int)GetWindowBand(a1, &v6) )
    return 1;
  if ( ((v6 - 1) & 0xFFFFFFFB) != 0 && (unsigned int)(v6 - 8) > 4 )
  {
    if ( v6 == 13
      && GetPropW(a1, L"ConsiderByRealmActivationHistory") == HANDLE_FLAG_INHERIT
      && IsWindowVisible(a1)
      && DwmGetWindowAttribute(a1, 0xEu, &pvAttribute, 4u) >= 0
      && !pvAttribute )
    {
      *a2 = a1;
      return v4;
    }
    return 1;
  }
  return v4;
}
