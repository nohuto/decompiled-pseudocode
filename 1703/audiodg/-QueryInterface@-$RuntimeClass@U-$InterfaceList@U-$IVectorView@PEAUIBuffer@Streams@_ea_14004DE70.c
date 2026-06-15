/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004DE70
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F9F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAUIBuffer@Streams@Storage@Windo.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FA00 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAUIBuffer@Streams@_ea_14001FA00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140033484 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14004A458 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@U-$InterfaceList@UIWeakRef.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVectorView<Windows::Storage::Streams::IBuffer *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  const struct _GUID *v9; // r10
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_fd944562_11d6_5eab_bd72_701993b68fac) )
  {
    *v7 = v8;
    CanCastTo = 0;
LABEL_6:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo(
                v8 + 8,
                v9);
  if ( CanCastTo >= 0 )
    goto LABEL_6;
  return (unsigned int)CanCastTo;
}
