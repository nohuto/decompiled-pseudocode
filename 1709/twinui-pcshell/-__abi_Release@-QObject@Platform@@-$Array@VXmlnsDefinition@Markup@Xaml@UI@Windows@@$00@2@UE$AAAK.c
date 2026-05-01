/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x180152330
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAAKXZ @ 0x180151A20 (-__abi_Release@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAA.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBA@E$AAAKXZ @ 0x180151A70 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experien.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBI@E$AAAKXZ @ 0x180151AC0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WCA@E$AAAKXZ @ 0x180151B30 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180151B30.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCI@E$AAAKXZ @ 0x180151B80 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_180151B80.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WDA@E$AAAKXZ @ 0x180151CF0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180151CF0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WDI@E$AAAKXZ @ 0x180151D50 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_180151D50.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WEA@E$AAAKXZ @ 0x180151DA0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180151DA0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WHA@E$AAAKXZ @ 0x180151DF0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180151DF0.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WHI@E$AAAKXZ @ 0x1801523C0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1801523C0.c)
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  Platform::Details::ControlBlock *v6; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 88);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 88));
  if ( !v3 )
  {
    v4 = (a1 + 24) & -(__int64)(a1 != 0);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
      if ( v5 < 0 )
        __abi_WinRTraiseException(v5);
    }
    v6 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1 )
    {
      if ( *((_BYTE *)v6 + 25) )
        Platform::Details::Heap::AlignedFree(v6);
      else
        Platform::Details::Heap::Free(v6);
    }
  }
  return v3;
}
