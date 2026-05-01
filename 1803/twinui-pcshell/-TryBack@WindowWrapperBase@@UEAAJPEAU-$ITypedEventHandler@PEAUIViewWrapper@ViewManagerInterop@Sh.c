/*
 * XREFs of ?TryBack@WindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x1801F4440
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d69c6045195ff860b1c2e6c344d418ce___ @ 0x1801EF62C (Windows--Internal--ComTaskPool--QueueTask__lambda_d69c6045195ff860b1c2e6c344d418ce___.c)
 */

__int64 __fastcall WindowWrapperBase::TryBack(__int64 a1, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v10; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    if ( !*(_QWORD *)(a1 + 328) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        778LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
    LODWORD(v10) = 0;
    v8[0] = a1 - 8;
    v8[1] = a2;
    v8[2] = &v10;
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_d69c6045195ff860b1c2e6c344d418ce___(
           v4,
           v3,
           CurrentThreadId,
           (__int64)v8);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        839LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5);
    v6 = (const char *)(unsigned int)v10;
    if ( (int)v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        840LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x34C,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
