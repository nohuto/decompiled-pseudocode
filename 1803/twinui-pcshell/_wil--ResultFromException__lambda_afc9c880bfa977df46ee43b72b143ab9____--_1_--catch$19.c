/*
 * XREFs of _wil::ResultFromException__lambda_afc9c880bfa977df46ee43b72b143ab9____::_1_::catch$19 @ 0x18023B4A3
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall wil::ResultFromException__lambda_afc9c880bfa977df46ee43b72b143ab9____::_1_::catch_19(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return &loc_18023B488;
}
