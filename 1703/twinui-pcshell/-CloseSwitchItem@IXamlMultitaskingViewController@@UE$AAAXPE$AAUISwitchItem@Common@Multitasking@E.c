/*
 * XREFs of ?CloseSwitchItem@IXamlMultitaskingViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180130270
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IXamlMultitaskingViewController::CloseSwitchItem(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}
