/*
 * XREFs of _wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd____::_1_::catch$3 @ 0x1801AB9AD
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd____::_1_::catch_3(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_1801AB991;
}
