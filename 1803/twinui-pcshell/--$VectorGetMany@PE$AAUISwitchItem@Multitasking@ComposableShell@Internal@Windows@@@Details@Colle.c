/*
 * XREFs of ??$VectorGetMany@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAIAEBV?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@IP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x180203F48
 * Callers:
 *     ?GetMany@?Q?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@2Platform@@UE$AAAIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@7@@Z @ 0x18020B490 (-GetMany@-Q-$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collect.c)
 *     ?GetMany@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x18020B4CC (-GetMany@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_18020B4CC.c)
 *     ?GetMany@?Q?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAIIP$01E$AAV?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x18020B520 (-GetMany@-Q-$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Colle.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1801F9514 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x180203E38 (--$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platf.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Collections::Details::VectorGetMany<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
        _QWORD *a1,
        int a2,
        __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx

  v6 = *(_DWORD *)(a3 + 40);
  if ( (unsigned int)((__int64)(a1[1] - *a1) >> 5) - a2 <= v6 )
    v6 = ((__int64)(a1[1] - *a1) >> 5) - a2;
  v7 = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = Platform::Collections::Details::Unwrap<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(*a1 + 32LL * (unsigned int)(v7 + a2));
      v9 = v8;
      v10 = *(_QWORD *)(a3 + 48);
      if ( !v10 )
        goto LABEL_9;
      if ( (unsigned int)v7 >= *(_DWORD *)(a3 + 40) )
        break;
      __abi_winrt_ptr_assign((__int64 *)(v10 + 8 * v7), v8);
      __abi_winrt_ptr_dtor(v9);
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        return v6;
    }
    __abi_WinRTraiseOutOfBoundsException();
LABEL_9:
    __abi_WinRTraiseNullReferenceException();
    JUMPOUT(0x180203FF6LL);
  }
  return v6;
}
