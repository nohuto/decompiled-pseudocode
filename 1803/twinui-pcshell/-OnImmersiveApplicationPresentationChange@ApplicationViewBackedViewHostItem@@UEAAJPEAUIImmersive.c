/*
 * XREFs of ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x1801BBFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplicationHolographic@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationHolographic@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F7988 (--$As@UIImmersiveApplicationHolographic@@@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJ.c)
 *     ?InternalRelease@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7A28 (-InternalRelease@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEB$$T@Z @ 0x1801BAA18 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@-$AsyncEventSourceT@U-$ITypedEventH.c)
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@@AEBQEAVPresentationReadyChangedEventArgs@@@Z @ 0x1801BAC54 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAVPresentationReadyChangedEventArgs@@@-$AsyncEv.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEAE@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEAE@Z @ 0x1801BB160 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEAE@Details@WRL@Microsoft@@YAJPEAPE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::OnImmersiveApplicationPresentationChange(
        _QWORD *a1,
        __int64 a2,
        int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int ready; // eax
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  _QWORD *v14; // [rsp+60h] [rbp+20h] BYREF
  int v15; // [rsp+68h] [rbp+28h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v15 = 0;
  if ( (*(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)a2 + 104LL))(a2, a1[10], &v15) < 0 || !v15 )
    return 0LL;
  v11 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IImmersiveApplication>::As<IImmersiveApplicationHolographic>(a1 + 10, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 633LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v5);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    return v6;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v14 = 0LL;
      v16 = a1 - 4;
      v5 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,std::nullptr_t>(
             a1 + 41,
             (volatile int *)&v16,
             (__int64)&v14);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 660LL;
        goto LABEL_5;
      }
    }
    goto LABEL_18;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11) )
  {
    LOBYTE(v14) = 1;
    v16 = 0LL;
    Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease((__int64 *)&v16);
    ready = Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,unsigned char &>(
              &v16,
              &v14);
    v6 = ready;
    if ( ready < 0 )
    {
      v9 = 650LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease((__int64 *)&v16);
      goto LABEL_16;
    }
    v14 = v16;
    v12[0] = (__int64)(a1 - 4);
    ready = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Win32BackedViewHostItem *,PresentationReadyChangedEventArgs *>(
              a1 + 25,
              v12,
              (__int64 *)&v14);
    v6 = ready;
    if ( ready < 0 )
    {
      v9 = 651LL;
      goto LABEL_15;
    }
    Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease((__int64 *)&v16);
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return 0LL;
}
