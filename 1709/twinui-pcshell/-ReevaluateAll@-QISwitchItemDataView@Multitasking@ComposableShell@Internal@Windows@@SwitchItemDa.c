/*
 * XREFs of ?ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAXXZ @ 0x180161BE4
 * Callers:
 *     ?ReevaluateAll@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@W7E$AAAXXZ @ 0x180161C30 (-ReevaluateAll@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@_ea_180161C30.c)
 * Callees:
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x180161B6C (-UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _ReevaluateAll__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAXXZ(
        RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = a1 + 7;
  AcquireSRWLockExclusive(a1 + 7);
  Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateAllItemState((__int64)a1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
