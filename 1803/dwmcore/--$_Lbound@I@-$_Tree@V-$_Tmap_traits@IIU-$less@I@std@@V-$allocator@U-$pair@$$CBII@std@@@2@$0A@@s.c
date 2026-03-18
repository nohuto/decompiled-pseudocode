/*
 * XREFs of ??$_Lbound@I@?$_Tree@V?$_Tmap_traits@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBII@std@@PEAX@1@AEBI@Z @ 0x1800D35E4
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 *     _anonymous_namespace_::SequenceEncoder::AppendIndexSet @ 0x1800D282C (_anonymous_namespace_--SequenceEncoder--AppendIndexSet.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Lbound<unsigned int>(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rax
  unsigned int v4; // ecx
  __int64 *v5; // r9

  v2 = (__int64 *)*a1;
  v3 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v3 + 25) )
  {
    v4 = *((_DWORD *)v3 + 7);
    v5 = v3;
    if ( v4 >= *a2 )
      v3 = (__int64 *)*v3;
    else
      v3 = (__int64 *)v3[2];
    if ( v4 >= *a2 )
      v2 = v5;
  }
  return v2;
}
