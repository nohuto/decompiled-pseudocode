/*
 * XREFs of ?EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ @ 0x18004FAF0
 * Callers:
 *     ?EnsurePositionOffset@CTaskWindow@@UEAAJXZ @ 0x180047B90 (-EnsurePositionOffset@CTaskWindow@@UEAAJXZ.c)
 * Callees:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18005B694 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::EnsurePositionOffset(ViewWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // r8d
  int v4; // esi
  int cy; // ebp
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)(*((_QWORD *)this + 21) + 296LL);
  AcquireSRWLockExclusive(v2);
  if ( *((_QWORD *)this + 33) && (*(unsigned __int8 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 104LL))(this) )
  {
    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 96LL))(this);
    v3 = *((_DWORD *)this + 50);
    v4 = *((_DWORD *)this + 52) - v3;
    cy = *((_DWORD *)this + 53) - *((_DWORD *)this + 51);
    if ( SetWindowPos(*((HWND *)this + 33), 0LL, v3, *((_DWORD *)this + 51), v4, cy, 0x14415u) )
      WindowReadyState::PosChanged((ViewWrapperBase *)((char *)this + 352), v4, cy);
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x938,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        v6);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
