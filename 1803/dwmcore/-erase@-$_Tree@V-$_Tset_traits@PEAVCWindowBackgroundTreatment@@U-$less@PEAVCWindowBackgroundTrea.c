/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAA_KAEBQEAVCWindowBackgroundTreatment@@@Z @ 0x18001A344
 * Callers:
 *     ?RemoveAssociatedWindowBackgroundTreatment@CHwDisplayRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18000C8D0 (-RemoveAssociatedWindowBackgroundTreatment@CHwDisplayRenderTarget@@UEAAXPEAVCWindowBackgroundTre.c)
 *     ?RemoveAssociatedWindowBackgroundTreatment@CBaseRenderTarget@@UEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x18013DC60 (-RemoveAssociatedWindowBackgroundTreatment@CBaseRenderTarget@@UEAAXPEAVCWindowBackgroundTreatmen.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001ACC8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@2@V32@0@Z @ 0x1800C2ACC (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowBackgroundTreatment@@U-$less@PEAVCWindowB_ea_1800C2ACC.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::erase(
        __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 **v2; // r11
  __int64 **v5; // r10
  __int64 *v6; // rax
  __int64 *v7; // r8
  unsigned __int64 v8; // r9
  __int64 **v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 **v12; // rdx
  __int64 **v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 **)*a1;
  v5 = (__int64 **)*a1;
  v6 = *(__int64 **)(*a1 + 8);
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( v7[4] < v8 )
      {
        v7 = (__int64 *)v7[2];
      }
      else
      {
        if ( *((_BYTE *)v5 + 25) && v8 < v7[4] )
          v5 = (__int64 **)v7;
        v2 = (__int64 **)v7;
        v7 = (__int64 *)*v7;
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = *v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v11 = v6[4];
    v12 = (__int64 **)v6;
    if ( *a2 < v11 )
      v6 = (__int64 *)*v6;
    else
      v6 = (__int64 *)v6[2];
    if ( *a2 >= v11 )
      v12 = v5;
    v5 = v12;
  }
  v9 = v2;
  v10 = 0LL;
  v14 = v2;
  while ( v9 != v5 )
  {
    ++v10;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>,std::_Iterator_base0>::operator++(&v14);
    v9 = v14;
  }
  std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::erase(
    a1,
    &v14,
    v2,
    v5);
  return v10;
}
