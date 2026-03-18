/*
 * XREFs of ?UnregisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXI@Z @ 0x1801FCEE8
 * Callers:
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1801F918C (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IPEAVCHolographicInteropTexture@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801FD3DC (-erase@-$_Tree@V-$_Tmap_traits@IPEAVCHolographicInteropTexture@@U-$less@I@std@@V-$a_ea_1801FD3DC.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUStereoscopicTransformInfo@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicTransformInfo@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1801FD878 (-erase@-$_Tree@V-$_Tmap_traits@IUStereoscopicTransformInfo@@U-$less@I@std@@V-$alloc_ea_1801FD878.c)
 */

void __fastcall CStereoscopicContentManager::UnregisterStereoscopicContentConsumer(
        CStereoscopicContentManager *this,
        int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  std::_Tree<std::_Tmap_traits<unsigned int,CHolographicInteropTexture *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CHolographicInteropTexture *>>,0>>::erase(
    (char *)this + 152,
    &v4);
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicTransformInfo,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicTransformInfo>>,0>>::erase(
    (char *)this + 168,
    &v4);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
