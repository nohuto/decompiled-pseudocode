/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800202EC
 * Callers:
 *     ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x18001FAD8 (--$emplace_back@AEBV-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@.c)
 *     ??$emplace_back@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800599AC (--$emplace_back@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIMPCInput.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IInputTarget> *,Microsoft::WRL::ComPtr<IInputTarget> *,std::allocator<Microsoft::WRL::ComPtr<IInputTarget>>>(
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
      if ( a3 )
      {
        *a3 = 0LL;
        if ( a3 != a1 )
        {
          *a3 = *a1;
          *a1 = 0LL;
        }
      }
      v4 = ++a3;
      ++a1;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>,Microsoft::WRL::ComPtr<IMPCInputProviderBase> *>(
      v5,
      v4);
    throw;
  }
  return a3;
}
