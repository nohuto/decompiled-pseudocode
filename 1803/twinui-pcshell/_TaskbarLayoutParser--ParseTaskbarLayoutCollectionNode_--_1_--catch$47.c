/*
 * XREFs of _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::catch$47 @ 0x18014B6C9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010A828 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::catch_47(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 520) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 488),
                            (void *)0x6A,
                            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                            a4);
  return &loc_18014B448;
}
