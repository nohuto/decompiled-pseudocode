/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180167F20
 * Callers:
 *     ?MakeThumbnailInteropFactoryForWindow@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUHWND__@@@Z @ 0x180167C68 (-MakeThumbnailInteropFactoryForWindow@@YA-AV-$com_ptr_t@UIThumbnailFactory@Common@Multitasking@E.c)
 *     ??1?$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180167CCC (--1-$ComPtr@VThumbnailInteropFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$Make@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailInteropFactory@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Z @ 0x1801687D8 (--$Make@VThumbnailInteropFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUHWND__@@@Details@WRL@M.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1801689F0 (-Release@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details_ea_1801689F0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180168A20 (-Release@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details_ea_180168A20.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x180168A50 (-Release@-$RuntimeClass@U-$InterfaceList@VThumbnailInteropFactoryBase@@VNil@Details_ea_180168A50.c)
 *     ?MakeDesktopBackgroundFactory@@YA?AV?$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@UtagRECT@@@Z @ 0x180169220 (-MakeDesktopBackgroundFactory@@YA-AV-$com_ptr_t@UIThumbnailFactory@Common@Multitasking@Experienc.c)
 *     ??$Make@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDesktopBackgroundFactory@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Z @ 0x180169460 (--$Make@VDesktopBackgroundFactory@@AEAPEAUIThumbnailDeviceInternal@@AEAUtagRECT@@@Details@WRL@Mi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ThumbnailInteropFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 13);
  if ( v1 < 0 )
  {
    do
LABEL_8:
      v5 = *(_DWORD *)(2 * v1 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
    v2 = v5 - 1;
LABEL_10:
    if ( !v2 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 80))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v2 = v1 - 1;
      v4 = _InterlockedCompareExchange64(a1 + 13, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_10;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v2;
}
