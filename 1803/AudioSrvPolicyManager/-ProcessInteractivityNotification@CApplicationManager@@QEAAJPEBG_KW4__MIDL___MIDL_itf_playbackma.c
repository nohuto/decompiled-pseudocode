/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001EF6C
 * Callers:
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18001F1D0 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     PbmReportAppInteractivityChange @ 0x180021820 (PbmReportAppInteractivityChange.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x1800117E0 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180011848 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x180011F84 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180012108 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     WPP_SF_Sxs @ 0x18001A0E8 (WPP_SF_Sxs.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C6B0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z @ 0x180028B04 (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  __int64 v10; // r8
  const char *v11; // rax
  int Application; // ebx
  CApplication *v13; // rsi
  int v14; // edi
  struct IPBMWorkItem *v15; // rdi
  int v16; // eax
  struct IPBMWorkItem *v18; // [rsp+40h] [rbp-40h] BYREF
  CApplication *v19[2]; // [rsp+48h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-28h] BYREF
  char v21; // [rsp+60h] [rbp-20h]
  LPCRITICAL_SECTION v22; // [rsp+68h] [rbp-18h] BYREF
  char v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+B0h] [rbp+30h] BYREF

  v19[1] = (CApplication *)-2LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  v22 = (LPCRITICAL_SECTION)(a1 + 32);
  v23 = 0;
  ATL::CCritSecLock::Lock(&v22);
  v24 = 0;
  v18 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = "PBMIC_UNKNOWN";
    if ( a4 == 2 )
      v11 = "PBMIC_SOFT_NONINTERACTIVE";
    if ( a4 == 1 )
      v11 = "PBMIC_HARD_NONINTERACTIVE";
    if ( !a4 )
      v11 = "PBMIC_INTERACTIVE";
    WPP_SF_Sxs(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x39u, v10, a2, a3, v11);
  }
  Application = CApplicationManager::GetApplication((CApplicationManager *)a1, a2, a3, a5, v19, 1, &v24);
  if ( Application < 0 )
    goto LABEL_33;
  lpCriticalSection = v9;
  v21 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v13 = v19[0];
  if ( a4 == 2
    && *((_DWORD *)v19[0] + 42)
    && !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(v19[0])
    && (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v13) )
  {
    if ( v21 )
      LeaveCriticalSection(lpCriticalSection);
    v14 = 1;
  }
  else
  {
    if ( v21 )
      LeaveCriticalSection(lpCriticalSection);
    v14 = 0;
  }
  Application = CAppStateChangedWorkItem::CreateInstance(a2, a3, a4 == 0, a5, &v18);
  if ( Application < 0 )
    goto LABEL_29;
  if ( v14 )
  {
    v15 = v18;
    v16 = CApplication::PostDelayedInteractivityNotification((const wchar_t **)v13, (const wchar_t *)v18);
    goto LABEL_27;
  }
  Application = CApplication::CleanupDelayedInteractivityNotification(v13);
  if ( Application < 0 )
  {
LABEL_29:
    v15 = v18;
    goto LABEL_30;
  }
  v15 = v18;
  v16 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_27:
  Application = v16;
  if ( v16 >= 0 )
    v15 = 0LL;
LABEL_30:
  if ( v15 )
    (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1LL);
  if ( Application < 0 )
  {
LABEL_33:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Au,
        &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::ProcessInteractivityNotification", 3156, Application);
  }
  if ( v23 )
    LeaveCriticalSection(v22);
  return (unsigned int)Application;
}
