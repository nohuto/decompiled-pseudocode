/*
 * XREFs of _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x1800D282C
 * Callers:
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800D28B0 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 * Callees:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x1800D30DC (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800D3598 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@I@std@@@std@@U_Iterator_b.c)
 *     ??$_Lbound@I@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEBI@Z @ 0x1800D35E4 (--$_Lbound@I@-$_Tree@V-$_Tmap_traits@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@$0A@@s.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall anonymous_namespace_::SequenceEncoder::AppendIndexSet(Base853Encoder *this, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r11d
  _QWORD *v9; // r10
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  Base853Encoder::AppendVarInt(this, *(_DWORD *)(a2 + 8));
  v4 = *(__int64 **)a2;
  result = *v4;
  v12 = *v4;
  while ( (__int64 *)result != v4 )
  {
    v6 = *((_QWORD *)this + 3);
    v11 = *(_DWORD *)(result + 28);
    v7 = std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lbound<unsigned int>(
           v6,
           &v11);
    if ( v7 == *v9 || v8 < *(_DWORD *)(v7 + 28) )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    Base853Encoder::AppendVarInt(this, *(_DWORD *)(v7 + 32));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>::operator++(&v12);
    result = v12;
  }
  return result;
}
