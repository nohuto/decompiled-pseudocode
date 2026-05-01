/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@UIImeStatusNotificationExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A0070
 * Callers:
 *     ?GetIids@ImeNotificationExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009F5A0 (-GetIids@ImeNotificationExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$RuntimeClass@U?$InterfaceList@UIImeStatusNotificationExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A0860 (-GetIids@-$RuntimeClass@U-$InterfaceList@UIImeStatusNotificationExperienceManager@E_ea_1800A0860.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_08f4f43b_7be0_4a08_b5df_24044d7e8b72;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = _uuidof__AUIDisposable_Platform__;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
