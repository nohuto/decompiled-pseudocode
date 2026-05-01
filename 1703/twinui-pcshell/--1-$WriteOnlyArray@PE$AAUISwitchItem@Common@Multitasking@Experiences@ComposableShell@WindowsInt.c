/*
 * XREFs of ??1?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x18013BF2C
 * Callers:
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJXZ @ 0x18013BEDC (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@PE$AAU_ea_18013BEDC.c)
 *     ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18013BFA8 (-_Dispose_@-QIDisposable@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Common@Multit_ea_18013BFA8.c)
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18013BFC0 (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitasking@Ex_ea_18013BFC0.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x18019510C (CoTaskMemFree_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::~WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>(
        __int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rbp
  _QWORD *v4; // rsi

  if ( !*(_BYTE *)(a1 + 44) )
  {
    v2 = *(void **)(a1 + 48);
    if ( v2 )
    {
      if ( *(_DWORD *)(a1 + 40) )
      {
        v3 = *(unsigned int *)(a1 + 40);
        v4 = *(_QWORD **)(a1 + 48);
        do
        {
          if ( *v4 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
          ++v4;
          --v3;
        }
        while ( v3 );
      }
      CoTaskMemFree_0(v2);
    }
  }
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 44) = 0;
}
