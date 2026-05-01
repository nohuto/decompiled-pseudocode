/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18008CE28
 * Callers:
 *     ??$emplace_back@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x18008CD34 (--$emplace_back@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@@@WRL@M.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<ITaskWindow> *,Microsoft::WRL::ComPtr<ITaskWindow> *,std::allocator<Microsoft::WRL::ComPtr<ITaskWindow>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // [rsp+50h] [rbp+18h]
  _QWORD *v5; // [rsp+58h] [rbp+20h]

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
