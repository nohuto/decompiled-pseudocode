/*
 * XREFs of ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x180161B6C
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJXZ @ 0x1801616FC (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateAll@-Q.c)
 *     ?add@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@UE$AAA?AVEventRegistrationToken@Foundation@5@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@95@@Z @ 0x1801618E8 (-add@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchIte.c)
 *     ?remove@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@UE$AAAXVEventRegistrationToken@Foundation@5@@Z @ 0x180161A0C (-remove@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@Switch.c)
 *     ?ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAXXZ @ 0x180161BE4 (-ReevaluateAll@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDa.c)
 * Callees:
 *     ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x18016A7FC (-UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE.c)
 */

void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateAllItemState(
        __int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // rax
  __int64 *i; // rax

  v1 = *(__int64 **)(a1 + 104);
  v3 = (__int64 *)*v1;
  while ( v3 != v1 )
  {
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateItemState(a1, v3[5]);
    if ( !*((_BYTE *)v3 + 25) )
    {
      v4 = (__int64 *)v3[2];
      if ( *((_BYTE *)v4 + 25) )
      {
        for ( i = (__int64 *)v3[1]; !*((_BYTE *)i + 25) && v3 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v3 = i;
        v3 = i;
      }
      else
      {
        do
        {
          v3 = v4;
          v4 = (__int64 *)*v4;
        }
        while ( !*((_BYTE *)v4 + 25) );
      }
    }
  }
}
