/*
 * XREFs of _wil::ResultFromException__lambda_a928f0ddc407f1fa0c53cd408c359a95____::_1_::catch$1 @ 0x1802B81BC
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::ResultFromException__lambda_a928f0ddc407f1fa0c53cd408c359a95____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_1802B81B2;
}
