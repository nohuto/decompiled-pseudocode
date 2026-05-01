/*
 * XREFs of ?get_IconFactory@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJPEAPEAUIIconFactory@23456@@Z @ 0x180165860
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::get_IconFactory(
        RTL_SRWLOCK *this,
        struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IIconFactory **a2)
{
  const char *v4; // r9
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IIconFactory *Ptr; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 4, &SRWLock);
    Ptr = (struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IIconFactory *)this[10].Ptr;
    if ( Ptr )
    {
      *a2 = Ptr;
      (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IIconFactory *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    }
    else
    {
      *a2 = 0LL;
    }
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x43,
                           (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemBase.h",
                           v4);
  }
  return result;
}
