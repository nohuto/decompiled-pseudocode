/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404
 * Callers:
 *     AudioServerCreateStream @ 0x180008C70 (AudioServerCreateStream.c)
 *     AUDIOSERVER_rundown @ 0x18002B350 (AUDIOSERVER_rundown.c)
 *     AudioServerStopStream @ 0x18002C4A0 (AudioServerStopStream.c)
 *     AudioServerStartStream @ 0x18002C540 (AudioServerStartStream.c)
 *     AudioServerGetAudioSession @ 0x18002C5D0 (AudioServerGetAudioSession.c)
 *     AudioServerNotifyStreamSuspensionState @ 0x18002CB50 (AudioServerNotifyStreamSuspensionState.c)
 *     AudioServerDestroyStream @ 0x18008DEB0 (AudioServerDestroyStream.c)
 *     AudioServerDisconnect @ 0x18008DFF0 (AudioServerDisconnect.c)
 *     AudioServerGetChannelVolume @ 0x18008E2E0 (AudioServerGetChannelVolume.c)
 *     AudioServerGetEndpointBufferSize @ 0x18008EEE0 (AudioServerGetEndpointBufferSize.c)
 *     AudioServerGetFrequencyForOffload @ 0x18008F250 (AudioServerGetFrequencyForOffload.c)
 *     AudioServerGetPositionForOffload @ 0x18008F2E0 (AudioServerGetPositionForOffload.c)
 *     AudioServerGetStreamLatency @ 0x18008F700 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x18008F790 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPreStartStream @ 0x180090180 (AudioServerPreStartStream.c)
 *     AudioServerResetEndpoint @ 0x180090250 (AudioServerResetEndpoint.c)
 *     AudioServerSetChannelVolume @ 0x1800902E0 (AudioServerSetChannelVolume.c)
 *     AudioServerSetLastBufferInProgress @ 0x180090380 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x180090400 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x1800904A0 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

SetActivityIdFromVadServer *__fastcall SetActivityIdFromVadServer::SetActivityIdFromVadServer(
        SetActivityIdFromVadServer *this,
        _OWORD *a2)
{
  GUID v3; // xmm0

  if ( a2 )
    v3 = (GUID)a2[17];
  else
    v3 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)this = v3;
  *((GUID *)this + 1) = v3;
  EtwEventActivityIdControl(4LL, (char *)this + 16);
  return this;
}
