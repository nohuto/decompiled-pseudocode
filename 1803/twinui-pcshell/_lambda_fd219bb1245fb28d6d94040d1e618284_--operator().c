/*
 * XREFs of _lambda_fd219bb1245fb28d6d94040d1e618284_::operator() @ 0x1801F19F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd219bb1245fb28d6d94040d1e618284___::Run @ 0x1801F32C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd219bb1245fb28d6d94040d1e618284___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z @ 0x1801F2BD0 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_fd219bb1245fb28d6d94040d1e618284_::operator()(_QWORD *a1)
{
  int *v2; // rdx
  wil *v3; // rcx
  const char *v5; // r9
  float v6[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    *(_OWORD *)v6 = 0uLL;
    v2 = (int *)a1[1];
    v6[2] = (float)(v2[2] - *v2);
    v6[3] = (float)(v2[3] - v2[1]);
    v6[0] = (float)*v2;
    v6[1] = (float)v2[1];
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 312LL) + 152LL))(
      *(_QWORD *)(*a1 + 312LL),
      &SRWLock);
    WindowWrapperBase::PushBoundsToWindow(*a1, v6);
    v3 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    *(_DWORD *)a1[2] = wil::ResultFromCaughtException(v3);
    v5 = (const char *)*(unsigned int *)a1[2];
    v10 = (unsigned int)v5;
    if ( (int)v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v5);
    return v10;
  }
  return 0LL;
}
