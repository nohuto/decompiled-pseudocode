/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14004A458
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004DB20 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAUIBuffer@Streams@Storage@Windows@@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004DE70 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAUIBuffer@Streams@_ea_14004DE70.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140033484 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r10

  if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_902972bf_a984_5443_b1c5_2f04a99e1fca) )
      *v6 = v8 + 8;
    else
      return (unsigned int)-2147467262;
    return v7;
  }
}
