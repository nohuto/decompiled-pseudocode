/*
 * XREFs of ?get_ApplicationId@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180165960
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::get_ApplicationId(
        WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase *this,
        HSTRING *a2)
{
  HRESULT v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 4, &SRWLock);
    v4 = WindowsDuplicateString(*((HSTRING *)this + 7), a2);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemBase.h",
        (const char *)(unsigned int)v4);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2D,
                           (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemBase.h",
                           v5);
  }
  return result;
}
