/*
 * XREFs of ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180014BDC
 * Callers:
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18000D848 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x1800145C4 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_SSSSSSS @ 0x180011B38 (WPP_SF_SSSSSSS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180011F8C (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCApplication@@@Z @ 0x1800149E8 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCAppl.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180014B00 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationPBMStatus(
        CApplicationManager *this,
        const wchar_t **a2,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *a3,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0003 *a4,
        enum _PLM_EXEMPTION *a5)
{
  int SoundLevel; // eax
  int v10; // ebp
  const wchar_t *v11; // r14
  const wchar_t *v12; // rax
  __int64 v13; // r11
  const wchar_t *v14; // rdx
  const wchar_t *v15; // r8
  const wchar_t *v16; // r9
  const wchar_t *v17; // r10
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-20h] BYREF
  char v20; // [rsp+60h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SoundLevel = CApplicationManager::GetSoundLevel((__int64)this, (CApplication *)a2);
  v10 = SoundLevel;
  if ( a3 )
    *(_DWORD *)a3 = SoundLevel;
  if ( a4 )
  {
    if ( *((_DWORD *)a2 + 132) )
      *(_DWORD *)a4 = *((_DWORD *)a2 + 133);
    else
      *(_DWORD *)a4 = SoundLevel;
  }
  if ( a5 )
    *(_DWORD *)a5 = CApplicationManager::GetPLMExemptionStatus((__int64)this, (CApplication *)a2, SoundLevel);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v11 = L"Not computed";
    if ( a4 )
      v11 = SoundLevelToString(*(_DWORD *)a4);
    v12 = SoundLevelToString(v10);
    WPP_SF_SSSSSSS(*(_QWORD *)(v13 + 16), (__int64)v14, (__int64)v15, a2[3], v12, v17, v11, v14, v16, v15);
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
