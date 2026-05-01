/*
 * XREFs of ??_GThumbnailInteropFactory@@UEAAPEAXI@Z @ 0x180167C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180167CEC (--1-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@De.c)
 *     ??1ThumbnailEventListener@@QEAA@XZ @ 0x180168DA8 (--1ThumbnailEventListener@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ThumbnailInteropFactory *__fastcall ThumbnailInteropFactory::`scalar deleting destructor'(
        ThumbnailInteropFactory *this,
        char a2)
{
  ThumbnailEventListener::~ThumbnailEventListener((ThumbnailInteropFactory *)((char *)this + 112));
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
