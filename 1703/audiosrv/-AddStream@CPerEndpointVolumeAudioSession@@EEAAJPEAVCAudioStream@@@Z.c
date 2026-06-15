/*
 * XREFs of ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18008A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x1800023CC (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015200 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z @ 0x180015F34 (-GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180015FB0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180019E70 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddStream(
        CPerEndpointVolumeAudioSession *this,
        struct CAudioStream *a2)
{
  int CurrentPolicyGain; // ebx
  CAudioSession *v5; // rcx
  float PolicyVolumeForStream; // xmm0_4
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+48h] [rbp-10h]
  int v11; // [rsp+4Ch] [rbp-Ch]
  bool v12; // [rsp+80h] [rbp+28h] BYREF
  bool v13; // [rsp+88h] [rbp+30h] BYREF
  float v14; // [rsp+90h] [rbp+38h] BYREF
  __int64 v15; // [rsp+98h] [rbp+40h] BYREF

  *((_QWORD *)a2 + 8) = this;
  v10 = 1065353216;
  v11 = 1065353216;
  v9 = _xmm;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(this, 0LL, &v12, (struct SessionPolicyGains *)&v9, &v15);
  if ( CurrentPolicyGain )
    goto LABEL_9;
  CurrentPolicyGain = CAudioSession::GetCurrentSessionGain(this, &v13, &v14, &v8);
  if ( CurrentPolicyGain )
    goto LABEL_9;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      CurrentPolicyGain + 70,
      (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      a2);
  }
  PolicyVolumeForStream = CAudioSession::GetPolicyVolumeForStream(v5, (struct SessionPolicyGains *)&v9, a2);
  CurrentPolicyGain = CAudioStream::SetPolicyVolume(a2, v12, PolicyVolumeForStream, v15, 1);
  if ( CurrentPolicyGain < 0 )
LABEL_9:
    *((_QWORD *)a2 + 8) = 0LL;
  else
    CurrentPolicyGain = CAudioSession::AddStream(this, a2);
  if ( CurrentPolicyGain < 0 )
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::AddStream", 3439, CurrentPolicyGain);
  free(0LL);
  return (unsigned int)CurrentPolicyGain;
}
