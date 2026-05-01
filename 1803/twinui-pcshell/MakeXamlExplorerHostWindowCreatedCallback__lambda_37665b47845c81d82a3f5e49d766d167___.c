/*
 * XREFs of MakeXamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167___ @ 0x1801F7200
 * Callers:
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1801F8A60 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_____lambda_37665b47845c81d82a3f5e49d766d167___ @ 0x1801F6FD4 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f.c)
 */

__int64 __fastcall MakeXamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_(
        __int64 *a1,
        _QWORD *a2)
{
  unsigned int v3; // ebx
  _QWORD *XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_____lambda_37665b47845c81d82a3f5e49d766d167; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a1 = 0LL;
  XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_____lambda_37665b47845c81d82a3f5e49d766d167 = Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_____lambda_37665b47845c81d82a3f5e49d766d167___(&v9, a2);
  if ( *XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_____lambda_37665b47845c81d82a3f5e49d766d167 )
    v5 = *XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_____lambda_37665b47845c81d82a3f5e49d766d167
       + 32LL;
  else
    v5 = 0LL;
  *XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167_____lambda_37665b47845c81d82a3f5e49d766d167 = 0LL;
  v6 = v9;
  v10 = v5;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
  {
    v10 = 0LL;
    *a1 = v5;
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\inc\\xamlexplorerhostwindowcreatedcallback.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v3;
}
