/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180147438
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@PEAU32@@Z @ 0x180147720 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@s.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // r8
  __int64 v3; // rcx
  __int64 i; // rax

  v1 = *a1;
  v2 = a1;
  if ( !*(_BYTE *)(*a1 + 25) )
  {
    v3 = *(_QWORD *)(v1 + 16);
    if ( *(_BYTE *)(v3 + 25) )
    {
      for ( i = *(_QWORD *)(v1 + 8); !*(_BYTE *)(i + 25) && v1 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
      {
        *v2 = i;
        v1 = i;
      }
    }
    else
    {
      i = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>>::_Min(
            v3,
            v1,
            v2);
    }
    *v2 = i;
  }
  return v2;
}
