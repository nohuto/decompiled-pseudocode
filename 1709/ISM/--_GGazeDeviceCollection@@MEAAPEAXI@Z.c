/*
 * XREFs of ??_GGazeDeviceCollection@@MEAAPEAXI@Z @ 0x18009B670
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x18001EA90 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18009C794 (--1HIDDeviceCollection@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
GazeDeviceCollection *__fastcall GazeDeviceCollection::`scalar deleting destructor'(
        GazeDeviceCollection *this,
        char a2)
{
  void **v4; // r15
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  *(_QWORD *)this = &GazeDeviceCollection::`vftable';
  v4 = (void **)((char *)this + 2760);
  v5 = *(_QWORD **)(*((_QWORD *)this + 345) + 8LL);
  for ( i = v5; !*((_BYTE *)i + 25); v5 = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
      (__int64)v4,
      (void *)i[2]);
    i = (_QWORD *)*i;
    operator delete(v5);
  }
  *((_QWORD *)*v4 + 1) = *v4;
  *(_QWORD *)*v4 = *v4;
  *((_QWORD *)*v4 + 2) = *v4;
  v4[1] = 0LL;
  operator delete(*v4);
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
