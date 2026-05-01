/*
 * XREFs of _wil::MakeOrThrow_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_&___ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventType_&___ptr64__::_1_::dtor$0 @ 0x1801A4394
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x180160D3C (--1-$ComPtr@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShel.c)
 */

volatile signed __int64 *__fastcall wil::MakeOrThrow_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventType_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 *result; // rax

  result = (volatile signed __int64 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs>::~ComPtr<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs>(*(volatile signed __int64 ***)(a2 + 64));
  }
  return result;
}
