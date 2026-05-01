/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_First@?Q?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJPEAPE$AAU?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@234@@Z @ 0x18013B13C
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_First@?Q?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAJPEAPE$AAU?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@234@@Z @ 0x18013B180 (-__abi_Windows_Foundation_Collections_-$IIterable@PE$AAUISwitchItem@Common@Multitas_ea_18013B180.c)
 * Callees:
 *     ?First@?Q?$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@234@XZ @ 0x18013D360 (-First@-Q-$IIterable@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableSh_ea_18013D360.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IIterable_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal______abi_First__Q__IIterable_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAJPEAPE_AAU__IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___234__Z(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 120) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    *a2 = _First__Q__IIterable_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAPE_AAU__IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___234_XZ(a1);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}
