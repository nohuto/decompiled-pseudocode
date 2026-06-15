/*
 * XREFs of ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x18001B010
 * Callers:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x18001A83C (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CAudioSession::GetEndpointId(CAudioSession *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 90);
}
