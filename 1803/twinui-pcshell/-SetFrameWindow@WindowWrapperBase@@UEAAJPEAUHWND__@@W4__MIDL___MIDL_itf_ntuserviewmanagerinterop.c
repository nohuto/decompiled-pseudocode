/*
 * XREFs of ?SetFrameWindow@WindowWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x1801F38A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ebf472f1599809bdbab25f70af63208e___ @ 0x1801EF83C (Windows--Internal--ComTaskPool--QueueTask__lambda_ebf472f1599809bdbab25f70af63208e___.c)
 */

__int64 __fastcall WindowWrapperBase::SetFrameWindow(__int64 a1, __int64 a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  char **v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v13; // [rsp+70h] [rbp+18h] BYREF

  try
  {
    LODWORD(v13) = 0;
    *(_QWORD *)&v9 = a1 - 56;
    *((_QWORD *)&v9 + 1) = a2;
    v10 = a3;
    v11 = &v13;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_ebf472f1599809bdbab25f70af63208e___(
           v5,
           v4,
           CurrentThreadId,
           &v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2002LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    v7 = (const char *)(unsigned int)v13;
    if ( (int)v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2003LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v13);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v13) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x7D7,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v7);
    return (unsigned int)v13;
  }
  return result;
}
