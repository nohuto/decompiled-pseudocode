/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$7 @ 0x1801EF7F8
 * Callers:
 *     <none>
 * Callees:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x180003934 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_7(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = wil::details::RecognizeCaughtExceptionFromCallback(
         *(wil::details **)(a2 + 112),
         *(unsigned __int16 **)(a2 + 120));
  *(_DWORD *)(a2 + 136) = v3;
  if ( v3 >= 0 )
    return &loc_1801476FF;
  else
    return &loc_1801476EF;
}
