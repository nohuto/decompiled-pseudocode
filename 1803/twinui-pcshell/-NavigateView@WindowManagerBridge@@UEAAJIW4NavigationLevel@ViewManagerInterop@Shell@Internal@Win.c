/*
 * XREFs of ?NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801EC3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_27c488e7e724f5c55d6bceab808aefe7___ @ 0x1801E8D34 (Windows--Internal--ComTaskPool--QueueTask__lambda_27c488e7e724f5c55d6bceab808aefe7___.c)
 */

__int64 __fastcall WindowManagerBridge::NavigateView(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  int v14; // [rsp+3Ch] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v16; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 168LL))(*(_QWORD *)(a1 + 280));
    LODWORD(v16) = 0;
    v12[0] = a1;
    v12[1] = &v16;
    v13 = a2;
    v14 = a3;
    CurrentThreadId = GetCurrentThreadId();
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_27c488e7e724f5c55d6bceab808aefe7___(
           v8,
           v7,
           CurrentThreadId,
           (__int64)v12);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        230LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    v10 = (const char *)(unsigned int)v16;
    if ( (int)v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        231LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEB,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v10);
  }
  return result;
}
