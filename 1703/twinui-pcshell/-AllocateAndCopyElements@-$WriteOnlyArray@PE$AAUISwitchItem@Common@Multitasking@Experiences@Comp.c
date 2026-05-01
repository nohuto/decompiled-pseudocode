/*
 * XREFs of ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@KAPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEBQE$AAU345678@I@Z @ 0x18013BB1C
 * Callers:
 *     ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18013B8B0 (-__abi_Platform_-$IBoxArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@Wi.c)
 *     ??0?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@IE$AAA@PEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x18013BBEC (--0-$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     memset @ 0x180194E50 (memset.c)
 *     __Platform_CoTaskMemAlloc @ 0x1801952E4 (__Platform_CoTaskMemAlloc.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::AllocateAndCopyElements(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi

  v2 = a2;
  if ( !a2 )
    return 0LL;
  if ( a2 > 0x1FFFFFFF )
  {
    __abi_WinRTraiseInvalidCastException();
    __debugbreak();
  }
  v5 = a2;
  v6 = _Platform_CoTaskMemAlloc(8LL * a2);
  v4 = v6;
  if ( !v6 )
  {
    __abi_WinRTraiseOutOfMemoryException();
    __debugbreak();
  }
  memset(v6, 0, 8 * v2);
  if ( (_DWORD)v2 )
  {
    v7 = v4;
    v8 = a1 - (_QWORD)v4;
    do
    {
      v9 = *(_QWORD *)((char *)v7 + v8);
      if ( v9 != *v7 )
      {
        if ( v9 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)((char *)v7 + v8));
        if ( *v7 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
        *v7 = v9;
      }
      ++v7;
      --v5;
    }
    while ( v5 );
  }
  return v4;
}
