/*
 * XREFs of ??_GGazeHidParser@@QEAAPEAXI@Z @ 0x18009B910
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B740 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x18009B9B0 (-OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x18001EA90 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
GazeHidParser *__fastcall GazeHidParser::`scalar deleting destructor'(GazeHidParser *this)
{
  void **v2; // r14
  _QWORD *v3; // rbx
  _QWORD *i; // rdi

  v2 = (void **)((char *)this + 72);
  v3 = *(_QWORD **)(*((_QWORD *)this + 9) + 8LL);
  for ( i = v3; !*((_BYTE *)i + 25); v3 = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
      (__int64)v2,
      (void *)i[2]);
    i = (_QWORD *)*i;
    operator delete(v3);
  }
  *((_QWORD *)*v2 + 1) = *v2;
  *(_QWORD *)*v2 = *v2;
  *((_QWORD *)*v2 + 2) = *v2;
  v2[1] = 0LL;
  operator delete(*v2);
  operator delete(this);
  return this;
}
