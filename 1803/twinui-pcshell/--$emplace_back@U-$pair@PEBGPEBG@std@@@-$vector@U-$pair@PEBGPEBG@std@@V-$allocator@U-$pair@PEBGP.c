/*
 * XREFs of ??$emplace_back@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x18014560C
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180149364 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180149478 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Change_array@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXQEAU?$pair@PEBGPEBG@2@_K1@Z @ 0x180149798 (-_Change_array@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXQ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEAU10@00AEAV?$allocator@U?$pair@PEBGPEBG@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18019A3CC (--$_Uninitialized_move_al_unchecked@PEAU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPEB.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        _OWORD *a2)
{
  __int64 result; // rax
  _OWORD *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  char *v11; // rax
  char *v12; // r15
  char *v13; // [rsp+80h] [rbp+18h]

  result = a1[2];
  v5 = (_OWORD *)a1[1];
  if ( (_OWORD *)result == v5 )
  {
    v6 = ((__int64)v5 - *a1) >> 4;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = (result - *a1) >> 4;
    v9 = v8 >> 1;
    if ( v8 <= 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 0x10uLL);
    v12 = v11;
    v13 = v11;
    try
    {
      *(_OWORD *)&v11[16 * v6] = *a2;
      std::_Uninitialized_move_al_unchecked<std::pair<unsigned short const *,unsigned short const *> *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      std::_Deallocate(v13, v10, 0x10uLL);
      throw;
    }
    return std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Change_array(a1, v12, v7, v10);
  }
  else
  {
    *v5 = *a2;
    a1[1] += 16LL;
  }
  return result;
}
