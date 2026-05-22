/*
 * XREFs of ??1GazeHidParser@@QEAA@XZ @ 0x1800AE5DC
 * Callers:
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x180075D10 (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x1800472C4 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GazeHidParser::~GazeHidParser(GazeHidParser *this)
{
  void **v1; // rbx
  _QWORD *v2; // rax
  void **v3; // rsi
  void **v4; // rdi

  v1 = (void **)((char *)this + 72);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  v3 = (void **)v2[1];
  v4 = v3;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
        (__int64)v1,
        v4[2]);
      v4 = (void **)*v4;
      operator delete(v3);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v2 = *v1;
  }
  v2[1] = v2;
  *(_QWORD *)*v1 = *v1;
  *((_QWORD *)*v1 + 2) = *v1;
  v1[1] = 0LL;
  operator delete(*v1);
}
