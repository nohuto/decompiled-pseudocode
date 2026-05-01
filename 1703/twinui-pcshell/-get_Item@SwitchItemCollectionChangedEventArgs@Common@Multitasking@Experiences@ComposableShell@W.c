/*
 * XREFs of ?get_Item@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJPEAPEAUISwitchItem@23456@@Z @ 0x180160A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::get_Item(
        WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs *this,
        struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem **a2,
        __int64 a3,
        const char *a4)
{
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v4; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *a2 = 0LL;
    v4 = (struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *)*((_QWORD *)this + 7);
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23,
                           (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemCollectionEventArgs.h",
                           a4);
  }
  return result;
}
