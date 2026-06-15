/*
 * XREFs of ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x180011F84
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001EF6C (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000B840 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180012108 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::PostDelayedInteractivityNotification(const wchar_t **this, const wchar_t *a2)
{
  signed int v4; // ebx
  __int64 v5; // rdx
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+64h] [rbp+Ch]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 57);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CApplication::CleanupDelayedInteractivityNotification((CApplication *)this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, this[3]);
  }
  v5 = (__int64)this[62];
  if ( v5
    || (v5 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, const wchar_t **))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::DelayedInteractivityNotificationTimerExpiredCallback,
               this),
        (this[62] = (const wchar_t *)v5) != 0LL) )
  {
    this[63] = a2;
    v10 = -300000000;
    v11 = -1;
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      v5,
      &v10,
      0LL,
      100);
  }
  else
  {
    LastError = GetLastError();
    v4 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v4 = LastError;
  }
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, v4);
    }
    AudPolicyLogError("CApplication::PostDelayedInteractivityNotification", 1529, v4);
  }
  if ( v9 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
  return (unsigned int)v4;
}
