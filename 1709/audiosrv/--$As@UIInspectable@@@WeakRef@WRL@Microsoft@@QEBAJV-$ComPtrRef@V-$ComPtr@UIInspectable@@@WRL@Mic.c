/*
 * XREFs of ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C
 * Callers:
 *     ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x18000D7A0 (-PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000D8A0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000E95C (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000EE30 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800311C4 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     std::_For_each_unchecked_Microsoft::WRL::WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162dbd37187d30___ @ 0x180091F64 (std--_For_each_unchecked_Microsoft--WRL--WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162db.c)
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x1800924B0 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180094330 (-OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     _lambda_66f05aa6b27db1192e1217df58c6c38a_::operator() @ 0x1800963F0 (_lambda_66f05aa6b27db1192e1217df58c6c38a_--operator().c)
 *     _lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator() @ 0x1800964B8 (_lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator().c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800967F0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180096B60 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18009C3D8 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18000D260 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<IInspectable>(
        Microsoft::WRL::Details::WeakReferenceImpl **a1,
        struct IInspectable **a2)
{
  unsigned int v3; // edi
  struct IInspectable *v4; // rcx
  Microsoft::WRL::Details::WeakReferenceImpl *v6; // rcx
  __int64 (__fastcall *v7)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **); // rax

  v3 = 0;
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v4->lpVtbl->Release)(v4);
  }
  *a2 = 0LL;
  v6 = *a1;
  if ( *a1 )
  {
    v7 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *__hidden, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v6 + 24LL);
    if ( v7 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve )
      return (unsigned int)Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
                             v6,
                             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                             a2);
    else
      return (unsigned int)v7(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
  }
  return v3;
}
