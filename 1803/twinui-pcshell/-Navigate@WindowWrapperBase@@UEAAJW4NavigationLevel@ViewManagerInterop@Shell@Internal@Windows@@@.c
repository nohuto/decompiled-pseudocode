/*
 * XREFs of ?Navigate@WindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F26F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_86226957380faec138486a0d7bb67cf3___ @ 0x1801EF35C (Windows--Internal--ComTaskPool--QueueTask__lambda_86226957380faec138486a0d7bb67cf3___.c)
 */

__int64 __fastcall WindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  char **v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v12; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    LODWORD(v12) = 0;
    v8 = a1 - 8;
    v9 = a2;
    v10 = &v12;
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_86226957380faec138486a0d7bb67cf3___(
           v4,
           v3,
           CurrentThreadId,
           (__int64)&v8);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        758LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5);
    v6 = (const char *)(unsigned int)v12;
    if ( (int)v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        759LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2FB,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
