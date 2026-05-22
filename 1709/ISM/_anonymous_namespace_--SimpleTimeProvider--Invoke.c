/*
 * XREFs of _anonymous_namespace_::SimpleTimeProvider::Invoke @ 0x1800C3D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::SimpleTimeProvider::Invoke(struct _RTL_CRITICAL_SECTION *a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  HANDLE LockSemaphore; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1 + 2;
  EnterCriticalSection(a1 + 2);
  LockSemaphore = a1[1].LockSemaphore;
  if ( LockSemaphore
    && (v4 = (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)LockSemaphore + 24LL))(LockSemaphore), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7F,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractioncontroller.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v5;
}
