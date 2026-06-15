/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800CBEC0
 * Callers:
 *     ??$emplace_back@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B0F58 (--$emplace_back@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIStreamGro.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z @ 0x1800C79B4 (--$emplace_back@AEBV-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIProcess.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IProcessSubmixProxy> *,Microsoft::WRL::ComPtr<IProcessSubmixProxy> *,std::allocator<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // [rsp+50h] [rbp+18h]
  __int64 *v5; // [rsp+58h] [rbp+20h]

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
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v5, v4);
    throw;
  }
  return a3;
}
