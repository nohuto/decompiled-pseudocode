/*
 * XREFs of ??_GAugmentedInputDeviceCollection@@MEAAPEAXI@Z @ 0x18006CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x1800472C4 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x180074E14 (--1HIDDeviceCollection@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
AugmentedInputDeviceCollection *__fastcall AugmentedInputDeviceCollection::`scalar deleting destructor'(
        AugmentedInputDeviceCollection *this,
        char a2)
{
  void **v4; // rdi
  _QWORD *v5; // rax
  void **v6; // rbp
  void **v7; // rsi

  *(_QWORD *)this = &AugmentedInputDeviceCollection::`vftable';
  v4 = (void **)((char *)this + 2760);
  v5 = (_QWORD *)*((_QWORD *)this + 345);
  v6 = (void **)v5[1];
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
        (__int64)v4,
        v7[2]);
      v7 = (void **)*v7;
      operator delete(v6);
      v6 = v7;
    }
    while ( !*((_BYTE *)v7 + 25) );
    v5 = *v4;
  }
  v5[1] = v5;
  *(_QWORD *)*v4 = *v4;
  *((_QWORD *)*v4 + 2) = *v4;
  v4[1] = 0LL;
  operator delete(*v4);
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
