/*
 * XREFs of ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1801711D0
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1801776F0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAU.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180171264 (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _ContextMenuInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_5WindowsInternal___Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a3 + 56LL))(a3, &v6);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  if ( v6 >= 0x5DD )
  {
    if ( v6 <= 0x5DE || v6 == 1507 )
      return XamlAllUpViewController::HandleSnappingCommands(a1, a2);
    if ( v6 == 1508 )
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 88LL))(a1 + 16, a2);
    result = v6 - 1509;
    if ( (unsigned int)result <= 1 )
      return XamlAllUpViewController::HandleSnappingCommands(a1, a2);
  }
  return result;
}
