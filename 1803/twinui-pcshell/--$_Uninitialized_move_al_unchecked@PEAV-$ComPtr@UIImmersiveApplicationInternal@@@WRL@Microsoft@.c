/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180103698
 * Callers:
 *     ??$emplace_back@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x180103728 (--$emplace_back@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal> *,Microsoft::WRL::ComPtr<IImmersiveApplicationInternal> *,std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(
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
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(v5, v4);
    throw;
  }
  return a3;
}
