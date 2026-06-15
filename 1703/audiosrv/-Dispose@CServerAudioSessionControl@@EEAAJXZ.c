/*
 * XREFs of ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180020EB0
 * Callers:
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180002200 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18001D0E0 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180020E50 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     AudioSessionDestroy @ 0x180032940 (AudioSessionDestroy.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180013E60 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180014620 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_qqS @ 0x180092934 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::Dispose(CServerAudioSessionControl *this)
{
  CAudioSession *v2; // rbx
  __int64 v3; // rdx
  CAudioSession *v4; // rcx
  __int64 (__fastcall *v5)(CAudioSession *, struct ISessionInternalEvents *); // rax
  __int64 (__fastcall *v6)(CAudioSession *, char); // rax
  int v7; // r8d
  __int64 (__fastcall *v8)(CAudioSession *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  v2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (CAudioSession *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v4 + 192LL);
    if ( v5 == CAudioSession::DeleteSessionNotification )
      CAudioSession::DeleteSessionNotification(v4, this);
    else
      v5(v4, this);
    v2 = (CAudioSession *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v2 )
  {
    LOBYTE(v3) = *((_BYTE *)this + 84);
    v6 = *(__int64 (__fastcall **)(CAudioSession *, char))(*(_QWORD *)v2 + 288LL);
    if ( v6 == CAudioSession::RemoveClientReference )
      CAudioSession::RemoveClientReference(v2, v3);
    else
      v6(v2, v3);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 15, v7, (_DWORD)this, (char)v2, 0LL);
    }
    v8 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v2 + 16LL);
    if ( v8 == CAudioSession::Release )
      CAudioSession::Release(v2);
    else
      v8(v2);
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids);
  }
  return 0LL;
}
