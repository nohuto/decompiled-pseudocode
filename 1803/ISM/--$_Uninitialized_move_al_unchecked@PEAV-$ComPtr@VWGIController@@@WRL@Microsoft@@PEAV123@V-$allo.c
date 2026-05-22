/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180077CC0
 * Callers:
 *     ??$emplace_back@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x180076EB4 (--$emplace_back@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VWGIController@@@W.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 **__fastcall std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<WGIController> *,Microsoft::WRL::ComPtr<WGIController> *,std::allocator<Microsoft::WRL::ComPtr<WGIController>>>(
        volatile signed __int64 **a1,
        volatile signed __int64 **a2,
        volatile signed __int64 **a3)
{
  volatile signed __int64 **v4; // [rsp+50h] [rbp+18h]
  volatile signed __int64 **v5; // [rsp+58h] [rbp+20h]

  v4 = a3;
  v5 = a3;
  try
  {
    while ( a1 != a2 )
    {
      *a3 = 0LL;
      if ( a3 != a1 )
      {
        *a3 = *a1;
        *a1 = 0LL;
      }
      v4 = ++a3;
      ++a1;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<WGIController>>>(v5, v4);
    throw;
  }
  return a3;
}
