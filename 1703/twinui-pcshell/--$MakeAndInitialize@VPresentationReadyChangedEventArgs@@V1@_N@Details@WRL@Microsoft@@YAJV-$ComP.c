/*
 * XREFs of ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@@012@$$QEA_N@Z @ 0x1800E3DB4
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1800E28F0 (-put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z.c)
 *     ?RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ @ 0x1800E3030 (-RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1800E5DD0 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 *     ?RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E6B70 (-RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D7D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A66C0 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIPresentation.c)
 *     ??0PresentationReadyChangedEventArgs@@QEAA@XZ @ 0x1800E521C (--0PresentationReadyChangedEventArgs@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool>(
        volatile signed __int64 **a1,
        _BYTE *a2)
{
  unsigned int v3; // esi
  volatile signed __int64 *v4; // rcx
  PresentationReadyChangedEventArgs *v6; // rax
  PresentationReadyChangedEventArgs *v7; // rdi

  v3 = 0;
  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v4);
  }
  *a1 = 0LL;
  v6 = (PresentationReadyChangedEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = PresentationReadyChangedEventArgs::PresentationReadyChangedEventArgs(v6);
    *((_BYTE *)v7 + 64) = *a2;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef((__int64)v7);
    *a1 = (volatile signed __int64 *)v7;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
