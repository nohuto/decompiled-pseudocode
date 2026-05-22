/*
 * XREFs of ??_EMPCProcessor@@UEAAPEAXI@Z @ 0x180053C90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x18001EA90 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18005FCF4 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCProcessor *__fastcall MPCProcessor::`vector deleting destructor'(MPCProcessor *this, char a2)
{
  void **v4; // r14
  _QWORD *v5; // rdi
  _QWORD *i; // rbx

  v4 = (void **)((char *)this + 568);
  v5 = *(_QWORD **)(*((_QWORD *)this + 71) + 8LL);
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
  *((_DWORD *)this + 141) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
