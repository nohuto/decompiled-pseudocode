/*
 * XREFs of _wil::ResultFromException__lambda_d40303f400b27b9399fd75f15be23f87____::_1_::catch$1 @ 0x1802BE568
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::ResultFromException__lambda_d40303f400b27b9399fd75f15be23f87____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_1802BE55E;
}
