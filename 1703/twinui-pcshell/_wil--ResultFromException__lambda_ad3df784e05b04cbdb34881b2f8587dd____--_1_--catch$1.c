/*
 * XREFs of _wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd____::_1_::catch$1 @ 0x18019D8B7
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180082BB0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd____::_1_::catch_1(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  a2[16] = wil::ResultFromCaughtException(a1, a2, a3);
  return &loc_1800DEAC3;
}
