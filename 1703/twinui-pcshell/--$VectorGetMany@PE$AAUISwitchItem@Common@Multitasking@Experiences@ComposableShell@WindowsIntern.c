/*
 * XREFs of ??$VectorGetMany@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAIAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@IP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x18013C6E8
 * Callers:
 *     ?GetMany@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x1801372CC (-GetMany@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIn.c)
 *     ?GetMany@?Q?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x18013B030 (-GetMany@-Q-$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Windo.c)
 *     ?GetMany@?Q?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@7@@Z @ 0x18013C7E0 (-GetMany@-Q-$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Windows.c)
 * Callees:
 *     ??$Unwrap@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AEBV?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x18013C99C (--$Unwrap@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Collections::Details::VectorGetMany<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *>(
        _QWORD *a1,
        int a2,
        __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rcx

  v6 = ((__int64)(a1[1] - *a1) >> 5) - a2;
  if ( v6 > *(_DWORD *)(a3 + 40) )
    v6 = *(_DWORD *)(a3 + 40);
  v7 = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = Platform::Collections::Details::Unwrap<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem>(*a1 + 32LL * (unsigned int)(v7 + a2));
      v9 = v8;
      v10 = *(_QWORD *)(a3 + 48);
      if ( !v10 )
        break;
      if ( (unsigned int)v7 >= *(_DWORD *)(a3 + 40) )
      {
        __abi_WinRTraiseOutOfBoundsException();
        __debugbreak();
      }
      if ( v8 != *(_QWORD *)(v10 + 8 * v7) )
      {
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v11 = *(_QWORD *)(v10 + 8 * v7);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        *(_QWORD *)(v10 + 8 * v7) = v9;
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        return v6;
    }
    __abi_WinRTraiseNullReferenceException();
  }
  return v6;
}
