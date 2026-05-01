/*
 * XREFs of _VirtualDesktopDataSource::Initialize_::_1_::catch$52 @ 0x1801F6E0F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180027758 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall VirtualDesktopDataSource::Initialize_::_1_::catch_52(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 240) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 216),
                            (void *)0x76,
                            (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                            a4);
  return &loc_1801B4D57;
}
