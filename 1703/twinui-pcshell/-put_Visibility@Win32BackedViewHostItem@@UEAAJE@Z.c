/*
 * XREFs of ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1800E28F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A66C0 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIPresentation.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@@012@$$QEA_N@Z @ 0x1800E3DB4 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV-$ComP.c)
 *     ??$InvokeAll@QEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEBQEAVApplicationViewBackedViewHostItem@@$$QEAPEAVPresentationReadyChangedEventArgs@@@Z @ 0x1800E3E40 (--$InvokeAll@QEAVApplicationViewBackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$As.c)
 */

__int64 __fastcall Win32BackedViewHostItem::put_Visibility(Win32BackedViewHostItem *this, char a2)
{
  int ready; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  volatile signed __int64 *v6; // rcx
  volatile signed __int64 *v8; // rcx
  Win32BackedViewHostItem *v9; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char v11; // [rsp+58h] [rbp+28h] BYREF
  volatile signed __int64 *v12; // [rsp+60h] [rbp+30h] BYREF
  volatile signed __int64 *v13; // [rsp+68h] [rbp+38h] BYREF

  if ( a2 )
    return 0LL;
  v12 = 0LL;
  v11 = 0;
  ready = Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool>(
            &v12,
            &v11);
  v4 = ready;
  if ( ready >= 0 )
  {
    v13 = v12;
    v9 = this;
    ready = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem * const,PresentationReadyChangedEventArgs *>(
              (char *)this + 184,
              &v9,
              &v13);
    v4 = ready;
    if ( ready < 0 )
    {
      v5 = 111LL;
      goto LABEL_6;
    }
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v8);
    }
    return 0LL;
  }
  v5 = 110LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)ready);
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v6);
  }
  return v4;
}
