/*
 * XREFs of ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180017090
 * Callers:
 *     AUDIOSESSION_rundown @ 0x1800135B0 (AUDIOSESSION_rundown.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180017030 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180017350 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x1800184F0 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180018CC0 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_qqS @ 0x180079014 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::Dispose(CServerAudioSessionControl *this)
{
  CAudioSession *v2; // rbx
  __int64 v3; // rdx
  CAudioSession *v4; // rcx
  int (*v5)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  __int64 (__fastcall *v6)(CAudioSession *__hidden, bool); // rax
  int v7; // r8d
  unsigned int (__fastcall *v8)(CAudioSession *__hidden); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  v2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = (CAudioSession *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    v5 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v4 + 184LL);
    if ( v5 == CAudioSession::DeleteSessionNotification )
      CAudioSession::DeleteSessionNotification(v4, this);
    else
      ((void (__fastcall *)(CAudioSession *, CServerAudioSessionControl *))v5)(v4, this);
    v2 = (CAudioSession *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v2 )
  {
    LOBYTE(v3) = *((_BYTE *)this + 84);
    v6 = *(__int64 (__fastcall **)(CAudioSession *__hidden, bool))(*(_QWORD *)v2 + 280LL);
    if ( v6 == CAudioSession::RemoveClientReference )
      CAudioSession::RemoveClientReference(v2, v3);
    else
      v6(v2, v3);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 15, v7, (_DWORD)this, (char)v2, 0LL);
    }
    v8 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v2 + 16LL);
    if ( v8 == CAudioSession::Release )
      CAudioSession::Release(v2);
    else
      v8(v2);
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids);
  }
  return 0LL;
}
