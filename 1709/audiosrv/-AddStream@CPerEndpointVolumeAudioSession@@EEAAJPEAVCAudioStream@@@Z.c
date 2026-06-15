/*
 * XREFs of ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180070260
 * Callers:
 *     <none>
 * Callees:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800198A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x18001A83C (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x18001ACAC (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001B064 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z @ 0x18005A7D8 (-GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddStream(
        CPerEndpointVolumeAudioSession *this,
        struct CAudioStream *a2)
{
  int CurrentPolicyGain; // ebx
  float PolicyVolumeForStream; // xmm0_4
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8[4]; // [rsp+38h] [rbp-20h] BYREF
  bool v9; // [rsp+60h] [rbp+8h] BYREF
  bool v10; // [rsp+68h] [rbp+10h] BYREF
  float v11; // [rsp+70h] [rbp+18h] BYREF
  float v12; // [rsp+78h] [rbp+20h] BYREF

  *((_QWORD *)a2 + 8) = this;
  v11 = FLOAT_1_0;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(this, 0LL, &v9, (struct SessionPolicyGains *)&v11, &v7);
  if ( CurrentPolicyGain )
    goto LABEL_9;
  CurrentPolicyGain = CAudioSession::GetCurrentSessionGain(this, &v10, &v12, v8);
  if ( CurrentPolicyGain )
    goto LABEL_9;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a2);
  }
  PolicyVolumeForStream = CAudioSession::GetPolicyVolumeForStream(this, (struct SessionPolicyGains *)&v11, a2);
  CurrentPolicyGain = CAudioStream::SetPolicyVolume(a2, v9, PolicyVolumeForStream, v7, 1);
  if ( CurrentPolicyGain < 0 )
LABEL_9:
    *((_QWORD *)a2 + 8) = 0LL;
  else
    CurrentPolicyGain = CAudioSession::AddStream(this, a2);
  if ( CurrentPolicyGain < 0 )
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::AddStream", 3389, CurrentPolicyGain);
  free(0LL);
  return (unsigned int)CurrentPolicyGain;
}
