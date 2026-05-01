/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_get_DefaultEvaluationState@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAJPEAW4SwitchItemInclusion@23456@@Z @ 0x18013329C
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_get_DefaultEvaluationState@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@W7E$AAAJPEAW4SwitchItemInclusion@23456@@Z @ 0x1801332F0 (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemD_ea_1801332F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_get_DefaultEvaluationState__QISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItemDataViewImpl_23456_UE_AAAJPEAW4SwitchItemInclusion_23456__Z(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 152) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  try
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 104LL))(a1 + 8);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}
