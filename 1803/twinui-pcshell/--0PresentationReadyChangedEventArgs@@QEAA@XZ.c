/*
 * XREFs of ??0PresentationReadyChangedEventArgs@@QEAA@XZ @ 0x1801B5BE0
 * Callers:
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@$$QEA_N@Z @ 0x1801B4E84 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEAE@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEAE@Z @ 0x1801BB160 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEAE@Details@WRL@Microsoft@@YAJPEAPE.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

PresentationReadyChangedEventArgs *__fastcall PresentationReadyChangedEventArgs::PresentationReadyChangedEventArgs(
        PresentationReadyChangedEventArgs *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((PresentationReadyChangedEventArgs *)((char *)this + 8));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::`vftable'{for `IInspectable'};
  *v2 = &PresentationReadyChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &PresentationReadyChangedEventArgs::`vftable'{for `IInspectable'};
  *v2 = &PresentationReadyChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &PresentationReadyChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>'};
  return this;
}
