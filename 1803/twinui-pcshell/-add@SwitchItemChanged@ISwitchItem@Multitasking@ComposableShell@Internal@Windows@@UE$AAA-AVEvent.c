/*
 * XREFs of ?add@SwitchItemChanged@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AVEventRegistrationToken@Foundation@6@PE$AAV?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@86@@Z @ 0x180215230
 * Callers:
 *     ??$?0AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAV?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@4@@?$_Ref_count_obj@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@QEAA@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAV?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@6@@Z @ 0x180201E58 (--$-0AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAV-$TypedEventHa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801F9C2C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComposableShell::Multitasking::ISwitchItem::SwitchItemChanged::add(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a1 + 152LL))(a1, a3, a2);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  return a2;
}
