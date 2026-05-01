/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_GetMany@?Q?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18013AF30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMany@?Q?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x18013B030 (-GetMany@-Q-$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Windo.c)
 *     ??0?$ArrayReference@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I_N@Z @ 0x18013C55C (--0-$ArrayReference@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal______abi_GetMany__Q__IVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAJIIPEAPE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PEAI_Z(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // rax
  unsigned int v8; // ebx
  _BYTE v10[32]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v11[112]; // [rsp+50h] [rbp-A8h] BYREF

  v5 = a4;
  v8 = 0;
  if ( *(_BYTE *)(a1 + 120) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a5 = 0;
  try
  {
    LOBYTE(a4) = 1;
    Platform::ArrayReference<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::ArrayReference<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>(
      v10,
      v5,
      a3,
      a4);
    *a5 = _GetMany__Q__IVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____VectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAIIP_01E_AAV__WriteOnlyArray_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_6__Z(
            a1,
            a2,
            v11);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v8;
}
