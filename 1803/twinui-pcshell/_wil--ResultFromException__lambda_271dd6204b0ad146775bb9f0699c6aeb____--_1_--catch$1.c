/*
 * XREFs of _wil::ResultFromException__lambda_271dd6204b0ad146775bb9f0699c6aeb____::_1_::catch$1 @ 0x1800A1000
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::ResultFromException__lambda_271dd6204b0ad146775bb9f0699c6aeb____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_1800A0FF6;
}
