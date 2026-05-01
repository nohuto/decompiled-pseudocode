/*
 * XREFs of ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x1801396E8
 * Callers:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x1801376B0 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Window.c)
 *     ?SetAt@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXIPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180137F2C (-SetAt@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShel_ea_180137F2C.c)
 *     ?InsertAt@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXIPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180138404 (-InsertAt@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableS_ea_180138404.c)
 *     ?RemoveAt@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXI@Z @ 0x1801385EC (-RemoveAt@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableS_ea_1801385EC.c)
 *     ?RemoveAtEnd@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXXZ @ 0x18013881C (-RemoveAtEnd@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@Composab_ea_18013881C.c)
 *     ?Clear@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXXZ @ 0x18013890C (-Clear@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShel_ea_18013890C.c)
 *     ?Append@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18013AD5C (-Append@-Q-$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShe_ea_18013AD5C.c)
 * Callees:
 *     ??$make_shared@IH@std@@YA?AV?$shared_ptr@I@0@$$QEAH@Z @ 0x18013968C (--$make_shared@IH@std@@YA-AV-$shared_ptr@I@0@$$QEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Platform::Collections::Details::IncrementCounter(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // r8
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h]

  result = *a1;
  if ( ++*(_DWORD *)result == -1 )
  {
    v10 = 0;
    result = (__int64)std::make_shared<unsigned int,int>(&v8, &v10);
    v3 = *(_QWORD *)result;
    v4 = *(_QWORD *)(result + 8);
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    v5 = (volatile signed __int32 *)a1[1];
    a1[1] = v4;
    v11 = v4;
    v7 = v5;
    *a1 = v3;
    if ( v5 )
    {
      result = (unsigned int)_InterlockedDecrement(v5 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    v6 = v9;
    if ( v9 )
    {
      result = (unsigned int)_InterlockedDecrement(v9 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        result = (unsigned int)_InterlockedDecrement(v6 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
  }
  return result;
}
