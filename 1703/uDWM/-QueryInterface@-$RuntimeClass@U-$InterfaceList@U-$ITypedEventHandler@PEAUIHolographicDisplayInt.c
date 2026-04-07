/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800737D0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal *,IInspectable *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  BOOL IsEqualGUID; // eax
  _QWORD *v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(v3, &GUID_5e0e0f13_d42c_5aec_9ef7_72c4325e435b);
    if ( IsEqualGUID )
      *v7 = v8;
    v9 = !IsEqualGUID ? 0x80004002 : 0;
    if ( IsEqualGUID )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  }
  return v9;
}
