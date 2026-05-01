/*
 * XREFs of ___abi_translateCurrentException_::_1_::catch$1 @ 0x1800B65CD
 * Callers:
 *     <none>
 * Callees:
 *     RoOriginateError_0 @ 0x18009930A (RoOriginateError_0.c)
 *     ?__abi_FailFast@@YAXXZ_0 @ 0x18009BC6D (-__abi_FailFast@@YAXXZ_0.c)
 */

void *__fastcall __abi_translateCurrentException_::_1_::catch_1(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a2 + 64) )
  {
    __abi_FailFast();
    __debugbreak();
  }
  RoOriginateError_0(2147942414LL, 0LL);
  return &loc_18009BC41;
}
