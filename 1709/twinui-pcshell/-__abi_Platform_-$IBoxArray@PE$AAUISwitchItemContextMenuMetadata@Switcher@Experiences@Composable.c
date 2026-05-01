/*
 * XREFs of ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180166AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@KAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEBQE$AAU34567@I@Z @ 0x180166D0C (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Platform___IBoxArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal______abi_get_Value__Q__IBoxArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAJPEAIPEAPEAPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Z(
        _BYTE *a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi

  if ( a1[128] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  *a3 = 0LL;
  try
  {
    v5 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 72) )
      {
        if ( !*(_QWORD *)(v5 + 80) )
          __abi_WinRTraiseFailureException();
        if ( !*(_BYTE *)(v5 + 76) && *(_QWORD *)(v5 + 88) && *(_DWORD *)(*(_QWORD *)(v6 + 88) + 12LL) == 1 )
        {
          *a3 = *(_QWORD *)(v6 + 80);
          *a2 = *(_DWORD *)(v6 + 72);
          *(_DWORD *)(v6 + 72) = 0;
          *(_BYTE *)(v6 + 76) = 0;
          *(_QWORD *)(v6 + 80) = 0LL;
        }
        else
        {
          if ( !*(_BYTE *)(v6 + 76) && (!*(_QWORD *)(v6 + 88) || *(int *)(*(_QWORD *)(v6 + 88) + 12LL) <= 1) )
            __abi_WinRTraiseFailureException();
          *a3 = Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::AllocateAndCopyElements(
                  *(_QWORD *)(v6 + 80),
                  *(unsigned int *)(v6 + 72));
          *a2 = *(_DWORD *)(v6 + 72);
        }
      }
      else
      {
        *a3 = 0LL;
        *a2 = 0;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else
    {
      *a3 = 0LL;
      *a2 = 0;
    }
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
