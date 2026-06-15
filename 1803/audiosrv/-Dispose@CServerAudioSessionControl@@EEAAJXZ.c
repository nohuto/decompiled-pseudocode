/*
 * XREFs of ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x1800AE580
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_qqS @ 0x1800B0D4C (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::Dispose(CServerAudioSessionControl *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, (__int64)&WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, 0LL);
  }
  v2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, CServerAudioSessionControl *))(*(_QWORD *)v4 + 192LL))(v4, this);
    v2 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v2 )
  {
    LOBYTE(v3) = *((_BYTE *)this + 84);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 288LL))(v2, v3);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 15, v5, (_DWORD)this, v2, 0LL);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids);
  }
  return 0LL;
}
