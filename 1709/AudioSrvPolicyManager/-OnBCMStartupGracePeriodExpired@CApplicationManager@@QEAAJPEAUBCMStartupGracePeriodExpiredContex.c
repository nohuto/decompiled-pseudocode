/*
 * XREFs of ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180016380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180006B7C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DD9C (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnBCMStartupGracePeriodExpired(CApplicationManager *this, const wchar_t ***a2)
{
  const wchar_t **v4; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x40u, &WPP_adf1d118c71e358e1570efa4731a0ba5_Traceguids, v4[3]);
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod(v4);
  CApplicationManager::ApplyPBMPolicy(this, (struct CApplication *)v4, 209, 0);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
