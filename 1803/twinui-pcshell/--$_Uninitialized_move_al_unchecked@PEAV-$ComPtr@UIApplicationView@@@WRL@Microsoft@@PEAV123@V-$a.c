/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801BFC50
 * Callers:
 *     ??$emplace_back@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1801BFE1C (--$emplace_back@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplicationVi.c)
 * Callees:
 *     <none>
 */

CWinRTApplicationView **__fastcall std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IApplicationView> *,Microsoft::WRL::ComPtr<IApplicationView> *,std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
        CWinRTApplicationView **a1,
        CWinRTApplicationView **a2,
        CWinRTApplicationView **a3)
{
  CWinRTApplicationView **v4; // [rsp+50h] [rbp+18h]
  CWinRTApplicationView **v5; // [rsp+58h] [rbp+20h]

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
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(v5, v4);
    throw;
  }
  return a3;
}
