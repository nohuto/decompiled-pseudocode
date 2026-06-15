/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001642C
 * Callers:
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x180016670 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     PbmReportAppInteractivityChange @ 0x180018320 (PbmReportAppInteractivityChange.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18000C854 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000C8BC (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x18000D004 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18000D188 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     WPP_SF_Ss @ 0x180011E64 (WPP_SF_Ss.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x180013D3C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z @ 0x18001F574 (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  __int64 v9; // r8
  const char *v10; // rax
  int Application; // ebx
  CApplication *v12; // rsi
  int v13; // edi
  struct IPBMWorkItem *v14; // rdi
  int v15; // eax
  struct IPBMWorkItem *v17; // [rsp+30h] [rbp-40h] BYREF
  CApplication *v18[2]; // [rsp+38h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-28h] BYREF
  char v20; // [rsp+50h] [rbp-20h]
  LPCRITICAL_SECTION v21; // [rsp+58h] [rbp-18h] BYREF
  char v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+A0h] [rbp+30h] BYREF

  v18[1] = (CApplication *)-2LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  v21 = (LPCRITICAL_SECTION)(a1 + 32);
  v22 = 0;
  ATL::CCritSecLock::Lock(&v21);
  v23 = 0;
  v17 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v10 = "PBMIC_UNKNOWN";
    if ( a3 == 2 )
      v10 = "PBMIC_SOFT_NONINTERACTIVE";
    if ( a3 == 1 )
      v10 = "PBMIC_HARD_NONINTERACTIVE";
    if ( !a3 )
      v10 = "PBMIC_INTERACTIVE";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x41u, v9, a2, v10);
  }
  Application = CApplicationManager::GetApplication((CApplicationManager *)a1, a2, a4, v18, 1, &v23);
  if ( Application < 0 )
    goto LABEL_33;
  lpCriticalSection = v8;
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v12 = v18[0];
  if ( a3 == 2
    && *((_DWORD *)v18[0] + 42)
    && !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(v18[0])
    && (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v12) )
  {
    if ( v20 )
      LeaveCriticalSection(lpCriticalSection);
    v13 = 1;
  }
  else
  {
    if ( v20 )
      LeaveCriticalSection(lpCriticalSection);
    v13 = 0;
  }
  Application = CAppStateChangedWorkItem::CreateInstance(a2, a3 == 0, a4, &v17);
  if ( Application < 0 )
    goto LABEL_29;
  if ( v13 )
  {
    v14 = v17;
    v15 = CApplication::PostDelayedInteractivityNotification((const wchar_t **)v12, (const wchar_t *)v17);
    goto LABEL_27;
  }
  Application = CApplication::CleanupDelayedInteractivityNotification((const wchar_t **)v12);
  if ( Application < 0 )
  {
LABEL_29:
    v14 = v17;
    goto LABEL_30;
  }
  v14 = v17;
  v15 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_27:
  Application = v15;
  if ( v15 >= 0 )
    v14 = 0LL;
LABEL_30:
  if ( v14 )
    (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v14 + 8LL))(v14, 1LL);
  if ( Application < 0 )
  {
LABEL_33:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x42u,
        &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::ProcessInteractivityNotification", 3141, Application);
  }
  if ( v22 )
    LeaveCriticalSection(v21);
  return (unsigned int)Application;
}
