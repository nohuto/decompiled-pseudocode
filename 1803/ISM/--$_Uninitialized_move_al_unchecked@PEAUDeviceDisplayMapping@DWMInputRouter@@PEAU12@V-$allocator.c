/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUDeviceDisplayMapping@DWMInputRouter@@PEAU12@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@YAPEAUDeviceDisplayMapping@DWMInputRouter@@PEAU12@00AEAV?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180081DCC
 * Callers:
 *     ??$emplace_back@UDeviceDisplayMapping@DWMInputRouter@@@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAAAEAUDeviceDisplayMapping@DWMInputRouter@@$$QEAU23@@Z @ 0x180081380 (--$emplace_back@UDeviceDisplayMapping@DWMInputRouter@@@-$vector@UDeviceDisplayMapping@DWMInputRo.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked<DWMInputRouter::DeviceDisplayMapping *,DWMInputRouter::DeviceDisplayMapping *,std::allocator<DWMInputRouter::DeviceDisplayMapping>>(
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
        *(_DWORD *)a3 = *((_DWORD *)v4 - 2);
        *v3 = 0LL;
        if ( v3 != v4 )
        {
          *v3 = *v4;
          *v4 = 0LL;
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
    std::_Destroy_range<std::allocator<DWMInputRouter::DeviceDisplayMapping>>(v7, v6);
    throw;
  }
  return a3;
}
