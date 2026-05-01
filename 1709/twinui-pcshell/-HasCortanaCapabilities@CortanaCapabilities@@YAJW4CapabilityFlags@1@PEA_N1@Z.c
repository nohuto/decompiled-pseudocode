/*
 * XREFs of ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x1800D1D34
 * Callers:
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800D8870 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 *     ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800DCAF0 (-ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x1801822D0 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaCapabilities::HasCortanaCapabilities(int a1, bool *a2, __int64 a3)
{
  int v3; // edi
  LSTATUS ValueW; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
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
  if ( !ValueW )
  {
    v3 = v11;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  if ( ValueW == 2 || ValueW == 1168 )
    goto LABEL_3;
  v7 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v7 = ValueW;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x71,
    (__int64)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
    (const char *)v7);
LABEL_4:
  if ( (v7 & 0x80000000) == 0 )
  {
    *a2 = (a1 & v3) == a1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
      (const char *)v7);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xE5,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
      (const char *)v7);
    return v7;
  }
}
