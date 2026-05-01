/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x1801FF250
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAAKXZ @ 0x1800A9A30 (-__abi_Release@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAA.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCI@E$AAAKXZ @ 0x1800A9A40 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WDI@E$AAAKXZ @ 0x1800A9A50 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800A9A50.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WHA@E$AAAKXZ @ 0x1800A9A60 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experien.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WCA@E$AAAKXZ @ 0x1800AAF50 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800AAF50.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBA@E$AAAKXZ @ 0x1800AC160 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800AC160.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBI@E$AAAKXZ @ 0x1800AC170 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800AC170.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WDA@E$AAAKXZ @ 0x1800AC180 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800AC180.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WEA@E$AAAKXZ @ 0x1800AC190 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800AC190.c)
 *     ?__abi_Release@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WHI@E$AAAKXZ @ 0x1800AC1A0 (-__abi_Release@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800AC1A0.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1801FAB7C (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1801FB7AC (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 *     ?_Dispose_@IDisposable@Platform@@UE$AAAXXZ @ 0x1801FC010 (-_Dispose_@IDisposable@Platform@@UE$AAAXXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAKXZ(
        __int64 a1)
{
  Platform::Details::ControlBlock **v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rcx
  Platform::Details::ControlBlock *v5; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 88);
  v3 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 88));
  if ( !v3 )
  {
    v4 = (a1 + 24) & -(__int64)(a1 != 0);
    if ( v4 )
      Platform::IDisposable::_Dispose_(v4);
    v5 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    Platform::Details::ControlBlock::__abi_Release(v5);
  }
  return v3;
}
