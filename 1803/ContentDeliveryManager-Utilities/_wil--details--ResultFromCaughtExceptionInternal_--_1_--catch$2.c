/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x1800C1C55
 * Callers:
 *     <none>
 * Callees:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x180002674 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

void *__fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_2(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = wil::details::RecognizeCaughtExceptionFromCallback(*(wil::details **)(a2 + 32), *(unsigned __int16 **)(a2 + 40));
  *(_DWORD *)(a2 + 32) = v3;
  if ( v3 >= 0 )
    return &loc_18000283A;
  else
    return &loc_180002834;
}
