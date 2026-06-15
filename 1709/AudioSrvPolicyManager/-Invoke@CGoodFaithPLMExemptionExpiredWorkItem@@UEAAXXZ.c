/*
 * XREFs of ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x18001FA00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180006B7C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000BFCC (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x18000CEF8 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000D4B4 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGoodFaithPLMExemptionExpiredWorkItem::Invoke(CGoodFaithPLMExemptionExpiredWorkItem *this)
{
  __int64 v2; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      &WPP_b248cfb32be6365c2b37d8015b37b144_Traceguids,
      *(const wchar_t **)(*((_QWORD *)this + 1) + 24LL));
  }
  v2 = *((_QWORD *)this + 1);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *(_DWORD *)(v2 + 524) == 2 )
  {
    *(_DWORD *)(v2 + 524) = 0;
    *(_DWORD *)(v2 + 528) = 0;
    *(_DWORD *)(v2 + 532) = 0;
    *(_DWORD *)(v2 + 536) = 0;
    *(_DWORD *)(v2 + 540) = 0;
    *(_DWORD *)(v2 + 544) = 0;
    *(_DWORD *)(v2 + 548) = 1;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids,
      *(const wchar_t **)(v2 + 24));
  }
  if ( (unsigned int)CApplication::Category(v2) != 1 )
  {
    if ( !*(_DWORD *)(v2 + 168) )
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption((CApplication *)v2);
    *(_DWORD *)(v2 + 392) = 0;
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, (struct CApplication *)v2, 209, 0);
    CApplication::CleanupGoodFaithExemptionTimer((const wchar_t **)v2);
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
