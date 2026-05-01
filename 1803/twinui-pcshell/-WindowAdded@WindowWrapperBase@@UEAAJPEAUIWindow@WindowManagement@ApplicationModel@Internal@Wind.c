/*
 * XREFs of ?WindowAdded@WindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1801F4670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_84ae6e21f9379359c5dabe643d80e783___ @ 0x1801EF2AC (Windows--Internal--ComTaskPool--QueueTask__lambda_84ae6e21f9379359c5dabe643d80e783___.c)
 */

__int64 __fastcall WindowWrapperBase::WindowAdded(__int64 a1, __int64 a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  char **v14; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v16; // [rsp+60h] [rbp+8h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 168LL))(*(_QWORD *)(a1 + 296));
    LODWORD(v16) = 0;
    *(_QWORD *)&v12 = a1 - 16;
    *((_QWORD *)&v12 + 1) = a2;
    v13 = a3;
    v14 = &v16;
    CurrentThreadId = GetCurrentThreadId();
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_84ae6e21f9379359c5dabe643d80e783___(
           v8,
           v7,
           CurrentThreadId,
           &v12);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1171LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9);
    v10 = (const char *)(unsigned int)v16;
    if ( (int)v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1172LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x498,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v10);
  }
  return result;
}
