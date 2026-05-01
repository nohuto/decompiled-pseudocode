/*
 * XREFs of ?SetImportanceVectorUsingMask@WindowWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F3990
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a980ae989d2c044e8c882110ed14425d___ @ 0x1801EF410 (Windows--Internal--ComTaskPool--QueueTask__lambda_a980ae989d2c044e8c882110ed14425d___.c)
 */

__int64 __fastcall WindowWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]
  char **v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v14; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    LODWORD(v14) = 0;
    v9 = a1 - 32;
    v10 = a2;
    v11 = a3;
    v12 = &v14;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_a980ae989d2c044e8c882110ed14425d___(
           v5,
           v4,
           CurrentThreadId,
           (__int64)&v9);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1700LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    v7 = (const char *)(unsigned int)v14;
    if ( (int)v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1701LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6A9,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
