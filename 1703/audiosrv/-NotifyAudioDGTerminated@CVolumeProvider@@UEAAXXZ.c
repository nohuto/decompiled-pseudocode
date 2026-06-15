/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x18001DFD0
 * Callers:
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180025884 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 * Callees:
 *     ?NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ @ 0x180018074 (-NotifyAudioDGTerminated@CVolumeStrip@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

void __fastcall CVolumeProvider::NotifyAudioDGTerminated(CVolumeProvider *this)
{
  _QWORD *v2; // rbx
  CVolumeStrip *v3; // rcx
  CVolumeStrip *v4; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (_QWORD *)*((_QWORD *)this + 7);
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids);
    v3 = WPP_GLOBAL_Control;
  }
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = (CVolumeStrip *)v2[2];
      v2 = (_QWORD *)*v2;
      if ( v3 != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v3 + 7) & 0x10000) != 0
        && *((_BYTE *)v3 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v3 + 2), 17LL, &WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids, *((_QWORD *)v4 + 28));
      }
      CVolumeStrip::NotifyAudioDGTerminated(v4);
      if ( !v2 )
        break;
      v3 = WPP_GLOBAL_Control;
    }
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
