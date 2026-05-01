/*
 * XREFs of ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x1802288F8
 * Callers:
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x180228970 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18022A0D0 (-Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x180085C8C (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     wcscmp_0 @ 0x1800A277D (wcscmp_0.c)
 */

char __fastcall XamlLauncher::ShouldLaunchCortanaOnPPI(XamlLauncher *this, HSTRING a2)
{
  char v3; // bl
  __int64 v4; // r8
  const wchar_t *StringRawBuffer; // rax
  XamlLauncher *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  v3 = 1;
  if ( IsPPIEdition() )
  {
    CortanaCapabilities::HasCortanaCapabilities(2048, (bool *)&v7, v4);
    if ( !(_BYTE)v7 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      return wcscmp_0(StringRawBuffer, L"ms-cortana://StartMode=Settings&QuerySource=Settings/") == 0;
    }
  }
  return v3;
}
