/*
 * XREFs of ?OnLeftSubmixConnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005420
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x1400067C0 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixConnected(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  __int64 v3; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v6; // [rsp+28h] [rbp-40h]
  __int128 v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v7 = *(_OWORD *)((char *)this - 56);
  v8 = v7;
  EtwEventActivityIdControl(4LL, &v8);
  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (unsigned int)(*((_DWORD *)this + 10) + 1);
  *((_DWORD *)this + 10) = v3;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids, v3);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v8);
  return 0LL;
}
