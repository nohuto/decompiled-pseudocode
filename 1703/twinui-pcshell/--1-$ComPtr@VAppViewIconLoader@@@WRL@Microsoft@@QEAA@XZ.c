/*
 * XREFs of ??1?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BE498
 * Callers:
 *     _CortanaSharedExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x18019CBD1 (_CortanaSharedExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 *     _CortanaSharedExperienceManager::_RegisterMessages_::_1_::dtor$2 @ 0x18019CBDD (_CortanaSharedExperienceManager--_RegisterMessages_--_1_--dtor$2.c)
 *     _AppViewIconFactory::CreateImageSource_::_1_::dtor$4 @ 0x1801A4684 (_AppViewIconFactory--CreateImageSource_--_1_--dtor$4.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveRawInputMouseNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180064DD0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveRawInputMouseNotification@@VNil@Details@WRL@.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<AppViewIconLoader>::~ComPtr<AppViewIconLoader>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveRawInputMouseNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
