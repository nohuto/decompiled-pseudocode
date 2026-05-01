/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x18016240C
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@W7E$AAAJIPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x1801624A0 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Multitasking@Comp_ea_1801624A0.c)
 * Callees:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x180162950 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collec.c)
 *     ??0?$ArrayReference@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I_N@Z @ 0x18016774C (--0-$ArrayReference@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platfor.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows______abi_ReplaceAll__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAJIPEAPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4__Z(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  _BYTE v7[144]; // [rsp+30h] [rbp-A8h] BYREF

  v3 = a3;
  if ( *(_BYTE *)(a1 + 168) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    v5 = Platform::ArrayReference<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::ArrayReference<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
           v7,
           v3,
           a2,
           0LL);
    _ReplaceAll__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_6__Z(
      a1,
      v5);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
