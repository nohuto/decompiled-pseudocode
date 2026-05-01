/*
 * XREFs of _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::catch$63 @ 0x1801ECF30
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180073C98 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::catch_63(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 520),
    (void *)0x78,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
    a4);
  return &loc_1800F0CCE;
}
