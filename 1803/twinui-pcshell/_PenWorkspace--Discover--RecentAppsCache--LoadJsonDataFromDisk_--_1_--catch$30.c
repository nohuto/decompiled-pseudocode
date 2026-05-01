/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk_::_1_::catch$30 @ 0x180196DEF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010A828 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk_::_1_::catch_30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 440),
                            (void *)0x260,
                            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                            a4);
  return &loc_180196CC6;
}
