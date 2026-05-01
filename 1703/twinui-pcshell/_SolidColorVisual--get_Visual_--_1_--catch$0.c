/*
 * XREFs of _SolidColorVisual::get_Visual_::_1_::catch$0 @ 0x1801A4DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180025434 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall SolidColorVisual::get_Visual_::_1_::catch_0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x36,
                           (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\solidcolorvisual.cpp",
                           a4);
  return &loc_18016A9D5;
}
