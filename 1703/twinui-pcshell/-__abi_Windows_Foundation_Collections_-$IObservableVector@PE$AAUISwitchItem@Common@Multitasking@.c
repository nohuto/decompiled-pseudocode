/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IObservableVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_add_VectorChanged@?Q?$IObservableVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJPE$AAV?$VectorChangedEventHandler@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@234@PEAVEventRegistrationToken@34@@Z @ 0x180136C10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IObservableVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal______abi_add_VectorChanged__Q__IObservableVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAJPE_AAV__VectorChangedEventHandler_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___234_PEAVEventRegistrationToken_34__Z(
        _BYTE *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF

  v6 = 0;
  if ( a1[168] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset(&v8, 0, sizeof(v8));
  *a3 = v8;
  try
  {
    (*(void (__fastcall **)(_BYTE *, __int64 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, &v8, a2);
    *a3 = v8;
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v6;
}
