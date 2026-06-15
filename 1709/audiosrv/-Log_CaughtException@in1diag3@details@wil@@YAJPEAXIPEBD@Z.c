/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009D704
 * Callers:
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$60 @ 0x1800383B1 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$60.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$23 @ 0x18003841C (_CPlaybackNotifier--AcquireReference_--_1_--catch$23.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$72 @ 0x180039E05 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$72.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$29 @ 0x18009D6D9 (_CCaptureNotifier--AcquireReference_--_1_--catch$29.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$1 @ 0x18009D95C (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$1.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x18006EDDC (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException();
}
