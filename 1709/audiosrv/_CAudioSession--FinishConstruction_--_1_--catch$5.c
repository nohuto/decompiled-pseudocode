/*
 * XREFs of _CAudioSession::FinishConstruction_::_1_::catch$5 @ 0x180039179
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18006F1C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall CAudioSession::FinishConstruction_::_1_::catch_5(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 152),
                           (void *)0x965,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           a4);
  return &loc_18001A324;
}
