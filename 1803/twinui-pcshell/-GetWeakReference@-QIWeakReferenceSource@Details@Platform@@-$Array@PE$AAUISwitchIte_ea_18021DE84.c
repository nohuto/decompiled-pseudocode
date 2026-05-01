/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18021DE84
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@WDI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800AB6E0 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$Array@PE$AAUISwitchItemContextMenuM.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@3@WHA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800AB6F0 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@2Collections@3@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800AB700 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$IteratorForVectorView@PE$AAUISwitch.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@2Collections@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180211DF8 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180211DF8.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18021FED8 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_18021FED8.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_3_UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h]

  v3 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 88));
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptr_dtor(v3);
  return v1;
}
