/*
 * XREFs of ??_E?$__abi_FunctorCapture@V_lambda_79cd3f6b551d9350708e82439cb1951b_@@XPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@34567@@Details@Platform@@UEAAPEAXI@Z @ 0x18011EFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_79cd3f6b551d9350708e82439cb1951b_,void,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView __gc *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs __gc *>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  v4 = Block[1];
  if ( v4 )
  {
    Block[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *Block = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
