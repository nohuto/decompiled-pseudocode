/*
 * XREFs of ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x1801822D0
 * Callers:
 *     ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x180181490 (-Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x180181670 (-Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x1800D1D34 (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     wcscmp_0 @ 0x1801E5CB1 (wcscmp_0.c)
 */

char __fastcall XamlLauncher::ShouldLaunchCortanaOnPPI(XamlLauncher *this, HSTRING a2, __int64 a3)
{
  DWORD v3; // eax
  char v5; // bl
  const wchar_t *StringRawBuffer; // rax
  XamlLauncher *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  v3 = `IsPPIEdition'::`2'::s_dwProductType;
  v5 = 1;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v3 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v3 == 119 )
  {
    CortanaCapabilities::HasCortanaCapabilities(2048, (bool *)&v8, a3);
    if ( !(_BYTE)v8 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      return wcscmp_0(StringRawBuffer, L"ms-cortana://StartMode=Settings&QuerySource=Settings/") == 0;
    }
  }
  return v5;
}
