/*
 * XREFs of ?OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II@Z @ 0x18002A660
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x1800271A4 (--$InvokeAll@PEAVMPCManagerClient@@PEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@.c)
 *     ??0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK@Z @ 0x180029E10 (--0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029ED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHom_ea_180029ED0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnHomeGestureDetected(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        int a3,
        int a4)
{
  __int64 v4; // rsi
  Windows::Internal::Input::MPCManager::HomeGestureEventArgs *v5; // rbx
  Windows::Internal::Input::MPCManager::HomeGestureEventArgs *v8; // rax
  volatile signed __int64 *v9; // rdi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 7);
  v5 = 0LL;
  v8 = (Windows::Internal::Input::MPCManager::HomeGestureEventArgs *)operator new(
                                                                       0x50uLL,
                                                                       (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
  {
    v5 = Windows::Internal::Input::MPCManager::HomeGestureEventArgs::HomeGestureEventArgs(v8, a3, a4, 0);
    v9 = (volatile signed __int64 *)v5;
  }
  v10 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>(
          v4 + 1064,
          v4,
          (__int64)v5);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x18002A70BLL);
  }
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(v9);
  return 0LL;
}
