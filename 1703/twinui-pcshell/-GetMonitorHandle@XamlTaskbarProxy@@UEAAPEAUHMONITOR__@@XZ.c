/*
 * XREFs of ?GetMonitorHandle@XamlTaskbarProxy@@UEAAPEAUHMONITOR__@@XZ @ 0x1801285A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlTaskbarProxy::GetMonitorHandle(RTL_SRWLOCK *this)
{
  int v2; // eax
  __int64 v3; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 11, &SRWLock);
  v2 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)this[6].Ptr + 40LL))(this[6].Ptr, &v6);
  if ( v2 >= 0 )
  {
    v3 = v6;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarproxy.cpp",
      (const char *)(unsigned int)v2);
    v3 = 0LL;
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v3;
}
