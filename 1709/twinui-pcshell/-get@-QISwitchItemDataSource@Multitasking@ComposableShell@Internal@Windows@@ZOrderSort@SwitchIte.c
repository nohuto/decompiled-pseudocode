/*
 * XREFs of ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchItemDataViewImpl@2345@UE$AAAPE$AAUISwitchItemSort@2345@XZ @ 0x180168F60
 * Callers:
 *     ?get@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderSort@SwitchItemDataViewImpl@2345@WBA@E$AAAPE$AAUISwitchItemSort@2345@XZ @ 0x180168F90 (-get@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@ZOrderS_ea_180168F90.c)
 * Callees:
 *     ?get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUISwitchItem@3456@XZ @ 0x180168EEC (-get@Item@ISwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _get__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__ZOrderSort_SwitchItemDataViewImpl_2345_UE_AAAPE_AAUISwitchItemSort_2345_XZ(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 )
    return Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs::Item::get(v1);
  else
    return 0LL;
}
