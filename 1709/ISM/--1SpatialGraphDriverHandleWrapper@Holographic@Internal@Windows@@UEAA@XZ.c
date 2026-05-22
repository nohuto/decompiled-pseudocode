/*
 * XREFs of ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1800B7504
 * Callers:
 *     ??_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B74D0 (--_GSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@EEAAXXZ @ 0x1800BC930 (-_Destroy@-$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x18001EA90 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::~SpatialGraphDriverHandleWrapper(
        struct _RTL_CRITICAL_SECTION *this)
{
  void **p_DebugInfo; // r14
  struct _RTL_CRITICAL_SECTION *CriticalSection; // rbx
  struct _RTL_CRITICAL_SECTION *i; // rdi

  p_DebugInfo = (void **)&this[4].DebugInfo;
  CriticalSection = this[4].DebugInfo->CriticalSection;
  for ( i = CriticalSection; !BYTE1(i->LockSemaphore); CriticalSection = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
      (__int64)p_DebugInfo,
      i->OwningThread);
    i = (struct _RTL_CRITICAL_SECTION *)i->DebugInfo;
    operator delete(CriticalSection);
  }
  *((_QWORD *)*p_DebugInfo + 1) = *p_DebugInfo;
  *(_QWORD *)*p_DebugInfo = *p_DebugInfo;
  *((_QWORD *)*p_DebugInfo + 2) = *p_DebugInfo;
  p_DebugInfo[1] = 0LL;
  operator delete(*p_DebugInfo);
  DeleteCriticalSection(this + 3);
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper((Windows::Internal::Holographic::HolographicDriverHandleWrapper *)this);
}
