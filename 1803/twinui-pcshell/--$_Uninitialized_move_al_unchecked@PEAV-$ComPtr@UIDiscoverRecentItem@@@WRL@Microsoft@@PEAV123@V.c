/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801F7338
 * Callers:
 *     ??$emplace_back@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAAXAEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@Z @ 0x180194FF0 (--$emplace_back@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIDiscove.c)
 *     ??$emplace_back@AEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801F73A8 (--$emplace_back@AEAV-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
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
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>>(
      v5,
      v4);
    throw;
  }
  return a3;
}
