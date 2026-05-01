/*
 * XREFs of ??1?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@MEAA@XZ @ 0x18010E918
 * Callers:
 *     ??_G?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAPEAXI@Z @ 0x18010ED60 (--_G-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEA.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::~CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)a1 = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable';
  *(_QWORD *)(a1 + 8) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *(_QWORD *)(a1 + 24) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `IMarshal'};
  *(_QWORD *)(a1 + 32) = &Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<19>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 88))(*(_QWORD *)(a1 + 72));
  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 96) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 < 0 )
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v4));
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
