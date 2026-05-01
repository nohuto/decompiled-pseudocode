/*
 * XREFs of ??$MakeOrThrow@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPEAUISwitchItem@23456@AEAW4SwitchItemCollectionChangedEventType@23456@@wil@@YA?AV?$ComPtr@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@AEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAW4SwitchItemCollectionChangedEventType@56789@@Z @ 0x180160CEC
 * Callers:
 *     ?RaiseCollectionChangedEvent@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXW4SwitchItemCollectionChangedEventType@23456@PEAUISwitchItem@23456@@Z @ 0x180160D5C (-RaiseCollectionChangedEvent@SwitchItemDataSourceBase@Common@Multitasking@Experiences@Composable.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A9C0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAPEAUISwitchItem@23456@AEAW4SwitchItemCollectionChangedEventType@23456@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@12@AEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEAW4SwitchItemCollectionChangedEventType@56789@@Z @ 0x180160BEC (--$Make@VSwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@Wi.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int64 **__fastcall wil::MakeOrThrow<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * &,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventType &>(
        volatile signed __int64 **a1,
        __int64 *a2,
        int *a3)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * &,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventType &>(
    a1,
    a2,
    a3);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x38, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v4);
    __debugbreak();
  }
  return a1;
}
