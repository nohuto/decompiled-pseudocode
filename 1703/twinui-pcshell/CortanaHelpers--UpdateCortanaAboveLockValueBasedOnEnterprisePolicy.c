/*
 * XREFs of CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1800C94CC
 * Callers:
 *     ?LockScreenActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800C9BD0 (-LockScreenActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_T.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008A788 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 */

void CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy()
{
  DWORD v0; // eax
  int v1; // eax
  bool v2; // dl
  int PolicyInt; // eax
  int v4; // ebx
  int v5; // eax
  unsigned __int64 v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v0 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v0 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v0 != 119 )
  {
    v1 = SHWindowsPolicy(&POLID_AllowCortanaAboveLock);
    v2 = v1 != 0;
    if ( v1 == -1 )
    {
      PolicyInt = PolicyManager_GetPolicyInt(L"AboveLock", L"AllowCortanaAboveLock", &v8);
      v4 = PolicyInt;
      if ( PolicyInt < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1A,
          (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
          (const char *)(unsigned int)PolicyInt);
      v2 = 0;
      if ( v4 >= 0 )
        v2 = v8 != 0;
    }
    if ( !v2 )
    {
      v8 = 0;
      v5 = _RegSetKeyValue(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Speech_OneCore\\Preferences",
             L"VoiceActivationEnableAboveLockscreen",
             4u,
             (BYTE *)&v8,
             4u);
      v6 = (unsigned __int16)v5 | 0x80070000;
      if ( v5 <= 0 )
        v6 = (unsigned int)v5;
      if ( (v6 & 0x80000000) != 0LL )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA8,
          (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
          (const char *)v6);
    }
  }
}
