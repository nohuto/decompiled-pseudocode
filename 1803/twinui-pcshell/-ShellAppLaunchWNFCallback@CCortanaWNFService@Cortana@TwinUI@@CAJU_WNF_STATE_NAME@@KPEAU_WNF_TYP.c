/*
 * XREFs of ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180085DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$StaticCast@W4CapabilityFlags@CortanaCapabilities@@@CortanaRegistrySettings@@YA?AW4CapabilityFlags@CortanaCapabilities@@K@Z @ 0x180085EDC (--$StaticCast@W4CapabilityFlags@CortanaCapabilities@@@CortanaRegistrySettings@@YA-AW4CapabilityF.c)
 *     ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x180189CE4 (-TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        PVOID *a4,
        unsigned __int16 *Src)
{
  __int16 v5; // di
  bool v7; // bp
  LSTATUS ValueW; // eax
  signed int v9; // ebx
  unsigned int v11; // [rsp+40h] [rbp-18h] BYREF
  DWORD v12[5]; // [rsp+44h] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  v12[0] = 4;
  v11 = 0;
  v7 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             L"CortanaCapabilityFlags",
             0x10u,
             0LL,
             &v11,
             v12);
  v9 = ValueW;
  if ( !ValueW )
  {
    v5 = CortanaRegistrySettings::StaticCast<enum CortanaCapabilities::CapabilityFlags>(v11);
LABEL_3:
    v9 = 0;
    goto LABEL_4;
  }
  if ( ValueW == 1168 || ValueW == 2 )
    goto LABEL_3;
  if ( ValueW > 0 )
    v9 = (unsigned __int16)ValueW | 0x80070000;
  if ( v9 >= 0 )
    goto LABEL_5;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7B,
    (__int64)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
    (const char *)(unsigned int)v9);
LABEL_4:
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
      (const char *)(unsigned int)v9);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
      (const char *)(unsigned int)v9);
    goto LABEL_6;
  }
LABEL_5:
  v9 = 0;
  v7 = (v5 & 0x900) == 2304;
LABEL_6:
  if ( v9 >= 0 && v7 && a4 && Src )
    TwinUI::Cortana::RealtimeEnticementManager::TriggerToast(a4[8], Src);
  return 0LL;
}
