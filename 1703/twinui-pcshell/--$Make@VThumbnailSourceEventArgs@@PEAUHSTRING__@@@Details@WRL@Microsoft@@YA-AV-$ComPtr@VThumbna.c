/*
 * XREFs of ??$Make@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailSourceEventArgs@@@12@$$QEAPEAUHSTRING__@@@Z @ 0x180168748
 * Callers:
 *     ??$MakeOrThrow@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@wil@@YA?AV?$ComPtr@VThumbnailSourceEventArgs@@@WRL@Microsoft@@$$QEAPEAUHSTRING__@@@Z @ 0x1801683F4 (--$MakeOrThrow@VThumbnailSourceEventArgs@@PEAUHSTRING__@@@wil@@YA-AV-$ComPtr@VThumbnailSourceEve.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E960 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@.c)
 *     ??0ThumbnailSourceEventArgs@@QEAA@PEAUHSTRING__@@@Z @ 0x18016764C (--0ThumbnailSourceEventArgs@@QEAA@PEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int64 **__fastcall Microsoft::WRL::Details::Make<ThumbnailSourceEventArgs,HSTRING__ *>(
        volatile signed __int64 **a1,
        HSTRING *a2)
{
  ThumbnailSourceEventArgs *v4; // rax
  ThumbnailSourceEventArgs *v5; // rdi

  *a1 = 0LL;
  v4 = (ThumbnailSourceEventArgs *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = ThumbnailSourceEventArgs::ThumbnailSourceEventArgs(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(*a1);
    *a1 = (volatile signed __int64 *)v5;
  }
  return a1;
}
