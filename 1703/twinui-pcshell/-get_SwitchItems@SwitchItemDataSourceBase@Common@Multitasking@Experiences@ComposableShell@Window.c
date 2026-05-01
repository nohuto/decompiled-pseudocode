/*
 * XREFs of ?get_SwitchItems@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJPEAPEAU?$IVectorView@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x1801639A0
 * Callers:
 *     ?get_SwitchItems@AppViewSwitchItemDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x18015CC30 (-get_SwitchItems@AppViewSwitchItemDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUISwitchItem@Common@M.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@5678@@Z @ 0x1801623A4 (--$Make@V-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInterna.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::get_SwitchItems(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  __int64 *v10; // rax
  __int64 *i; // rax
  int v12; // eax
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h]

  *a2 = 0LL;
  try
  {
    v4 = 0LL;
    v17 = 0LL;
    v5 = 0;
    Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *> const &,Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::permission>(&v16);
    if ( v16 )
    {
      v4 = v16;
      v17 = v16;
    }
    else
    {
      v5 = -2147024882;
    }
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemDataSourceBase.h",
        (const char *)(unsigned int)v5);
    v6 = *(__int64 **)(a1 + 16);
    v7 = (__int64 *)*v6;
    while ( 1 )
    {
      v8 = *(_QWORD *)v4;
      if ( v7 == v6 )
        break;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(v8 + 104))(v4, v7[5]);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2A,
          (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemDataSourceBase.h",
          (const char *)(unsigned int)v9);
      if ( !*((_BYTE *)v7 + 25) )
      {
        v10 = (__int64 *)v7[2];
        if ( *((_BYTE *)v10 + 25) )
        {
          for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v7 = i;
          v7 = i;
        }
        else
        {
          do
          {
            v7 = v10;
            v10 = (__int64 *)*v10;
          }
          while ( !*((_BYTE *)v10 + 25) );
        }
      }
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v8 + 64))(v4, a2);
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemDataSourceBase.h",
        (const char *)(unsigned int)v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F,
                           (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemDataSourceBase.h",
                           v13);
  }
  return 0LL;
}
