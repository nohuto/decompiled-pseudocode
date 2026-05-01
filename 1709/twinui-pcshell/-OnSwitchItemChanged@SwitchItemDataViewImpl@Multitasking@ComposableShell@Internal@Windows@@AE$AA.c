/*
 * XREFs of ?OnSwitchItemChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@W4SwitchItemProperty@2345@@Z @ 0x180161A90
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPE$AAUISwitchItem@2345@@Z @ 0x1801616BC (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateItem@-.c)
 *     ?ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@W7E$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180161B60 (-ReevaluateItem@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemD.c)
 * Callees:
 *     ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x18016A7FC (-UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::OnSwitchItemChanged(
        RTL_SRWLOCK *a1,
        unsigned __int64 a2)
{
  _QWORD *Ptr; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  if ( a2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 8LL))(a2);
  AcquireSRWLockExclusive(a1 + 7);
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
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateItemState(a1, v6[5]);
  if ( a1 != (RTL_SRWLOCK *)-56LL )
    ReleaseSRWLockExclusive(a1 + 7);
  if ( a2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 16LL))(a2);
}
