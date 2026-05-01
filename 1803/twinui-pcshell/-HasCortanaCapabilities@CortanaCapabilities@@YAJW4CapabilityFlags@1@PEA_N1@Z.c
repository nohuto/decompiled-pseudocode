/*
 * XREFs of ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x180085C8C
 * Callers:
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180085D24 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x1802288F8 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$StaticCast@W4CapabilityFlags@CortanaCapabilities@@@CortanaRegistrySettings@@YA?AW4CapabilityFlags@CortanaCapabilities@@K@Z @ 0x180085EDC (--$StaticCast@W4CapabilityFlags@CortanaCapabilities@@@CortanaRegistrySettings@@YA-AW4CapabilityF.c)
 */

__int64 __fastcall CortanaCapabilities::HasCortanaCapabilities(int a1, bool *a2, __int64 a3)
{
  int v3; // edi
  LSTATUS ValueW; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v10; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+74h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  v3 = 0;
  *a2 = 0;
  v11 = 0;
  v10 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             L"CortanaCapabilityFlags",
             0x10u,
             0LL,
             &v11,
             &v10);
  v7 = ValueW;
  if ( !ValueW )
  {
    v3 = CortanaRegistrySettings::StaticCast<enum CortanaCapabilities::CapabilityFlags>(v11);
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  if ( ValueW == 1168 || ValueW == 2 )
    goto LABEL_3;
  if ( ValueW > 0 )
    v7 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v7 & 0x80000000) == 0 )
    goto LABEL_5;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7B,
    (__int64)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
    (const char *)v7);
LABEL_4:
  if ( (v7 & 0x80000000) == 0 )
  {
LABEL_5:
    *a2 = (a1 & v3) == a1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE,
    (__int64)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
    (const char *)v7);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE5,
    (__int64)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
    (const char *)v7);
  return v7;
}
