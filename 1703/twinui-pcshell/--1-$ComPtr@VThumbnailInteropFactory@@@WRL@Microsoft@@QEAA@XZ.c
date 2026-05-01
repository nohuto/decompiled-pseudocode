/*
 * XREFs of ??1?$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180167CCC
 * Callers:
 *     _MakeDesktopBackgroundFactory_::_1_::dtor$0 @ 0x1801A4973 (_MakeDesktopBackgroundFactory_--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_DesktopBackgroundFactory_IThumbnailDeviceInternal_____ptr64_&___ptr64_tagRECT_&___ptr64__::_1_::dtor$0 @ 0x1801A49A5 (_wil--MakeOrThrow_DesktopBackgroundFactory_IThumbnailDeviceInternal_____ptr64_-___ptr64_tagRECT_.c)
 *     _Microsoft::WRL::Details::Make_ThumbnailInteropFactory_IThumbnailDeviceInternal_____ptr64_&___ptr64_HWND_______ptr64_&___ptr64__::_1_::dtor$0 @ 0x1801A4A19 (_Microsoft--WRL--Details--Make_ThumbnailInteropFactory_IThumbnailDeviceInternal_____ptr64_-___pt.c)
 *     _Microsoft::WRL::Details::Make_DesktopBackgroundFactory_IThumbnailDeviceInternal_____ptr64_&___ptr64_tagRECT_&___ptr64__::_1_::dtor$0 @ 0x1801A4B0C (_Microsoft--WRL--Details--Make_DesktopBackgroundFactory_IThumbnailDeviceInternal_____ptr64_-___p.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180167F20 (-Release@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsof.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ThumbnailInteropFactory>::~ComPtr<ThumbnailInteropFactory>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
