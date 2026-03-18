/*
 * XREFs of ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x180023AE8
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800234E0 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 * Callees:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@IPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180023A30 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@st.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@SAPEAU?$_Tree_node@IPEAX@2@PEAU32@@Z @ 0x1800D391C (-_Min@-$_Tree_val@U-$_Tree_simple_types@I@std@@@std@@SAPEAU-$_Tree_node@IPEAX@2@PEAU32@@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy<std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_tag>(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rbp
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // r8
  __int64 v11; // rax
  __int64 *v12; // r8
  __int64 result; // rax
  __int64 i; // rcx

  v4 = *a1;
  v7 = *(_QWORD *)(*a2 + 8LL);
  v8 = *a1;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v9 = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 32LL);
    *(_QWORD *)v9 = *a1;
    *(_QWORD *)(v9 + 8) = *a1;
    *(_QWORD *)(v9 + 16) = *a1;
    *(_WORD *)(v9 + 24) = 0;
    *(_DWORD *)(v9 + 28) = *(_DWORD *)(v7 + 28);
    *(_QWORD *)(v9 + 8) = v4;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(v7 + 24);
    if ( *(_BYTE *)(v4 + 25) )
      v4 = v9;
    *(_QWORD *)v9 = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_tag>(
                      a1,
                      *(_QWORD *)v7,
                      v9,
                      a3);
    *(_QWORD *)(v9 + 16) = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Copy_tag>(
                             a1,
                             *(_QWORD *)(v7 + 16),
                             v9,
                             a3);
    v8 = *a1;
  }
  *(_QWORD *)(v8 + 8) = v4;
  v10 = (_QWORD *)*a1;
  a1[1] = a2[1];
  if ( *(_BYTE *)(v10[1] + 25LL) )
  {
    *v10 = v10;
    result = *a1;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    v11 = std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Min();
    *v12 = v11;
    result = *(_QWORD *)(*a1 + 8);
    for ( i = *(_QWORD *)(result + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16) = result;
  }
  return result;
}
