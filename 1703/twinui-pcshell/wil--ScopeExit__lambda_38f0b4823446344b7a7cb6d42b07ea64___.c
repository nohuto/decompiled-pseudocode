/*
 * XREFs of wil::ScopeExit__lambda_38f0b4823446344b7a7cb6d42b07ea64___ @ 0x180133D50
 * Callers:
 *     ?SetDataSource@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAXPE$AAUISwitchItemDataSource@23456@@Z @ 0x180135108 (-SetDataSource@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInte.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ScopeExit__lambda_38f0b4823446344b7a7cb6d42b07ea64___(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
  *(_QWORD *)a1 = v2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
