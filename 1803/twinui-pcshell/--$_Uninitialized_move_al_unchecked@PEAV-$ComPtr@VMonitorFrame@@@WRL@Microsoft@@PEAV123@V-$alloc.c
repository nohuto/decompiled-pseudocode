/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1802048A8
 * Callers:
 *     ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x180204C44 (--$emplace_back@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorFrame@@@.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<MonitorFrame> *,Microsoft::WRL::ComPtr<MonitorFrame> *,std::allocator<Microsoft::WRL::ComPtr<MonitorFrame>>>(
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
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<MonitorFrame>>>(v5, v4);
    throw;
  }
  return a3;
}
