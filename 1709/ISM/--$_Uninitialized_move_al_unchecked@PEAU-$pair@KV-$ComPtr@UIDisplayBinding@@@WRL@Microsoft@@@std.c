/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@PEAU12@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@YAPEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800201F8
 * Callers:
 *     ??$emplace@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@?$vector@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@std@@@std@@@1@$$QEAU?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@1@@Z @ 0x18001F7CC (--$emplace@U-$pair@KV-$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@-$vector@U-$pair@KV-$ComP.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *,std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *,std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  __int64 *v6; // [rsp+50h] [rbp+18h]
  __int64 *v7; // [rsp+58h] [rbp+20h]

  v6 = a3;
  v7 = a3;
  try
  {
    if ( a1 != a2 )
    {
      v3 = a3 + 1;
      v4 = a1 + 1;
      do
      {
        if ( a3 )
        {
          *(_DWORD *)a3 = *((_DWORD *)v4 - 2);
          *v3 = 0LL;
          if ( v3 != v4 )
          {
            *v3 = *v4;
            *v4 = 0LL;
          }
        }
        a3 += 2;
        v6 = a3;
        v3 += 2;
        v4 += 2;
      }
      while ( v4 - 1 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>,std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>> *>(
      v7,
      v6);
    throw;
  }
  return a3;
}
