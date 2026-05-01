/*
 * XREFs of ?ChangeBounds@WindowWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F1C90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d98ae836108ed552b593978131d342d_____lambda_9d98ae836108ed552b593978131d342d___ @ 0x1801EEA14 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d98ae836108e.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::ChangeBounds(__int64 a1, __int128 *a2)
{
  DWORD CurrentThreadId; // edi
  struct Windows::Internal::IComPoolTask **v3; // rax
  struct Windows::Internal::IComPoolTask *v4; // rbx
  __int64 v5; // rcx
  int v6; // ebx
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF
  __int128 v10; // [rsp+48h] [rbp-40h]
  __int128 v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-18h]
  char **v14; // [rsp+78h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v16; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+98h] [rbp+10h] BYREF
  struct Windows::Internal::IComPoolTask *v18; // [rsp+A0h] [rbp+18h] BYREF

  try
  {
    LODWORD(v16) = 0;
    v9 = a1 - 8;
    v10 = *a2;
    v11 = a2[1];
    v12 = *((_QWORD *)a2 + 4);
    v13 = *((_DWORD *)a2 + 10);
    v14 = &v16;
    CurrentThreadId = GetCurrentThreadId();
    v3 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d98ae836108ed552b593978131d342d_____lambda_9d98ae836108ed552b593978131d342d___(
                                                      &v17,
                                                      &v9);
    v4 = *v3;
    v18 = *v3;
    *v3 = 0LL;
    v5 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = Windows::Internal::ComTaskPool::RunTask(6u, 0x20u, CurrentThreadId, 0, v4, 0LL);
    Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v18);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        556LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    v7 = (const char *)(unsigned int)v16;
    if ( (int)v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        557LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v16);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x230,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v7);
    return (unsigned int)v16;
  }
  return result;
}
