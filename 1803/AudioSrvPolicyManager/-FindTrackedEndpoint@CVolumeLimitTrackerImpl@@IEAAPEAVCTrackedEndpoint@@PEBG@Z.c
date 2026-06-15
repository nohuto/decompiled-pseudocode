/*
 * XREFs of ?FindTrackedEndpoint@CVolumeLimitTrackerImpl@@IEAAPEAVCTrackedEndpoint@@PEBG@Z @ 0x18002C09C
 * Callers:
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002B8C0 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002BB20 (-StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x18000B1DC (WPP_SF_.c)
 */

struct CTrackedEndpoint *__fastcall CVolumeLimitTrackerImpl::FindTrackedEndpoint(
        CVolumeLimitTrackerImpl *this,
        char *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r9
  char *v5; // rax
  char *v6; // r10
  int v7; // r8d
  int v8; // edx

  if ( a2 )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 17);
    while ( v3 )
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      v5 = *(char **)(v4 + 88);
      v6 = (char *)(a2 - v5);
      do
      {
        v7 = *(unsigned __int16 *)&v6[(_QWORD)v5];
        v8 = *(unsigned __int16 *)v5 - v7;
        if ( v8 )
          break;
        v5 += 2;
      }
      while ( v7 );
      if ( !v8 )
        return (struct CTrackedEndpoint *)v4;
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_18fb3d0d2a0b30815cd5f223c20501f0_Traceguids);
  }
  return 0LL;
}
