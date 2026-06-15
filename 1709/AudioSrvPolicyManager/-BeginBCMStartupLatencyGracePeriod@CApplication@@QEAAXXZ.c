/*
 * XREFs of ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DBFC
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800157F0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x180006B7C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x18000C924 (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000D4F0 (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000DA78 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DD9C (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::BeginBCMStartupLatencyGracePeriod(const wchar_t **this)
{
  signed int v2; // edi
  __int64 v3; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+64h] [rbp+Ch]

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 50);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CApplication::CleanupBCMStartupLatencyGracePeriod((CApplication *)this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, this[3]);
  }
  if ( this[55]
    || (v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::BCMStartupGracePeriodExpiredCallback,
               this),
        (this[55] = (const wchar_t *)v3) != 0LL) )
  {
    v7 = -100000000;
    v8 = -1;
    *((_DWORD *)this + 112) = 1;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)this) )
    {
      CApplication::AddCategoryOverrideToProcesses((__int64)this, 7, 1, 0);
      CApplication::RestrictAudioPlaybackToPrimaryCategories((CApplication *)this);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, const wchar_t *, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      this[55],
      &v7,
      0LL,
      100);
  }
  else
  {
    LastError = GetLastError();
    v2 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v2 = LastError;
  }
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, v2);
    }
    AudPolicyLogError("CApplication::BeginBCMStartupLatencyGracePeriod", 2232, v2);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
