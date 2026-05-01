/*
 * XREFs of ??1WeakReferenceImpl@Details@WRL@Microsoft@@UEAA@XZ @ 0x18001EB68
 * Callers:
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800D4840 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@.c)
 *     ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1801920F0 (-GetWeakReference@-$RuntimeClass@U-$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::WeakReferenceImpl::~WeakReferenceImpl(
        Microsoft::WRL::Details::WeakReferenceImpl *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
  *((_DWORD *)this + 4) = -1073741823;
  *((_DWORD *)this + 3) = -1073741823;
}
