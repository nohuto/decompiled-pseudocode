/*
 * XREFs of ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800AB3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x1800967C0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x1800A8BC4 (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800AA698 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::NewState(
        CPerEndpointVolumeAudioSession *this,
        enum _AudioSessionState a2)
{
  int v2; // ebx

  v2 = *((_DWORD *)this + 102);
  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  CAudioSession::NewState(this, a2);
  if ( v2 == 2 )
  {
    if ( a2 != AudioSessionStateExpired )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x49u,
          (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
          *((const wchar_t **)this + 91));
      }
      CPerEndpointVolumeAudioSession::GetVolumeStrip((struct IUnknown **)this, 0LL);
      goto LABEL_14;
    }
  }
  else if ( a2 != AudioSessionStateExpired )
  {
    goto LABEL_14;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x4Au,
      (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      *((const wchar_t **)this + 91));
  }
  CPerEndpointVolumeAudioSession::DestroyVolumeStrip(this);
LABEL_14:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 75LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this);
  }
  CUnknown::Release((CPerEndpointVolumeAudioSession *)((char *)this + 32));
}
