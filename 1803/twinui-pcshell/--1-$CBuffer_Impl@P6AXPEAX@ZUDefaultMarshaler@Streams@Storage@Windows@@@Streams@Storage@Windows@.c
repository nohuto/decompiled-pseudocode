/*
 * XREFs of ??1?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@MEAA@XZ @ 0x1800F2058
 * Callers:
 *     ??_E?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@MEAAPEAXI@Z @ 0x1801DB980 (--_E-$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::~CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<19>,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)(a1 + 24) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,IMarshal>'};
  *(_QWORD *)(a1 + 32) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  (*(void (__fastcall **)(_QWORD))(a1 + 96))(*(_QWORD *)(a1 + 80));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 104));
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>(a1);
}
