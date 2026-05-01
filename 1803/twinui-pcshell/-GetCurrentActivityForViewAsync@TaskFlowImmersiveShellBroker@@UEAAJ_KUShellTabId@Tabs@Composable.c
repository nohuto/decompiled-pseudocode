/*
 * XREFs of ?GetCurrentActivityForViewAsync@TaskFlowImmersiveShellBroker@@UEAAJ_KUShellTabId@Tabs@ComposableShell@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@6@@Z @ 0x1801A4C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_____ptr64_Windows::Internal::ComTaskPoolHandler__lambda_f33a94428958f3f7841ab3d6e86fff3c___ @ 0x1801A21B4 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::GetCurrentActivityForViewAsync(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 *a4)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int128 v9; // xmm0
  int v10; // eax
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  __int128 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int128 v16; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  try
  {
    if ( *(_DWORD *)(a1 + 176) != 1 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        329LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)0x80004004LL);
    v18 = *(_QWORD *)(a1 + 184);
    v7 = v18;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v18);
    v9 = *a3;
    if ( !v7 )
    {
      v15 = a2;
      v16 = v9;
      *(_QWORD *)&v14 = 0x8000000003LL;
      DWORD2(v14) = 0;
      v10 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults__Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_____ptr64_Windows::Internal::ComTaskPoolHandler__lambda_f33a94428958f3f7841ab3d6e86fff3c___(
              (__int64)&v14,
              a4,
              v8,
              (__int64)&v15);
      if ( v10 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        return 0LL;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        354LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v10);
    }
    v14 = v9;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(*(_QWORD *)v7 + 72LL))(v7, a2, &v14, a4);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        358LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v11);
    goto LABEL_9;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x16B,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v12);
  }
  return result;
}
