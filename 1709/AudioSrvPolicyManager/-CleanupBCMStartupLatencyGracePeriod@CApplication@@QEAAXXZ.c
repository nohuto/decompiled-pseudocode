/*
 * XREFs of ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DD9C
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x18000B950 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DBFC (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800157F0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180016380 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_S @ 0x180006B7C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18000D550 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000DA78 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::CleanupBCMStartupLatencyGracePeriod(const wchar_t **this)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v5; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v6; // [rsp+48h] [rbp-18h] BYREF
  char v7; // [rsp+50h] [rbp-10h]

  v6 = (LPCRITICAL_SECTION)(this + 50);
  v7 = 0;
  ATL::CCritSecLock::Lock(&v6);
  if ( *((_DWORD *)this + 112) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, this[3]);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
      ThreadPool,
      this[55],
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      this[55],
      1LL);
    *((_DWORD *)this + 112) = 0;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)this) )
    {
      CApplication::RemoveAudioPlaybackRestriction((CApplication *)this);
      lpCriticalSection = (LPCRITICAL_SECTION)(this + 4);
      v5 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v2 = this[9];
      while ( v2 )
      {
        v3 = *((_QWORD *)v2 + 2);
        v2 = *(const wchar_t **)v2;
        if ( !*(_DWORD *)(v3 + 464) && *(_DWORD *)(v3 + 512) == 7 )
        {
          *(_QWORD *)(v3 + 512) = 0LL;
          *(_DWORD *)(v3 + 520) = 4;
        }
      }
      if ( v5 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v5 = 0;
      }
    }
  }
  if ( v7 )
    LeaveCriticalSection(v6);
}
