/*
 * XREFs of ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DA1C
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x180014520 (-SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001ADC8 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18001CDB0 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001DBA4 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x180012430 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001CF54 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::SilenceAndRevokePLMExemption(CApplicationManager *this, struct CApplication *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)a2 + 131) = 0;
  *((_DWORD *)a2 + 132) = 0;
  *((_DWORD *)a2 + 133) = 0;
  *((_DWORD *)a2 + 134) = 0;
  *((_DWORD *)a2 + 135) = 0;
  *((_DWORD *)a2 + 136) = 0;
  *((_DWORD *)a2 + 137) = 1;
  CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
  CApplicationManager::ApplyPBMPolicy(this, a2, 209, 0);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
