/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B88A0
 * Callers:
 *     ?GetIids@CVirtualTouchpadExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B61A0 (-GetIids@CVirtualTouchpadExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800BA030 (-GetIids@-$RuntimeClass@U-$InterfaceList@UIVirtualTouchpadExperienceManager@Experie_ea_1800BA030.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = GUID_17c4ec91_62df_486d_aa0d_6a11c725e414;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_ea5d0de4_770d_4da0_a9f8_d7f9a140ff79;
    v6[3] = _uuidof__AUIDisposable_Platform__;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
