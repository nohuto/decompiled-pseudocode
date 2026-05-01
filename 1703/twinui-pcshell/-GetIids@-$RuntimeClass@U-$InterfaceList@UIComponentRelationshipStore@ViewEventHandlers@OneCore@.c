/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@U?$InterfaceList@UIViewCUIEventStore@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800FD530
 * Callers:
 *     ?GetIids@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800ED6B0 (-GetIids@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJPEAKPEAPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,Microsoft::WRL::Details::InterfaceList<IViewCUIEventStore,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
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
    *v6 = GUID_f07c78aa_32b6_4f71_9cca_05b43394d316;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
