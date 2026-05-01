/*
 * XREFs of _wil::ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4____::_1_::catch$0 @ 0x1801F6753
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18008CE68 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4____::_1_::catch_0(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  a2[16] = wil::ResultFromCaughtException(a1, a2, a3);
  return &loc_18019EAEA;
}
