/*
 * XREFs of ??1?$ComPtr@VThumbnailEventRegistration@ThumbnailEventListener@@@WRL@Microsoft@@QEAA@XZ @ 0x180168C38
 * Callers:
 *     _ThumbnailEventListener::Register_::_1_::dtor$0 @ 0x1801A4A83 (_ThumbnailEventListener--Register_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<ThumbnailEventListener::ThumbnailEventRegistration>::~ComPtr<ThumbnailEventListener::ThumbnailEventRegistration>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
