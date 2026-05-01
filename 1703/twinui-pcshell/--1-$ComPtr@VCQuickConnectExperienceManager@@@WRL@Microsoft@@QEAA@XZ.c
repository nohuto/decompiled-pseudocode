/*
 * XREFs of ??1?$ComPtr@VCQuickConnectExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B0600
 * Callers:
 *     _QuickConnectExperienceManagerFactory::GetExperienceManager_::_1_::dtor$0 @ 0x18019C884 (_QuickConnectExperienceManagerFactory--GetExperienceManager_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VICortanaExperienceManagerNotification@Cortana@TwinUI@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800AE530 (-Release@-$RuntimeClass@U-$InterfaceList@VICortanaExperienceManagerNotification@Cortana@TwinUI@@.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CQuickConnectExperienceManager>::~ComPtr<CQuickConnectExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaExperienceManagerNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
