/*
 * XREFs of ?SetFocus@AppViewSwitchItem@@UEAAX_N@Z @ 0x180164020
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall AppViewSwitchItem::SetFocus(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this - 13, &SRWLock);
  v4 = SRWLock;
  LOBYTE(this[8].Ptr) = a2;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::NotifyPropertyChanged(
    &this[-17],
    4LL);
}
