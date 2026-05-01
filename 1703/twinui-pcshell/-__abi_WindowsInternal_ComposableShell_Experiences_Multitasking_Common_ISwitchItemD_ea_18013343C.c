/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_add_EvaluateItem@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAJPE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@23456@@Foundation@Windows@@PEAVEventRegistrationToken@9Windows@@@Z @ 0x18013343C
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_add_EvaluateItem@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@W7E$AAAJPE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@23456@@Foundation@Windows@@PEAVEventRegistrationToken@9Windows@@@Z @ 0x1801334E0 (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemD_ea_1801334E0.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_add_EvaluateItem__QISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItemDataViewImpl_23456_UE_AAAJPE_AAV__TypedEventHandler_PE_AAUISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUIEvaluateItemEventArgs_23456__Foundation_Windows__PEAVEventRegistrationToken_9Windows___Z(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF

  v6 = 0;
  if ( *(_BYTE *)(a1 + 152) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  memset(&v8, 0, sizeof(v8));
  *a3 = v8;
  try
  {
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)(a1 + 8) + 120LL))(a1 + 8, &v8, a2);
    *a3 = v8;
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v6;
}
