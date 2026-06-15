/*
 * XREFs of ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x1800058E0
 * Callers:
 *     ?NotifyAudioDGTerminated@CVolumeStrip@@UEAAXXZ @ 0x180005840 (-NotifyAudioDGTerminated@CVolumeStrip@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CMeterSoftware::NotifyAudioDGTerminated(CMeterSoftware *this)
{
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_00df95541f0e32c0c29587cc00cae0f9_Traceguids, this);
  }
  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 40);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
