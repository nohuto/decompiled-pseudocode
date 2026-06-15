/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800025F0
 * Callers:
 *     AudioServerNotifyStreamSuspensionState @ 0x180001FB0 (AudioServerNotifyStreamSuspensionState.c)
 *     AUDIOSERVER_rundown @ 0x1800024E0 (AUDIOSERVER_rundown.c)
 *     AudioServerGetChannelVolume @ 0x1800A1DA0 (AudioServerGetChannelVolume.c)
 *     AudioServerGetEndpointBufferSize @ 0x1800A27F0 (AudioServerGetEndpointBufferSize.c)
 *     AudioServerGetFrequencyForOffload @ 0x1800A2B70 (AudioServerGetFrequencyForOffload.c)
 *     AudioServerGetPositionForOffload @ 0x1800A2C00 (AudioServerGetPositionForOffload.c)
 *     AudioServerGetStreamLatency @ 0x1800A2F60 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x1800A2FF0 (AudioServerGetStreamVpoContext.c)
 *     AudioServerResetEndpoint @ 0x1800A3900 (AudioServerResetEndpoint.c)
 *     AudioServerSetChannelVolume @ 0x1800A3990 (AudioServerSetChannelVolume.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800A3A30 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800A3AB0 (AudioServerSetStreamSampleRate.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
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
