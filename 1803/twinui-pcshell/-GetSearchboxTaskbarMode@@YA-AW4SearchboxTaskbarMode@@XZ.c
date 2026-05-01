/*
 * XREFs of ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180085D24
 * Callers:
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x18006351C (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 * Callees:
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x180085C8C (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180085E80 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180085F20 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 */

__int64 __fastcall GetSearchboxTaskbarMode(TabletModeHelpers *a1)
{
  CortanaFlightingHelpers *v1; // rcx
  __int64 v2; // r8
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( TabletModeHelpers::IsTabletMode(a1) || CortanaFlightingHelpers::IsImmersiveSearchEnabled(v1) )
    return 1LL;
  LOBYTE(v4) = 0;
  CortanaCapabilities::HasCortanaCapabilities(2048, (bool *)&v4, v2);
  v5 = ((_BYTE)v4 != 0) + 1;
  if ( (unsigned int)SHRegGetDWORD(
                       HKEY_CURRENT_USER,
                       L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
                       L"SearchboxTaskbarMode",
                       &v5) != -2147024894 )
    return v5;
  v4 = 0;
  if ( (int)SHRegGetDWORD(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
              L"SearchboxTaskbarModeForceGlyph",
              &v4) < 0 )
    return v5;
  result = v5;
  if ( v4 )
    return 1LL;
  return result;
}
