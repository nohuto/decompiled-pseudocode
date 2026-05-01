/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18020B6FC
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@WBI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1800A9F10 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VectorChangedEventArgs@2Collections@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180211F34 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180211F34.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__VectorChangedEventArgs_2Collections_3_UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+8h]

  v3 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 48));
  v1 = __abi_winrt_ptr_ctor(v3);
  __abi_winrt_ptr_dtor(v3);
  return v1;
}
