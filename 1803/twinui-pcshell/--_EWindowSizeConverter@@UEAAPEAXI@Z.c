/*
 * XREFs of ??_EWindowSizeConverter@@UEAAPEAXI@Z @ 0x1802B62B8
 * Callers:
 *     ??_EWindowSizeConverter@@WBI@EAAPEAXI@Z @ 0x1800AEDF0 (--_EWindowSizeConverter@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801048B4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x1802BAA3C (-erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$le_ea_1802BAA3C.c)
 */

WindowSizeConverter *__fastcall WindowSizeConverter::`vector deleting destructor'(WindowSizeConverter *this, char a2)
{
  char **v2; // rbx
  char v6; // [rsp+58h] [rbp+20h] BYREF

  v2 = (char **)((char *)this + 136);
  std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
    (char *)this + 136,
    &v6);
  std::_Deallocate(*v2, 1uLL, 0x30uLL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  *((_DWORD *)this + 27) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((WindowSizeConverter *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
