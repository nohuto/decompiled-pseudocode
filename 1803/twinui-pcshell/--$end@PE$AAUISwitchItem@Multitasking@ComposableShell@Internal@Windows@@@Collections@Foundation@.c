/*
 * XREFs of ??$end@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@YA?AV?$VectorViewIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@0Platform@@PE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@012@@Z @ 0x180204D94
 * Callers:
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x18020ECE0 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x180221C38 (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Windows::Foundation::Collections::end<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __abi_winrt_ptr_ctor(a2);
  v4 = (unsigned int)Windows::UI::Xaml::Interop::IBindableVector::Size::get(a2);
  *a1 = __abi_winrt_ptr_ctor(v6);
  a1[1] = v4;
  __abi_winrt_ptr_dtor(v6);
  return a1;
}
