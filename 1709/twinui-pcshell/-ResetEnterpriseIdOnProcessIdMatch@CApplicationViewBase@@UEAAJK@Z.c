/*
 * XREFs of ?ResetEnterpriseIdOnProcessIdMatch@CApplicationViewBase@@UEAAJK@Z @ 0x1800854E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::ResetEnterpriseIdOnProcessIdMatch(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+18h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v10 = v4;
  if ( (*((int (__fastcall **)(RTL_SRWLOCK *, int *))this[-2].Ptr + 51))(this - 2, &v9) < 0 || v9 == a2 )
  {
    LOBYTE(this[4].Ptr) = 1;
    v6 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))this[-2].Ptr + 50))(this - 2);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x113,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v6);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)v5);
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v5;
}
