/*
 * XREFs of ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180084DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::GetPositionerPriority(RTL_SRWLOCK *this, struct IShellPositionerPriority **a2)
{
  RTL_SRWLOCK *v2; // rdi
  unsigned int v5; // ebx
  PVOID Ptr; // rcx
  struct IShellPositionerPriority *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 5;
  AcquireSRWLockShared(this + 5);
  *a2 = 0LL;
  if ( this[12].Ptr )
  {
    Ptr = this[12].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v7 = (struct IShellPositionerPriority *)this[12].Ptr;
    v5 = 0;
    *a2 = v7;
  }
  else
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
