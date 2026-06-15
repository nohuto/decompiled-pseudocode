/*
 * XREFs of ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0
 * Callers:
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180001730 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 *     ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z @ 0x180001D50 (-PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEAUDolbyLicenseResult@@@Z.c)
 *     _lambda_6721409c6d8d6be39a12e154768b61d2_::operator() @ 0x18000C73C (_lambda_6721409c6d8d6be39a12e154768b61d2_--operator().c)
 *     _lambda_6d8abb589d22b5930a9c9ecc0b82ece6_::operator() @ 0x18000D3E0 (_lambda_6d8abb589d22b5930a9c9ecc0b82ece6_--operator().c)
 *     ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x18000D7A0 (-PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18000D8A0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000E95C (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000EE30 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800311C4 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     ??1?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x18005ACA4 (--1-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ.c)
 *     std::_For_each_unchecked_Microsoft::WRL::WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162dbd37187d30___ @ 0x180091F64 (std--_For_each_unchecked_Microsoft--WRL--WeakRef_const_____ptr64__lambda_3ea8e7556f72cf8b3f162db.c)
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x1800924B0 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180094330 (-OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     _lambda_66f05aa6b27db1192e1217df58c6c38a_::operator() @ 0x1800963F0 (_lambda_66f05aa6b27db1192e1217df58c6c38a_--operator().c)
 *     _lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_::operator() @ 0x1800964B8 (_lambda_c774dc0092cfa85ab52d91ce2e4bcbd2_--operator().c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800967F0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180096B60 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18009C3D8 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@IEAAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(CProcessSubmixProxy **a1)
{
  __int64 result; // rax
  CProcessSubmixProxy *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release )
    {
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release();
    }
    else if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::Release )
    {
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::Release(v3);
    }
    else
    {
      return v4();
    }
  }
  return result;
}
