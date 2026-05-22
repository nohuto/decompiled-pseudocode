/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@0@PEAV10@00AEAV?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800CE02C
 * Callers:
 *     ??$emplace_back@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@@Z @ 0x1800C9088 (--$emplace_back@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default_delete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_al_unchecked<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  _QWORD *v7; // [rsp+50h] [rbp+18h]
  _QWORD *v8; // [rsp+58h] [rbp+20h]

  v7 = a3;
  v8 = a3;
  try
  {
    v3 = 0LL;
    v4 = (a2 - (unsigned __int64)a1 + 7) >> 3;
    if ( (unsigned __int64)a1 > a2 )
      v4 = 0LL;
    if ( v4 )
    {
      do
      {
        v5 = *a1;
        *a1 = 0LL;
        *a3++ = v5;
        v7 = a3;
        ++a1;
        ++v3;
      }
      while ( v3 != v4 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(v8, v7);
    throw;
  }
  return a3;
}
