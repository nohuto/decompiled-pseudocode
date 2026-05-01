/*
 * XREFs of ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180097CDC
 * Callers:
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800C6710 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x180097ACC (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 */

__int64 GetSearchboxTaskbarMode()
{
  NTSTATUS v0; // eax
  signed int v1; // eax
  __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned __int64 v4; // r9
  bool v5; // cf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  DWORD pcbData; // [rsp+50h] [rbp+10h] BYREF
  unsigned int pvData; // [rsp+58h] [rbp+18h] BYREF

  pcbData = 0;
  v0 = RtlQueryWnfStateData(&pvData, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, &pcbData, 0LL);
  v1 = RtlNtStatusToDosError(v0);
  v3 = 1;
  v4 = (unsigned __int16)v1 | 0x80070000;
  if ( v1 <= 0 )
    v4 = (unsigned int)v1;
  if ( (v4 & 0x80000000) != 0LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"internal\\shell\\private\\inc\\tabletmodehelpers.h",
      (const char *)v4);
LABEL_6:
    LOBYTE(pcbData) = 0;
    CortanaCapabilities::HasCortanaCapabilities(2048, (bool *)&pcbData, v2);
    v5 = (_BYTE)pcbData != 0;
    pcbData = 4;
    pvData = v5 + 1;
    RegGetValueW(
      HKEY_CURRENT_USER,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
      L"SearchboxTaskbarMode",
      0x10u,
      0LL,
      &pvData,
      &pcbData);
    return pvData;
  }
  if ( pcbData != 1 )
    goto LABEL_6;
  return v3;
}
