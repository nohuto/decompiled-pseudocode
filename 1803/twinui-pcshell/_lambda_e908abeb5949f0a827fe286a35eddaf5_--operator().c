/*
 * XREFs of _lambda_e908abeb5949f0a827fe286a35eddaf5_::operator() @ 0x1801F178C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e908abeb5949f0a827fe286a35eddaf5___::Run @ 0x1801F32A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e908abeb5949f0a827fe286a35eddaf5___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z @ 0x1801F2BD0 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e908abeb5949f0a827fe286a35eddaf5_::operator()(_DWORD **a1)
{
  _QWORD **v2; // rcx
  wil *v3; // rcx
  const char *v5; // r9
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)*a1 + 39) + 152LL))(*((_QWORD *)*a1 + 39), &SRWLock);
    v6 = 0uLL;
    *((_QWORD *)&v6 + 1) = a1[1];
    v2 = (_QWORD **)*a1;
    if ( (*a1)[32] != 3 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        345LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
    WindowWrapperBase::PushBoundsToWindow(v2, &v6);
    v3 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    *a1[2] = wil::ResultFromCaughtException(v3);
    v5 = (const char *)(unsigned int)*a1[2];
    v10 = (unsigned int)v5;
    if ( (int)v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v5);
    return v10;
  }
  return 0LL;
}
