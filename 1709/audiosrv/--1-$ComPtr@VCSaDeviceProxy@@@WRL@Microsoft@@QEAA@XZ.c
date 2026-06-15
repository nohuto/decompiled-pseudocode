/*
 * XREFs of ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18005C72C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceParams_____ptr64_&___ptr64_CEndpointCharacteristics_____ptr64_&___ptr64_IDeviceGraphObjectsStore_____ptr64_enum__AUDCLNT_SHAREMODE_&___ptr64_unsigned_long_&___ptr64_SaDeviceResourceParams_____ptr64__::_1_::dtor$2 @ 0x18003A145 (_Microsoft--WRL--Details--MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceP_ea_18003A145.c)
 * Callees:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18000E310 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 */

CSaDeviceProxy *__fastcall Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(CSaDeviceProxy **a1)
{
  CSaDeviceProxy *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CSaDeviceProxy *)CSaDeviceProxy::Release(result);
  }
  return result;
}
