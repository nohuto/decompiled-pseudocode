/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp_::_1_::catch$79 @ 0x1801EC896
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027758 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp_::_1_::catch_79(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 184) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0x29D,
                            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                            a4);
  return &loc_1800EA36B;
}
