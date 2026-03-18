/*
 * XREFs of PopDirectedDripsRefreshDeviceState @ 0x140761E28
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     PopDirectedDripsNotifyDrivers @ 0x1407619C4 (PopDirectedDripsNotifyDrivers.c)
 */

__int64 __fastcall PopDirectedDripsRefreshDeviceState(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // ett
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9

  result = (unsigned int)_InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0);
  if ( (_DWORD)result )
  {
    _m_prefetchw(a1);
    LODWORD(result) = *a1;
    do
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange(a1, result, result);
    }
    while ( v6 != (_DWORD)result );
    if ( (result & 0x10) != 0 )
    {
      v7 = (__int64)(a1 + 64);
      PopDirectedDripsNotifyDrivers(a1, (__int64)(a1 + 64), 0LL, a4);
      LOBYTE(v8) = 1;
      return PopDirectedDripsNotifyDrivers(a1, v7, v8, v9);
    }
  }
  return result;
}
