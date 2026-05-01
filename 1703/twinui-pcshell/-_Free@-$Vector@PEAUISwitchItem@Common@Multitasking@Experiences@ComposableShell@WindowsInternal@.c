/*
 * XREFs of ?_Free@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@CAXPEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x1801614DC
 * Callers:
 *     ?Clear@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180161540 (-Clear@-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@.c)
 *     ??_E?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@MEAAPEAXI@Z @ 0x1801617A0 (--_E-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::_Free(
        _QWORD *Block,
        unsigned int a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi

  if ( Block )
  {
    if ( a2 )
    {
      v3 = Block;
      v4 = a2;
      do
      {
        if ( *v3 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
          *v3 = 0LL;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    free(Block);
  }
}
