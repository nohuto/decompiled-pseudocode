/*
 * XREFs of ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x180072C20
 * Callers:
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x180079B60 (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::IsExclusiveModeSession(CAudioSession *this)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xA5u, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, 0LL);
  }
  for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 40LL) )
      v2 = 1;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
