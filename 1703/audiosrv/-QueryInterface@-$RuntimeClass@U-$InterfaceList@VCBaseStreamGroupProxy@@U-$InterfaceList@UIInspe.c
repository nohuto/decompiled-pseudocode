/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008A20
 * Callers:
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800086F0 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000B980 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058510 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$Interfac_ea_180058510.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058520 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$Interfac_ea_180058520.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058530 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$Interfac_ea_180058530.c)
 * Callees:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008B10 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@UIInspectable@@.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002E070 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@UIWeakRef.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  int IsEqualGUID; // eax
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned int CanCastTo; // edi
  void (__fastcall *v12)(__int64, __int64, _QWORD *, __int64); // rax

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_DWORD *)a2
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*(_DWORD *)a2 != -1350114592
     || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( (unsigned int)InlineIsEqualGUID((const struct _GUID *)a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v5 = v6;
      CanCastTo = 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(v4, &GUID_69a39be5_2f3e_4d86_bac4_a145a90210a4);
      if ( IsEqualGUID )
        *v5 = v9;
      CanCastTo = IsEqualGUID == 0 ? 0x80004002 : 0;
      if ( !IsEqualGUID )
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo(
                      v9 + 208,
                      v8);
      if ( (CanCastTo & 0x80000000) != 0 )
        return CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
    return CanCastTo;
  }
  *a3 = a1;
  v12 = *(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL);
  if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(
      a1,
      a2,
      a3,
      a2);
  else
    v12(a1, a2, a3, a2);
  return v3;
}
