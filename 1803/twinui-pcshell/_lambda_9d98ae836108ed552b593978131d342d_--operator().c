/*
 * XREFs of _lambda_9d98ae836108ed552b593978131d342d_::operator() @ 0x1801F0DC8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d98ae836108ed552b593978131d342d___::Run @ 0x1801F3240 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d98ae836108ed552b593978131d342d___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z @ 0x1801F2BD0 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9d98ae836108ed552b593978131d342d_::operator()(int *a1)
{
  wil *v2; // rcx
  const char *v4; // r9
  float v5[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    *(_OWORD *)v5 = 0uLL;
    v5[0] = (float)a1[6];
    v5[1] = (float)a1[7];
    v5[2] = (float)a1[2];
    v5[3] = (float)a1[3];
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)a1 + 312LL) + 152LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 312LL),
      &SRWLock);
    WindowWrapperBase::PushBoundsToWindow(*(_QWORD *)a1, v5);
    v2 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    **((_DWORD **)a1 + 7) = wil::ResultFromCaughtException(v2);
    v4 = (const char *)**((unsigned int **)a1 + 7);
    v9 = (unsigned int)v4;
    if ( (int)v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x228,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v4);
    return v9;
  }
  return 0LL;
}
