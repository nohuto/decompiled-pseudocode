/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180027510
 * Callers:
 *     AudioServerGetAudioSession @ 0x18002C5D0 (AudioServerGetAudioSession.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180035588 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  unsigned int v2; // edi
  volatile signed __int32 **v6; // rbx
  __int64 v7; // r8
  volatile signed __int32 *v8; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  v2 = 0;
  if ( *((_DWORD *)this + 46) )
  {
    v6 = (volatile signed __int32 **)((char *)this + 160);
    if ( !*((_QWORD *)this + 20) )
    {
      v10 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( !*v6 )
      {
        LOBYTE(v7) = 1;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, volatile signed __int32 **))(**((_QWORD **)this + 19) + 104LL))(
               *((_QWORD *)this + 19),
               *((unsigned int *)this + 16),
               v7,
               *((_QWORD *)this + 21),
               v6);
      }
      if ( v10 )
        LeaveCriticalSection(lpCriticalSection);
      if ( v2 )
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, v2);
        }
        goto LABEL_24;
      }
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, *v6);
      }
    }
    if ( HasTooManyReferences((struct IUnknown *)((unsigned __int64)(*v6 + 2) & -(__int64)(*v6 != 0LL))) )
    {
      v2 = -2147024882;
      goto LABEL_25;
    }
    *a2 = (struct CServerAudioSessionControl *)*v6;
    v8 = *v6;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    _InterlockedIncrement(v8 + 6);
LABEL_24:
    if ( (v2 & 0x80000000) == 0 )
      return v2;
LABEL_25:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 0x4D0u, v2);
    return v2;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
  }
  return 2290679809LL;
}
