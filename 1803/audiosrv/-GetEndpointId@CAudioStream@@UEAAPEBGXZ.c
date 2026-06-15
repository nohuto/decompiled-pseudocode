/*
 * XREFs of ?GetEndpointId@CAudioStream@@UEAAPEBGXZ @ 0x18002DF30
 * Callers:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002FE90 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CAudioStream::GetEndpointId(CAudioStream *this)
{
  _QWORD *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (_QWORD *)*((_QWORD *)this + 7);
  v2 = *(__int64 (**)(void))(*v1 + 72LL);
  if ( (char *)v2 == (char *)CAudioSession::GetEndpointId )
    return (const unsigned __int16 *)v1[82];
  else
    return (const unsigned __int16 *)v2();
}
