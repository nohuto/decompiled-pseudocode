/*
 * XREFs of ?OnSwitchItemChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@W4SwitchItemProperty@23456@@Z @ 0x1801344A0
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_ReevaluateItem@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAJPE$AAUISwitchItem@23456@@Z @ 0x18013338C (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemD_ea_18013338C.c)
 *     ?ReevaluateItem@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@W7E$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180135550 (-ReevaluateItem@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?UpdateItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPEAUDataViewItemState@123456@@Z @ 0x1801368D0 (-UpdateItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::OnSwitchItemChanged(
        RTL_SRWLOCK *a1,
        unsigned __int64 a2)
{
  _QWORD *Ptr; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp+10h]

  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = a2;
  wil::srwlock::lock_exclusive(a1 + 7, &SRWLock);
  Ptr = a1[13].Ptr;
  v5 = (_QWORD *)Ptr[1];
  v6 = Ptr;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( v5[4] >= a2 )
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
    }
  }
  if ( v6 == Ptr || a2 < v6[4] )
    v6 = a1[13].Ptr;
  if ( v6 != Ptr )
    WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::UpdateItemState(
      a1,
      v6[5]);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( a2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 16LL))(a2);
}
