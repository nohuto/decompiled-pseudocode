/*
 * XREFs of ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x14004A9F0
 * Callers:
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@U?$InterfaceList@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004C420 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@U-$IAsyncOperation@PEAVModuleCommandResult@Dev.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004C4E0 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@U-$IIterator@PEAVAudioDeviceModule@Devices@Med.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004C5A0 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVAudioDeviceModule@Devices@M.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@UIAudioDeviceModule@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004C660 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@UIAudioDeviceModule@Devices@Media@Windows@@U-$.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x140049750 (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 */

struct Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::CreateWeakReference(
        struct IUnknown *this,
        struct IUnknown *a2)
{
  __int64 v3; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v4; // rax

  v3 = 0LL;
  v4 = (Microsoft::WRL::Details::WeakReferenceImpl *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    return Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v4, this);
  return (struct Microsoft::WRL::Details::WeakReferenceImpl *)v3;
}
