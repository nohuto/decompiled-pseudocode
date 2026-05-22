/*
 * XREFs of ??_EMPCProcessor@@UEAAPEAXI@Z @ 0x180046D40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x1800472C4 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800498D8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCProcessor *__fastcall MPCProcessor::`vector deleting destructor'(MPCProcessor *this, char a2)
{
  void **v4; // rdi
  _QWORD *v5; // r8
  _BYTE *v6; // rbp
  _BYTE *v7; // rsi

  v4 = (void **)((char *)this + 2296);
  v5 = (_QWORD *)*((_QWORD *)this + 287);
  v6 = (_BYTE *)v5[1];
  v7 = v6;
  if ( !v6[25] )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
        v4,
        *((_QWORD *)v7 + 2));
      v7 = *(_BYTE **)v7;
      operator delete(v6);
      v6 = v7;
    }
    while ( !v7[25] );
    v5 = *v4;
  }
  v5[1] = v5;
  *(_QWORD *)*v4 = *v4;
  *((_QWORD *)*v4 + 2) = *v4;
  v4[1] = 0LL;
  operator delete(*v4);
  *((_DWORD *)this + 573) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
