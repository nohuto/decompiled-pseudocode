/*
 * XREFs of ?GetAudioSessionManager_NoAdd@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18007BBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManager_NoAdd(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  int v3; // ebx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rsi
  struct CAudioSessionManager *v9; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]

  v3 = 0;
  if ( !a2 || !a3 )
  {
    v3 = -2147024809;
LABEL_27:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManager_NoAdd", 483, v3);
    return (unsigned int)v3;
  }
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_d4407cbbbdf0327ea3ff22e6cef445ee_Traceguids, a2);
  }
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)this + 18) )
        ATL::AtlThrowImpl(-2147024809);
      if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)(*((_QWORD *)this + 17) + 8 * v8), a2) )
        break;
      v8 = ++v7;
      if ( (unsigned __int64)v7 >= *((_QWORD *)this + 14) )
        goto LABEL_12;
    }
    if ( v8 >= *((_QWORD *)this + 14) )
      ATL::AtlThrowImpl(-2147024809);
    v9 = *(struct CAudioSessionManager **)(*((_QWORD *)this + 13) + 8 * v8);
    *a3 = v9;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_d4407cbbbdf0327ea3ff22e6cef445ee_Traceguids, v9);
    }
  }
LABEL_12:
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  else
    v3 = -2147023728;
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 < 0 )
    goto LABEL_27;
  return (unsigned int)v3;
}
