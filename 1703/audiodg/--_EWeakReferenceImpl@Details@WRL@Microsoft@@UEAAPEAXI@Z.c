/*
 * XREFs of ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14004A060
 * Callers:
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@U?$InterfaceList@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004C420 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@U-$IAsyncOperation@PEAVModuleCommandResult@Dev.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004C4E0 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@U-$IIterator@PEAVAudioDeviceModule@Devices@Med.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004C5A0 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@U-$IVectorView@PEAVAudioDeviceModule@Devices@M.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@UIAudioDeviceModule@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004C660 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@UIAudioDeviceModule@Devices@Media@Windows@@U-$.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 */

Microsoft::WRL::Details::WeakReferenceImpl *__fastcall Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        char a2)
{
  *(_QWORD *)this = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
  *((_DWORD *)this + 4) = -1073741823;
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
