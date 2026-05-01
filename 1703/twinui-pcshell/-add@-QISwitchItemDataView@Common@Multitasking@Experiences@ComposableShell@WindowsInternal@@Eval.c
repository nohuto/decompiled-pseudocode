/*
 * XREFs of ?add@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItem@SwitchItemDataViewImpl@23456@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@23456@@Foundation@Windows@@@Z @ 0x1801335F8
 * Callers:
 *     ?add@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItem@SwitchItemDataViewImpl@23456@W7E$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@23456@@Foundation@Windows@@@Z @ 0x180133700 (-add@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsI_ea_180133700.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x1800039D8 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     wil::ScopeExit__lambda_ee3cd95579de1bc4ff8ba8015879bb86___ @ 0x18013355C (wil--ScopeExit__lambda_ee3cd95579de1bc4ff8ba8015879bb86___.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXXZ @ 0x180136994 (-UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall _add__QISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__EvaluateItem_SwitchItemDataViewImpl_23456_UE_AAA_AVEventRegistrationToken_Foundation_Windows__PE_AAV__TypedEventHandler_PE_AAUISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUIEvaluateItemEventArgs_23456__Foundation_Windows___Z(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v8[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h] BYREF

  wil::srwlock::lock_exclusive(a1 + 7, &SRWLock);
  if ( a1[9].Ptr )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\switchitemdataview.h",
      (const char *)0x8007139FLL);
    __debugbreak();
  }
  v11 = Platform::Details::EventSourceAdd(&a1[8], &a1[17], a3);
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1);
  v8[0] = (__int64)a1;
  v8[1] = (__int64)&v11;
  wil::ScopeExit__lambda_ee3cd95579de1bc4ff8ba8015879bb86___((__int64)v9, v8);
  (*((void (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 2))(a1);
  WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::UpdateAllItemState(a1);
  v6 = v11;
  a1[9].Ptr = (PVOID)v11;
  *a2 = v6;
  if ( v9[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return a2;
}
