/*
 * XREFs of ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x1800166B0
 * Callers:
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180015FB0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CAudioSession::GetEndpointId(CAudioSession *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 99);
}
