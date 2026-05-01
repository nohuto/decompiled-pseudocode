/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UILightDismissNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A3060
 * Callers:
 *     ?GetIids@CPeopleBarFlyoutExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A1780 (-GetIids@CPeopleBarFlyoutExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
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
    *v6 = GUID_1b7781cd_1b97_4728_8b6e_67a7e55cc53c;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
