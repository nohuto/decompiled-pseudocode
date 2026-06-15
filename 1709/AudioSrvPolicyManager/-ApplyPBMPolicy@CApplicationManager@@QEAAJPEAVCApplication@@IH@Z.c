/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000C750 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000CA48 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x1800146E0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014F5C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800157F0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180016380 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x18001F880 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x18001FA00 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMPTION@@IH@Z @ 0x18000C124 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@0W4_PLM_EXEMP.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000D4B4 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180014BDC (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(
        CApplicationManager *this,
        struct CApplication *a2,
        int a3,
        int a4)
{
  CApplicationManager *v7; // rbx
  unsigned int v8; // edi
  int v10; // [rsp+28h] [rbp-30h]
  unsigned int v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+34h] [rbp-24h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-18h] BYREF
  char v15; // [rsp+48h] [rbp-10h]
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v13 = -2LL;
  v7 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CApplicationManager::GetApplicationPBMStatus(
    v7,
    a2,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *)&v12,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *)&v11,
    (enum _PLM_EXEMPTION *)&v16);
  v10 = a4;
  v8 = v11;
  LODWORD(v7) = v12;
  CApplication::ExecutePBMActions((__int64)a2, v12, v11, v16, a3, v10);
  if ( !(_DWORD)v7 && !v8 )
  {
    if ( v16 == 1 )
    {
      *((_DWORD *)a2 + 131) = 0;
      *((_DWORD *)a2 + 132) = 0;
      *((_DWORD *)a2 + 133) = 0;
      *((_DWORD *)a2 + 134) = 0;
      *((_DWORD *)a2 + 135) = 0;
      *((_DWORD *)a2 + 136) = 0;
      *((_DWORD *)a2 + 137) = 1;
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
    }
    else if ( *((_DWORD *)a2 + 131) != 6 )
    {
      *((_DWORD *)a2 + 131) = 6;
      *((_QWORD *)a2 + 66) = 1LL;
      *((_DWORD *)a2 + 134) = 1;
      *((_DWORD *)a2 + 135) = 0;
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
