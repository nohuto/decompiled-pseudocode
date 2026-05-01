/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18013717C
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAJIPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180137210 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Common@Multitaski_ea_180137210.c)
 * Callees:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x1801376B0 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Window.c)
 *     ??0?$ArrayReference@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I_N@Z @ 0x18013C55C (--0-$ArrayReference@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal______abi_ReplaceAll__Q__IVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAJIPEAPE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Z(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  _BYTE v8[144]; // [rsp+30h] [rbp-A8h] BYREF

  v3 = a3;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 168) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    v6 = Platform::ArrayReference<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::ArrayReference<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>(
           v8,
           v3,
           a2,
           0LL);
    _ReplaceAll__Q__IVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_6__Z(
      a1,
      v6);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v5;
}
