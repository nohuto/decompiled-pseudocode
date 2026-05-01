/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@2@0@Z @ 0x18024FEE0
 * Callers:
 *     ??1?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA@XZ @ 0x1802476AC (--1-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUR.c)
 *     ??1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ @ 0x180247908 (--1TabTipAdapterPolicy@KeyboardHosting@@UEAA@XZ.c)
 *     ??_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x180251810 (--_EPositionAndSizeOptionsProvider@KeyboardHosting@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@2@@Z @ 0x18024FDE4 (-_Erase@-$_Tree@V-$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$al.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@std@@@std@@@2@@Z @ 0x18024FFAC (-erase@-$_Tree@V-$_Tmap_traits@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$all.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@PEAU32@@Z @ 0x180253EA0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU-$_Tree.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::erase(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v5; // rbx
  __int64 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 i; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == **a1 && a4 == v8 )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::_Erase(
      (__int64)a1,
      (char *)v8[1]);
    (*a1)[1] = (__int64)*a1;
    **a1 = (__int64)*a1;
    (*a1)[2] = (__int64)*a1;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( (__int64 *)v5 != a4 )
    {
      v9 = v5;
      if ( !*(_BYTE *)(v5 + 25) )
      {
        v10 = *(_QWORD *)(v5 + 16);
        if ( *(_BYTE *)(v10 + 25) )
        {
          for ( i = *(_QWORD *)(v5 + 8); !*(_BYTE *)(i + 25) && v5 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
            v5 = i;
        }
        else
        {
          i = std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min(v10, v8, v5);
        }
        v5 = i;
      }
      std::_Tree<std::_Tmap_traits<unsigned int,KeyboardHosting::RelativePositionOnScreen,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,KeyboardHosting::RelativePositionOnScreen>>,0>>::erase(
        a1,
        &v13,
        v9);
    }
    *a2 = v5;
  }
  return a2;
}
