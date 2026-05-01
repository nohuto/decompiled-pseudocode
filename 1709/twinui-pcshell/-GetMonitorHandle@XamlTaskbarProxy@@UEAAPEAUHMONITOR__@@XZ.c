/*
 * XREFs of ?GetMonitorHandle@XamlTaskbarProxy@@UEAAPEAUHMONITOR__@@XZ @ 0x180152910
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlTaskbarProxy::GetMonitorHandle(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // eax
  __int64 v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+48h] [rbp+10h]

  v2 = this + 13;
  AcquireSRWLockShared(this + 13);
  v8 = v2;
  v3 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)this[8].Ptr + 40LL))(this[8].Ptr, &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarproxy.cpp",
      (const char *)(unsigned int)v3);
    v4 = 0LL;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v4;
}
