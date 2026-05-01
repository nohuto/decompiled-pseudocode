/*
 * XREFs of ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x180097ACC
 * Callers:
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180097CDC (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18014D460 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
    (void *)0x76,
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
      (void *)0xB2,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
      (const char *)v7);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xD9,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
      (const char *)v7);
    return v7;
  }
}
