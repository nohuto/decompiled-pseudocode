/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180003F80
 * Callers:
 *     AudioServerGetAudioSession @ 0x180003860 (AudioServerGetAudioSession.c)
 * Callees:
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180004B1C (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x18006346C (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  unsigned int v2; // ebx
  CServerAudioSessionControl **v6; // rdi
  __int64 v7; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v2 = 0;
  if ( *((_DWORD *)this + 46) )
  {
    v6 = (CServerAudioSessionControl **)((char *)this + 160);
    if ( !*((_QWORD *)this + 20) )
    {
      v9 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      if ( !*v6 )
      {
        LOBYTE(v7) = 1;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, CServerAudioSessionControl **))(**((_QWORD **)this + 19) + 104LL))(
               *((_QWORD *)this + 19),
               *((unsigned int *)this + 16),
               v7,
               *((_QWORD *)this + 21),
               v6);
      }
      if ( v9 )
        LeaveCriticalSection(lpCriticalSection);
      if ( v2 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, v2);
        }
        goto LABEL_24;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, *v6);
      }
    }
    if ( HasTooManyReferences((struct IUnknown *)(((unsigned __int64)*v6 + 8) & -(__int64)(*v6 != 0LL))) )
    {
      v2 = -2147024882;
      goto LABEL_25;
    }
    *a2 = *v6;
    CServerAudioSessionControl::AddClientReference(*v6);
LABEL_24:
    if ( (v2 & 0x80000000) == 0 )
      return v2;
LABEL_25:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 0x52Au, v2);
    return v2;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
  }
  return 2290679809LL;
}
