/*
 * XREFs of ??$AsIID@V?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180072A50
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073EA0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$Implements@U-$RuntimeClassFlags@_ea_180073EA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800737D0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>>(
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
  unsigned int v9; // ebx
  const struct _GUID *v10; // rcx
  __int64 v11; // r9
  int IsEqualGUID; // eax
  __int64 v13; // r9

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_793dd759_8c83_5494_b866_e64f1df94084) )
    {
      *v7 = v8;
      v9 = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
      {
        *v7 = v11;
        v9 = 0;
      }
      else
      {
        IsEqualGUID = InlineIsEqualGUID(v10, &GUID_00000003_0000_0000_c000_000000000046);
        if ( IsEqualGUID )
          *v7 = v13;
        v9 = IsEqualGUID == 0 ? 0x80004002 : 0;
      }
      if ( (v9 & 0x80000000) != 0 )
        return v9;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return v9;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
