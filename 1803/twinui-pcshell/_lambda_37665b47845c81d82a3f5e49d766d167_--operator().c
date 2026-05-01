/*
 * XREFs of _lambda_37665b47845c81d82a3f5e49d766d167_::operator() @ 0x1801F7974
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167___::Run @ 0x1801F9220 (XamlExplorerHostWindowCreatedCallback__lambda_37665b47845c81d82a3f5e49d766d167___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801F73A8 (--$emplace_back@AEAV-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_37665b47845c81d82a3f5e49d766d167_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v9; // [rsp+60h] [rbp+18h]

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 232LL);
  AcquireSRWLockExclusive(v4);
  v9 = v4;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  v5 = (**a2)(a2, &GUID_f8e82291_6438_4724_8220_b95054cbeac9, &v7);
  if ( v5 >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      269LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v5);
  v8 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
  std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem> &>(
    *(_QWORD *)(a1 + 8) + 200LL,
    (__int64 *)&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
