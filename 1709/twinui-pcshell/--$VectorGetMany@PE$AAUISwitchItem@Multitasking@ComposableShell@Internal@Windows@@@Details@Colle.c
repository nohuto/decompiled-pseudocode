/*
 * XREFs of ??$VectorGetMany@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAIAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@IP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x1801678D8
 * Callers:
 *     ?GetMany@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x18016255C (-GetMany@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collectio.c)
 *     ?GetMany@?Q?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x180166220 (-GetMany@-Q-$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Colle.c)
 *     ?GetMany@?Q?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@2Platform@@UE$AAAIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@7@@Z @ 0x1801679D0 (-GetMany@-Q-$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collect.c)
 * Callees:
 *     ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x180167B8C (--$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platf.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Collections::Details::VectorGetMany<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
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
      v8 = Platform::Collections::Details::Unwrap<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(*a1 + 32LL * (unsigned int)(v7 + a2));
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
