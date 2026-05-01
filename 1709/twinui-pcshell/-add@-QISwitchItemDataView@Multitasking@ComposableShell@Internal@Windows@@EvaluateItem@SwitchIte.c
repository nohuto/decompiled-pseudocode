/*
 * XREFs of ?add@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@UE$AAA?AVEventRegistrationToken@Foundation@5@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@95@@Z @ 0x1801618E8
 * Callers:
 *     ?add@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@W7E$AAA?AVEventRegistrationToken@Foundation@5@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@95@@Z @ 0x180161A00 (-add@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateI_ea_180161A00.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180003B78 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x180161B6C (-UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall _add__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__EvaluateItem_SwitchItemDataViewImpl_2345_UE_AAA_AVEventRegistrationToken_Foundation_5_PE_AAV__TypedEventHandler_PE_AAUISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__PE_AAUIEvaluateItemEventArgs_2345__95__Z(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v9; // [rsp+60h] [rbp+8h]

  v6 = a1 + 7;
  AcquireSRWLockExclusive(a1 + 7);
  if ( a1[9].Ptr )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\switchitemdataview.h",
      (const char *)0x8007139FLL);
    __debugbreak();
  }
  v9 = Platform::Details::EventSourceAdd(&a1[8], &a1[17], a3);
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1);
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1);
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateAllItemState(a1);
  a1[9].Ptr = (PVOID)v9;
  *a2 = v9;
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return a2;
}
