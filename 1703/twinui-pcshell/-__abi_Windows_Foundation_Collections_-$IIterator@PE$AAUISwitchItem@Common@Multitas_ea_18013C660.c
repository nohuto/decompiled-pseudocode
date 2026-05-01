/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_GetMany@?Q?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAJIPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18013C660
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ArrayReference@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I_N@Z @ 0x18013C55C (--0-$ArrayReference@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     ?GetMany@?Q?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@7@@Z @ 0x18013C7E0 (-GetMany@-Q-$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Windows.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal______abi_GetMany__Q__IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Details_2Platform__UE_AAAJIPEAPE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PEAI_Z(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  unsigned int v6; // ebx
  _QWORD v8[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v9[112]; // [rsp+50h] [rbp-98h] BYREF

  v6 = 0;
  if ( *(_BYTE *)(a1 + 104) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a4 = 0;
  try
  {
    Platform::ArrayReference<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::ArrayReference<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>(
      v8,
      a3,
      a2,
      1);
    *a4 = _GetMany__Q__IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Details_2Platform__UE_AAAIP_01E_AAV__WriteOnlyArray_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_7__Z(
            a1,
            v9);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v6;
}
