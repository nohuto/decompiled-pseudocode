/*
 * XREFs of wil::ScopeExit__lambda_ee3cd95579de1bc4ff8ba8015879bb86___ @ 0x18013355C
 * Callers:
 *     ?add@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItem@SwitchItemDataViewImpl@23456@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@23456@@Foundation@Windows@@@Z @ 0x1801335F8 (-add@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Eval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ScopeExit__lambda_ee3cd95579de1bc4ff8ba8015879bb86___(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = a2[1];
  result = a1;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
