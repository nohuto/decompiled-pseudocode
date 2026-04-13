/*
 * XREFs of _DataStoreCache::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri_::_1_::catch$1 @ 0x1800C905B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003224 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall DataStoreCache::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 120),
                           (void *)0xBD,
                           (__int64)"internal\\shellcommonshell\\private\\inc\\shellmrthelpercommonimpl.h",
                           a4);
  return &loc_180095D43;
}
