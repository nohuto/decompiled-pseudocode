/*
 * XREFs of ??$make_shared@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAUISwitchItem@34567@AEAPE$AAV?$TypedEventHandler@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@@std@@YA?AV?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@0@AEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPE$AAV?$TypedEventHandler@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@@Z @ 0x1801345EC
 * Callers:
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180134DE8 (-AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 **__fastcall std::make_shared<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc * &,Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty> __gc * &>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  char *v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF
  char *v14; // [rsp+70h] [rbp+18h]
  char *v15; // [rsp+78h] [rbp+20h]

  v6 = (char *)operator new(0x28uLL);
  v14 = v6;
  *((_DWORD *)v6 + 2) = 1;
  *((_DWORD *)v6 + 3) = 1;
  *(_QWORD *)v6 = &std::_Ref_count_obj<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::DataViewItemState>::`vftable';
  v7 = (__int64 *)(v6 + 16);
  v15 = v6 + 16;
  if ( v6 != (char *)-16LL )
  {
    v8 = *a3;
    v9 = *a2;
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*a2);
    *v7 = v9;
    *((_DWORD *)v6 + 6) = 2;
    *((_QWORD *)v6 + 4) = 0LL;
    v10 = *v7;
    v13 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v10 + 104LL))(v10, v8, &v13);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    *((_QWORD *)v6 + 4) = v13;
  }
  a1[1] = (__int64 *)v6;
  *a1 = v7;
  return a1;
}
