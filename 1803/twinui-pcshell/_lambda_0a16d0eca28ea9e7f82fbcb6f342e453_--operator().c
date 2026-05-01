/*
 * XREFs of _lambda_0a16d0eca28ea9e7f82fbcb6f342e453_::operator() @ 0x1801EFBE8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0a16d0eca28ea9e7f82fbcb6f342e453___::Run @ 0x1801F3110 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0a16d0eca28ea9e7f82fbcb6f342e453___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z @ 0x1801F2BD0 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0a16d0eca28ea9e7f82fbcb6f342e453_::operator()(_DWORD **a1)
{
  int *v2; // rdx
  _QWORD **v3; // rcx
  wil *v4; // rcx
  const char *v6; // r9
  float v7[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    *(_OWORD *)v7 = 0uLL;
    v2 = a1[1];
    v7[0] = (float)*v2;
    v7[1] = (float)v2[1];
    v7[2] = (float)(v2[2] - *v2);
    v7[3] = (float)(v2[3] - v2[1]);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)*a1 + 39) + 152LL))(*((_QWORD *)*a1 + 39), &SRWLock);
    v3 = (_QWORD **)*a1;
    if ( (*a1)[32] != 3 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        171LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
    WindowWrapperBase::PushBoundsToWindow(v3, v7);
    v4 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    *a1[2] = wil::ResultFromCaughtException(v4);
    v6 = (const char *)(unsigned int)*a1[2];
    v11 = (unsigned int)v6;
    if ( (int)v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v6);
    return v11;
  }
  return 0LL;
}
