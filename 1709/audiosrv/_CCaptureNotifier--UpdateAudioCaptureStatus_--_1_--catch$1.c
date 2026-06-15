/*
 * XREFs of _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$1 @ 0x18009D95C
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009D704 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(*(wil::details::in1diag3 **)(a2 + 72), (void *)0x20B, a3, a4);
  return &loc_18009D950;
}
