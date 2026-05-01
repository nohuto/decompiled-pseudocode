/*
 * XREFs of ?BoostPriority@WindowWrapperBase@@UEAAJXZ @ 0x1801F1BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_795a819b32f774d3329ac417b6862537___ @ 0x1801EF0BC (Windows--Internal--ComTaskPool--QueueTask__lambda_795a819b32f774d3329ac417b6862537___.c)
 */

__int64 __fastcall WindowWrapperBase::BoostPriority(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v9; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    LODWORD(v9) = 0;
    *(_QWORD *)&v7 = (char *)this - 32;
    *((_QWORD *)&v7 + 1) = &v9;
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_795a819b32f774d3329ac417b6862537___(
           v3,
           v2,
           CurrentThreadId,
           &v7);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1525LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4);
    v5 = (const char *)(unsigned int)v9;
    if ( (int)v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1526LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5FA,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
