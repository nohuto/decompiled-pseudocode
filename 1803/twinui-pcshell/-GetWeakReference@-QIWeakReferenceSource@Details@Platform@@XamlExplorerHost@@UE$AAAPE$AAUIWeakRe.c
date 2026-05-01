/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHost@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180223894
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlExplorerHost@@WBI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800A9050 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlExplorerHost@@WBI@E$AAAPE$AAUIWea.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlBaseViewController@@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800AC970 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlBaseViewController@@WCA@E$AAAPE$A.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlExplorerHost__UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h]

  v3 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 112));
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptr_dtor(v3);
  return v1;
}
