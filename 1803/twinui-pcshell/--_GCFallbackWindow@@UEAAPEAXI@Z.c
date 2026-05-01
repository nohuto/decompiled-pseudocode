/*
 * XREFs of ??_GCFallbackWindow@@UEAAPEAXI@Z @ 0x180114304
 * Callers:
 *     ??_ECFallbackWindow@@WBI@EAAPEAXI@Z @ 0x1800A2FC0 (--_ECFallbackWindow@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x180114268 (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 */

CFallbackWindow *__fastcall CFallbackWindow::`scalar deleting destructor'(CFallbackWindow *this, char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 15);
  *((_DWORD *)this + 27) = -1073741823;
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase((CFallbackWindow *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
