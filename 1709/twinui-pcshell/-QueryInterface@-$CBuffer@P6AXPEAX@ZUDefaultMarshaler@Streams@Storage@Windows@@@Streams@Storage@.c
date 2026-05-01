/*
 * XREFs of ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180139130
 * Callers:
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180139270 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_180139270.c)
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801392B0 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_1801392B0.c)
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180139310 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_180139310.c)
 *     ?QueryInterface@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180139340 (-QueryInterface@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Str_ea_180139340.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::QueryInterface()
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::QueryInterface();
}
