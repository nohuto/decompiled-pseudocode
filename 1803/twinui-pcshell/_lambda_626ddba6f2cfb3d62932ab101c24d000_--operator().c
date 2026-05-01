/*
 * XREFs of _lambda_626ddba6f2cfb3d62932ab101c24d000_::operator() @ 0x1801EB5E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_626ddba6f2cfb3d62932ab101c24d000___::Run @ 0x1801ED790 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_626ddba6f2cfb3d62932ab101c24d000___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_626ddba6f2cfb3d62932ab101c24d000_::operator()(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  wil *v4; // rcx
  int v5; // eax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h]
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 16) + 136LL))(
           *(_QWORD *)(a1 + 16),
           &v11);
    v3 = 0;
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        248LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v2);
    v4 = (wil *)v11;
    if ( v11 )
    {
      if ( v11 == 1 )
        **(_DWORD **)(a1 + 24) = 4;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 16) + 112LL))(*(_QWORD *)(a1 + 16), &v12);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          260LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v5);
      v4 = *(wil **)(a1 + 24);
      if ( (unsigned int)(v12 - 2) <= 1 )
        v3 = 2;
      *(_DWORD *)v4 = v3;
    }
  }
  catch ( ... )
  {
    **(_DWORD **)(a1 + 8) = wil::ResultFromCaughtException(v4);
    v7 = (const char *)**(unsigned int **)(a1 + 8);
    v10 = (unsigned int)v7;
    if ( (int)v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v7);
    return v10;
  }
  return 0LL;
}
