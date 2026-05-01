/*
 * XREFs of ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItems@SwitchItemDataViewImpl@2345@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@5@XZ @ 0x180215AE4
 * Callers:
 *     ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItems@SwitchItemDataViewImpl@2345@WBA@E$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@5@XZ @ 0x1800AB470 (-get@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItems@SwitchIt.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x1802057D8 (--0-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$equal_to@PE$AAUI.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180207C68 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QE$AAUISwitchItem.c)
 *     ?Append@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@4@@Z @ 0x180209028 (-Append@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows_ea_180209028.c)
 *     ?GetView@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x18020B618 (-GetView@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_18020B618.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall _get__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItems_SwitchItemDataViewImpl_2345_UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_5_XZ(
        RTL_SRWLOCK *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  RTL_SRWLOCK *v4; // rbp
  _QWORD *Ptr; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *View__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_XZ; // rbx
  __int64 v9; // rdi
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h]
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+18h]

  v11 = Platform::Details::Heap::Allocate(0x88uLL, 0xB0uLL);
  v2 = (_QWORD *)Platform::Collections::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>((__int64)v11);
  v11 = v2;
  v3 = __abi_winrt_ptr_ctor((__int64)v2);
  v12 = v3;
  __abi_winrt_ptr_dtor((__int64)v2);
  v4 = a1 + 7;
  AcquireSRWLockShared(a1 + 7);
  v13 = a1 + 7;
  Ptr = a1[13].Ptr;
  v6 = (_QWORD *)*Ptr;
  v11 = (_QWORD *)*Ptr;
  while ( v6 != Ptr )
  {
    v7 = v6[5];
    if ( !*(_DWORD *)(v7 + 8) )
      _Append__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_4__Z(
        v3,
        *(_QWORD *)v7);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>>,std::_Iterator_base0>::operator++((__int64 *)&v11);
    v6 = v11;
  }
  View__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_XZ = (_QWORD *)_GetView__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_XZ(v3);
  v11 = View__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_XZ;
  v9 = __abi_winrt_ptr_ctor((__int64)View__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_XZ);
  __abi_winrt_ptr_dtor((__int64)View__Q__IVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___234_XZ);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  __abi_winrt_ptr_dtor(v3);
  return v9;
}
