/*
 * XREFs of ?get@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@Value@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAP$01E$AAV42@XZ @ 0x1801760B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x180176190 (--0-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _get__Q__IBoxArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Platform__Value___Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAP_01E_AAV42_XZ(
        _BYTE *a1)
{
  _BYTE *v1; // rbx
  void *v3; // [rsp+40h] [rbp+8h]

  v1 = a1;
  if ( a1 )
  {
    if ( a1[76] )
    {
      v3 = Platform::Details::Heap::Allocate(0x58uLL, 0x88uLL);
      return Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
               v3,
               *((_QWORD *)v1 + 10),
               *((unsigned int *)v1 + 18));
    }
    else
    {
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
  return (__int64)v1;
}
