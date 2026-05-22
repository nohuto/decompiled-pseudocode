/*
 * XREFs of ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1800C6F14
 * Callers:
 *     ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C6EE0 (--_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@EEAAXXZ @ 0x1800CD850 (-_Destroy@-$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x1800472C4 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::~SpatialGraphDriverHandleWrapper(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this)
{
  void **v2; // rbx
  _QWORD *v3; // rax
  void **v4; // rsi
  void **v5; // rdi

  v2 = (void **)((char *)this + 208);
  v3 = (_QWORD *)*((_QWORD *)this + 26);
  v4 = (void **)v3[1];
  v5 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
        (__int64)v2,
        v5[2]);
      v5 = (void **)*v5;
      operator delete(v4);
      v4 = v5;
    }
    while ( !*((_BYTE *)v5 + 25) );
    v3 = *v2;
  }
  v3[1] = v3;
  *(_QWORD *)*v2 = *v2;
  *((_QWORD *)*v2 + 2) = *v2;
  v2[1] = 0LL;
  operator delete(*v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(this);
}
