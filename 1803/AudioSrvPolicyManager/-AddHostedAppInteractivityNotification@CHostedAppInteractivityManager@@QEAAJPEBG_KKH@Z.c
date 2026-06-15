/*
 * XREFs of ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180020880
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180020504 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x1800225C0 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800209C4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x180020AEC (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180020BA4 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  CHostedAppInteractivityManager *v8; // rcx
  int CumulativeHostedAppInteractivity; // ebx
  struct CHostedAppInteractivity *v10; // rsi
  CHostedAppInteractivityManager *v11; // rcx
  int v12; // edi
  BOOL v13; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v16; // [rsp+40h] [rbp-28h]
  struct CHostedAppInteractivity *v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&unk_18004F090;
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                       v8,
                                       a2,
                                       a3,
                                       a4,
                                       &v17);
  if ( CumulativeHostedAppInteractivity < 0 )
    goto LABEL_12;
  v10 = v17;
  v11 = (CHostedAppInteractivityManager *)*((unsigned int *)v17 + 3);
  if ( a5 )
  {
    v12 = (_DWORD)v11 + 1;
LABEL_6:
    *((_DWORD *)v17 + 3) = v12;
    goto LABEL_7;
  }
  v12 = *((_DWORD *)v17 + 3);
  if ( (_DWORD)v11 )
  {
    v12 = (_DWORD)v11 - 1;
    goto LABEL_6;
  }
LABEL_7:
  v13 = v12 != 0;
  if ( ((_DWORD)v11 != 0) == v13
    || (CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                             v11,
                                             a2,
                                             a3,
                                             a4,
                                             v13),
        CumulativeHostedAppInteractivity >= 0) )
  {
    if ( !v12 )
      CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(v11, v10);
    goto LABEL_17;
  }
LABEL_12:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      &WPP_769f1732904936de7b79ce5e0d5d3337_Traceguids,
      CumulativeHostedAppInteractivity);
  }
  AudPolicyLogError(
    "CHostedAppInteractivityManager::AddHostedAppInteractivityNotification",
    411,
    CumulativeHostedAppInteractivity);
LABEL_17:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)CumulativeHostedAppInteractivity;
}
