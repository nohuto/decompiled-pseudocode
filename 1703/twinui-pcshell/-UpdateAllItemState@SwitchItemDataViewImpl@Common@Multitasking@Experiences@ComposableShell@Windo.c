/*
 * XREFs of ?UpdateAllItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXXZ @ 0x180136994
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_ReevaluateAll@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAJXZ @ 0x1801333CC (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemD_ea_1801333CC.c)
 *     ?add@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItem@SwitchItemDataViewImpl@23456@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@23456@@Foundation@Windows@@@Z @ 0x1801335F8 (-add@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Eval.c)
 *     ?remove@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItem@SwitchItemDataViewImpl@23456@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x18013370C (-remove@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@E.c)
 *     ?ReevaluateAll@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAXXZ @ 0x180136A0C (-ReevaluateAll@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInte.c)
 * Callees:
 *     ?UpdateItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPEAUDataViewItemState@123456@@Z @ 0x1801368D0 (-UpdateItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::UpdateAllItemState(
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
    WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::UpdateItemState(
      (_DWORD *)a1,
      v3[5]);
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
