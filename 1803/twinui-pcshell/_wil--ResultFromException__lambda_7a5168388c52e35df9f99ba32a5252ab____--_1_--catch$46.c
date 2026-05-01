/*
 * XREFs of _wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____::_1_::catch$46 @ 0x1800B2450
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab____::_1_::catch_46(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 96) = wil::ResultFromCaughtException(a1);
  return &loc_180026127;
}
