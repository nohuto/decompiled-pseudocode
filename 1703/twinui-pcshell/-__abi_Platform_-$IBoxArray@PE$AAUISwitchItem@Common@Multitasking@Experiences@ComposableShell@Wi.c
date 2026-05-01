/*
 * XREFs of ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18013B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@KAPEAPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEBQE$AAU345678@I@Z @ 0x18013BB1C (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@Comp.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Platform___IBoxArray_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal______abi_get_Value__Q__IBoxArray_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Platform____Array_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAJPEAIPEAPEAPE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Z(
        _BYTE *a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdi

  v5 = 0;
  if ( a1[128] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  *a3 = 0LL;
  try
  {
    v6 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
    v7 = v6;
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 72) )
      {
        if ( !*(_QWORD *)(v6 + 80) )
          __abi_WinRTraiseFailureException();
        if ( !*(_BYTE *)(v6 + 76) && *(_QWORD *)(v6 + 88) && *(_DWORD *)(*(_QWORD *)(v7 + 88) + 12LL) == 1 )
        {
          *a3 = *(_QWORD *)(v7 + 80);
          *a2 = *(_DWORD *)(v7 + 72);
          *(_DWORD *)(v7 + 72) = 0;
          *(_BYTE *)(v7 + 76) = 0;
          *(_QWORD *)(v7 + 80) = 0LL;
        }
        else
        {
          if ( !*(_BYTE *)(v7 + 76) && (!*(_QWORD *)(v7 + 88) || *(int *)(*(_QWORD *)(v7 + 88) + 12LL) <= 1) )
            __abi_WinRTraiseFailureException();
          *a3 = Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::AllocateAndCopyElements(
                  *(_QWORD *)(v7 + 80),
                  *(unsigned int *)(v7 + 72));
          *a2 = *(_DWORD *)(v7 + 72);
        }
      }
      else
      {
        *a3 = 0LL;
        *a2 = 0;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a3 = 0LL;
      *a2 = 0;
    }
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v5;
}
