/*
 * XREFs of ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800739B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180018DF0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x18007094C (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800726A8 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::NewState(CPerEndpointVolumeAudioSession *this, __int32 a2)
{
  int v2; // ebx

  v2 = *((_DWORD *)this + 102);
  _InterlockedIncrement((volatile signed __int32 *)this + 10);
  CAudioSession::NewState(this, a2);
  if ( v2 == 2 )
  {
    if ( a2 != 2 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x55u,
          (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          *((const wchar_t **)this + 99));
      }
      CPerEndpointVolumeAudioSession::GetVolumeStrip((struct IUnknown **)this, 0LL);
      goto LABEL_14;
    }
  }
  else if ( a2 != 2 )
  {
    goto LABEL_14;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x56u,
      (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      *((const wchar_t **)this + 99));
  }
  CPerEndpointVolumeAudioSession::DestroyVolumeStrip(this);
LABEL_14:
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 87LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this);
  }
  CUnknown::Release((CPerEndpointVolumeAudioSession *)((char *)this + 32));
}
