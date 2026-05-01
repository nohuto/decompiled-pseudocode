/*
 * XREFs of _lambda_52ad470a58b3f9ae375edbc905fd06ea_::operator() @ 0x1801EFDC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52ad470a58b3f9ae375edbc905fd06ea___::Run @ 0x1801F3130 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_52ad470a58b3f9ae375edbc905fd06ea___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_52ad470a58b3f9ae375edbc905fd06ea_::operator()(_DWORD **a1)
{
  int v2; // ecx
  __int64 v3; // r8
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rdx
  int v7; // eax
  wil *v8; // rcx
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+40h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)*a1 + 39) + 152LL))(*((_QWORD *)*a1 + 39), &SRWLock);
    v2 = *((_DWORD *)a1 + 2);
    if ( (*a1)[74] != v2 )
    {
      (*a1)[74] = v2;
      v3 = (__int64)*a1;
      v4 = (*a1)[74];
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 1 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              1743LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
              (const char *)0x8000FFFFLL);
          v6 = 2LL;
        }
        else
        {
          v6 = 1LL;
        }
      }
      else
      {
        v6 = 0LL;
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 104) + 104LL))(*(_QWORD *)(v3 + 104), v6);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1746LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v7);
    }
    v8 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    *a1[2] = wil::ResultFromCaughtException(v8);
    v10 = (const char *)(unsigned int)*a1[2];
    v13 = (unsigned int)v10;
    if ( (int)v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D8,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v10);
    return v13;
  }
  return 0LL;
}
