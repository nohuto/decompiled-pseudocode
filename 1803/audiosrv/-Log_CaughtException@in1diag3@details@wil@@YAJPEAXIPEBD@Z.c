/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800AB1E8
 * Callers:
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$173 @ 0x180068CF0 (_CAudioResourceManager--DestroyStream_--_1_--catch$173.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$149 @ 0x180068E64 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$149.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$56 @ 0x180068EB0 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$56.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$135 @ 0x180068F78 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$135.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$29 @ 0x180068FEE (_CPlaybackNotifier--AcquireReference_--_1_--catch$29.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$116 @ 0x180069762 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$116.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$18 @ 0x1800CA417 (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$18.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$32 @ 0x1800CA724 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$32.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$29 @ 0x1800D4F4A (_CCaptureNotifier--AcquireReference_--_1_--catch$29.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$1 @ 0x1800D4FF0 (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$1.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800A6994 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException();
}
