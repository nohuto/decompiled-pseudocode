/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@PEAU12@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@2@@std@@YAPEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180020264
 * Callers:
 *     ??$emplace_back@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@?$vector@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@2@@std@@QEAAX$$QEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@1@@Z @ 0x18001F404 (--$emplace_back@U-$pair@KV-$vector@PEAUIDisplayBindingObserver@@V-$allocator@PEAUIDisplayBinding.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall std::_Uninitialized_move_al_unchecked<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>> *,std::pair<unsigned long,std::vector<IDisplayBindingObserver *>> *,std::allocator<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>>(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  __int64 v6; // [rsp+50h] [rbp+18h]
  __int64 v7; // [rsp+58h] [rbp+20h]

  v6 = (__int64)a3;
  v7 = (__int64)a3;
  try
  {
    if ( a1 != a2 )
    {
      v3 = a3 + 6;
      v4 = a1 + 3;
      do
      {
        if ( a3 )
        {
          *a3 = *((_DWORD *)v4 - 6);
          *(v3 - 2) = 0LL;
          *(v3 - 1) = 0LL;
          *v3 = 0LL;
          *(v3 - 2) = *(v4 - 2);
          *(v3 - 1) = *(v4 - 1);
          *v3 = *v4;
          *(v4 - 2) = 0LL;
          *(v4 - 1) = 0LL;
          *v4 = 0LL;
        }
        a3 += 8;
        v6 = (__int64)a3;
        v3 += 4;
        v4 += 4;
      }
      while ( v4 - 3 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>,std::pair<unsigned long,std::vector<IDisplayBindingObserver *>> *>(
      v7,
      v6);
    throw;
  }
  return a3;
}
