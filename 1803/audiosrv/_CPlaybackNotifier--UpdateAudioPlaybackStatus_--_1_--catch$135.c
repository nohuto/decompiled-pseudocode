/*
 * XREFs of _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$135 @ 0x180068F78
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800AB1E8 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch_135(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 4344),
    (void *)0x15E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
    a4);
  return &loc_18001987F;
}
