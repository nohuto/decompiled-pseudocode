/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x1801B4954
 * Callers:
 *     ?add_PresentationReadyChanged@Win32BackedViewHostItem@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801B9E10 (-add_PresentationReadyChanged@Win32BackedViewHostItem@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewHo.c)
 *     ?add_PresentationReadyChanged@ApplicationViewBackedViewHostItem@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801BDBA0 (-add_PresentationReadyChanged@ApplicationViewBackedViewHostItem@@UEAAJPEAU-$ITypedEventHandler@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x1801B5840 (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Inte_ea_1801B5840.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  void *v4; // rax
  __int64 *ready; // rdi
  void *v6; // rbx
  signed int AgileReference; // ebx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  ready = 0LL;
  v6 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x38uLL);
    ready = (__int64 *)Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>>,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>>,2>(v6);
  }
  AgileReference = ready == 0LL ? 0x8007000E : 0;
  if ( ready )
  {
    v8 = ready + 6;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(ready + 6);
    AgileReference = 0;
    if ( a1 )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
      AgileReference = RoGetAgileReference(0LL, &GUID_3c914166_da8a_54d6_983b_f140005dd9a2, a1, &v11);
      if ( AgileReference >= 0 )
      {
        v9 = *v8;
        *v8 = v11;
        v11 = v9;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
    }
    if ( AgileReference >= 0 )
      AgileReference = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*ready)(
                         ready,
                         &GUID_3c914166_da8a_54d6_983b_f140005dd9a2,
                         a2);
    (*(void (__fastcall **)(__int64 *))(*ready + 16))(ready);
  }
  return (unsigned int)AgileReference;
}
