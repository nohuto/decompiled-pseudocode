/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800D4950
 * Callers:
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800D5600 (-GetIids@-$RuntimeClass@U-$InterfaceList@UIUserActivityMonitor@UserActivities@Inter_ea_1800D5600.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x60uLL);
  if ( v6 )
  {
    *v6 = GUID_0a61d46b_4bac_4a46_ab6b_c62d31ffe96e;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_8ad89301_af07_45e5_b583_ab8d42032339;
    v6[3] = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
    v6[4] = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
    v6[5] = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
    *a2 = 6;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
