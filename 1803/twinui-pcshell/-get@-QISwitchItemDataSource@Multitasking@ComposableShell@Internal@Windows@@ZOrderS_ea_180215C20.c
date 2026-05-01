/*
 * XREFs of ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchItemDataViewImpl@2345@UE$AAAPE$AAUISwitchItemSort@2345@XZ @ 0x180215C20
 * Callers:
 *     ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchItemDataViewImpl@2345@WBA@E$AAAPE$AAUISwitchItemSort@2345@XZ @ 0x1800AB480 (-get@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchIte.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x180215DF4 (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _get__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__ZOrderSort_SwitchItemDataViewImpl_2345_UE_AAAPE_AAUISwitchItemSort_2345_XZ(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 88);
  if ( !v1 )
    return 0LL;
  v4 = Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(v1);
  v2 = __abi_winrt_ptr_ctor(v4);
  __abi_winrt_ptr_dtor(v4);
  return v2;
}
