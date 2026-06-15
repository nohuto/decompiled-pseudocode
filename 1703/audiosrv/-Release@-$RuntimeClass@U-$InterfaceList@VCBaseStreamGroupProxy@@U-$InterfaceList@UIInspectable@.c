/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008B40
 * Callers:
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800086F0 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000B980 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800585E0 (-Release@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@U_ea_1800585E0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WNI@EAAKXZ @ 0x1800585F0 (-Release@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@U_ea_1800585F0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCBaseStreamGroupProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WOA@EAAKXZ @ 0x180058600 (-Release@-$RuntimeClass@U-$InterfaceList@VCBaseStreamGroupProxy@@U-$InterfaceList@U_ea_180058600.c)
 *     ??1?$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18007CF54 (--1-$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800A4880 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 240);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 240), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 8) + 392LL))(a1 + 8, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  return v2;
}
