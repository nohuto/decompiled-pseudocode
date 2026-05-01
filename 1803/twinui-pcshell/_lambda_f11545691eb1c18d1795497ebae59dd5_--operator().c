/*
 * XREFs of _lambda_f11545691eb1c18d1795497ebae59dd5_::operator() @ 0x180226074
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f11545691eb1c18d1795497ebae59dd5___::Run @ 0x1802287F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f11545691eb1c18d1795497ebae59dd5___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180071178 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f11545691eb1c18d1795497ebae59dd5_::operator()(__int64 (**this)(void))
{
  HWND WindowW; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v6; // [rsp+48h] [rbp+10h] BYREF

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !WindowW || GetPropW(WindowW, L"IsExplorerShuttingDown") )
    return this[1]();
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  v3 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)this, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, &v6, 0);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      58LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
}
