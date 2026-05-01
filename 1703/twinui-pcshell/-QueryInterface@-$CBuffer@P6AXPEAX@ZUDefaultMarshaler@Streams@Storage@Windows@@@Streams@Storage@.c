/*
 * XREFs of ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010ECC0
 * Callers:
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010EFA0 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_18010EFA0.c)
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010EFE0 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_18010EFE0.c)
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010F040 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_18010F040.c)
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010F070 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_18010F070.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::QueryInterface()
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Storage::Streams::IBuffer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<19>,1,1,0>::QueryInterface();
}
