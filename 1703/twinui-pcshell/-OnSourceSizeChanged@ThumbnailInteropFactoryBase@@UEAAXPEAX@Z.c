/*
 * XREFs of ?OnSourceSizeChanged@ThumbnailInteropFactoryBase@@UEAAXPEAX@Z @ 0x180167B30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E960 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800BF584 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@PEAUIFocusNavigateEventArgs@Experience@Shell@In.c)
 *     ??$MakeOrThrow@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@wil@@YA?AV?$ComPtr@VThumbnailSourceEventArgs@@@WRL@Microsoft@@$$QEAPEAUHSTRING__@@@Z @ 0x1801683F4 (--$MakeOrThrow@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@wil@@YA-AV-$ComPtr@VThumbnailSourceEve.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ThumbnailInteropFactoryBase::OnSourceSizeChanged(
        RTL_SRWLOCK *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  void **i; // rax
  HRESULT v6; // eax
  int v7; // eax
  volatile signed __int64 *v8; // rcx
  volatile signed __int64 *v9; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  HSTRING string; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10[1] = -2LL;
  try
  {
    for ( i = (void **)this[6].Ptr; i != this[7].Ptr && *i != a2; ++i )
      ;
    if ( i != this[7].Ptr )
    {
      string = 0LL;
      v6 = WindowsCreateStringReference(L"SourceSize", 0xAu, &hstringHeader, &string);
      if ( v6 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
      v10[0] = string;
      wil::MakeOrThrow<ThumbnailSourceEventArgs,HSTRING__ *>(&v9, v10);
      string = 0LL;
      v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>(
             this + 3,
             (__int64)&this[-2],
             (__int64)v9);
      if ( v7 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x5D,
          (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\factory.cpp",
          (const char *)(unsigned int)v7);
      v8 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v8);
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\factory.cpp",
      a4);
  }
}
