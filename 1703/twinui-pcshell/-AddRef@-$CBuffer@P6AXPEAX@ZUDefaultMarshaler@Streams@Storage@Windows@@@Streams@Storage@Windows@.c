/*
 * XREFs of ?AddRef@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAKXZ @ 0x18010ECA0
 * Callers:
 *     ?AddRef@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAKXZ @ 0x18010EF90 (-AddRef@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Sto_ea_18010EF90.c)
 *     ?AddRef@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBA@EAAKXZ @ 0x18010EFD0 (-AddRef@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Sto_ea_18010EFD0.c)
 *     ?AddRef@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WBI@EAAKXZ @ 0x18010F030 (-AddRef@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Sto_ea_18010F030.c)
 *     ?AddRef@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@WCA@EAAKXZ @ 0x18010F060 (-AddRef@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Sto_ea_18010F060.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(a1);
}
