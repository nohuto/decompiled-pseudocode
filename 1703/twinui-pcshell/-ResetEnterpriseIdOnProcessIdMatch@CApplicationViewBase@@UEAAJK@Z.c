/*
 * XREFs of ?ResetEnterpriseIdOnProcessIdMatch@CApplicationViewBase@@UEAAJK@Z @ 0x180082500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::ResetEnterpriseIdOnProcessIdMatch(RTL_SRWLOCK *this, int a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  wil::srwlock::lock_exclusive(this + 2, &SRWLock);
  if ( (*((int (__fastcall **)(RTL_SRWLOCK *, int *))this[-2].Ptr + 51))(this - 2, &v8) < 0 || v8 == a2 )
  {
    LOBYTE(this[3].Ptr) = 1;
    v5 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))this[-2].Ptr + 50))(this - 2);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x113,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v5);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)v4);
    }
  }
  else
  {
    v4 = 0;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v4;
}
