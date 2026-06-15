/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18000422C
 * Callers:
 *     AudioServerGetAudioSession @ 0x180003860 (AudioServerGetAudioSession.c)
 *     AUDIOSERVER_rundown @ 0x1800C3020 (AUDIOSERVER_rundown.c)
 *     AudioServerGetAmbHeadTracking @ 0x1800C31B0 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetChannelVolume @ 0x1800C3450 (AudioServerGetChannelVolume.c)
 *     AudioServerGetEndpointBufferSize @ 0x1800C4100 (AudioServerGetEndpointBufferSize.c)
 *     AudioServerGetFrequencyForOffload @ 0x1800C4540 (AudioServerGetFrequencyForOffload.c)
 *     AudioServerGetPositionForOffload @ 0x1800C4600 (AudioServerGetPositionForOffload.c)
 *     AudioServerGetStreamLatency @ 0x1800C49F0 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x1800C4AB0 (AudioServerGetStreamVpoContext.c)
 *     AudioServerNotifyStreamSuspensionState @ 0x1800C55F0 (AudioServerNotifyStreamSuspensionState.c)
 *     AudioServerPreStartStream @ 0x1800C56C0 (AudioServerPreStartStream.c)
 *     AudioServerResetEndpoint @ 0x1800C5810 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x1800C58D0 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x1800C59A0 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1800C5A30 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1800C5AC0 (AudioServerSetAmbRotation.c)
 *     AudioServerSetChannelVolume @ 0x1800C5B90 (AudioServerSetChannelVolume.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800C5C70 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800C5D20 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x1800C5E00 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

SetActivityIdFromVadServer *__fastcall SetActivityIdFromVadServer::SetActivityIdFromVadServer(
        SetActivityIdFromVadServer *this,
        char *a2)
{
  GUID v3; // xmm0

  if ( a2 )
    v3 = *(GUID *)(a2 + 280);
  else
    v3 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)this = v3;
  *((GUID *)this + 1) = v3;
  EtwEventActivityIdControl(4LL, (char *)this + 16);
  return this;
}
