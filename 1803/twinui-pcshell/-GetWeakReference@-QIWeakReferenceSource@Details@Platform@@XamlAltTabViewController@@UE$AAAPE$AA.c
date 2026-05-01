/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180221E5C
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800A9F00 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@C.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WJI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800AB730 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WJI@E$AAAPE$.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@WCI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800AC4E0 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@WCI@E$AAAPE.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@WJA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800AC760 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@WJA@E$A.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180211EC8 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180211EC8.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18021FFB0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_18021FFB0.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180221F94 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180221F94.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180222A54 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180222A54.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAltTabViewController__UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h]

  v3 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 120));
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptr_dtor(v3);
  return v1;
}
