/*
 * XREFs of PopDirectedDripsNotifyDrivers @ 0x1407619C4
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 *     PopDirectedDripsRefreshDeviceState @ 0x140761E28 (PopDirectedDripsRefreshDeviceState.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     PoClearBroadcast @ 0x1405ECC28 (PoClearBroadcast.c)
 *     PoInitializeBroadcast @ 0x1405ECC84 (PoInitializeBroadcast.c)
 *     PopDiagTraceDirectedDripsNotifyDevices @ 0x140767358 (PopDiagTraceDirectedDripsNotifyDevices.c)
 */

__int64 __fastcall PopDirectedDripsNotifyDrivers(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  __int64 result; // rax
  __int64 v8; // r14
  int v9; // ett
  char v10; // di
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // r9d
  __int64 v20; // rcx

  v4 = a3;
  result = (unsigned int)_InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0);
  if ( (_DWORD)result )
  {
    v8 = MEMORY[0xFFFFF78000000008];
    _m_prefetchw(a1);
    LODWORD(result) = *a1;
    do
    {
      v9 = result;
      result = (unsigned int)_InterlockedCompareExchange(a1, result, result);
    }
    while ( v9 != (_DWORD)result );
    v10 = result;
    if ( (_BYTE)a3 )
    {
      if ( (result & 0x10) != 0 )
        return result;
      if ( (result & 0xC) != 8 )
      {
        a1[80] = -1073741536;
        return result;
      }
      *(_DWORD *)(a2 + 16) = 1;
      *(_DWORD *)(a2 + 8) = 5;
      v11 = a2 + 4;
      *(_DWORD *)(a2 + 12) = 5;
      *(_DWORD *)(a2 + 24) = *(_DWORD *)a2;
      *(_DWORD *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 20) = 2;
      result = PoInitializeBroadcast();
      if ( (int)result < 0 )
      {
        a1[80] = result;
        return result;
      }
      _InterlockedOr(a1, 0x80u);
      *(_BYTE *)(a2 + 30) = 3;
      PoBroadcastSystemState(v11, v12, v13, v14);
      *(_BYTE *)(a2 + 30) = 2;
      v18 = PoBroadcastSystemState(v11, v15, v16, v17);
      a1[80] = v18;
      v19 = v18;
      if ( v18 >= 0 )
        _InterlockedOr(a1, 0x10u);
      _InterlockedAnd(a1, 0xFFFFFFDF);
      ++a1[81];
    }
    else
    {
      if ( (result & 0x10) != 0 )
      {
        *(_BYTE *)(a2 + 29) = 1;
        PoBroadcastSystemState(a2 + 4, a2, a3, a4);
        _InterlockedOr(a1, 0x20u);
      }
      if ( v10 < 0 )
        PoClearBroadcast();
      _InterlockedAnd(a1, 0xFFFFFF6F);
      v19 = 0;
    }
    v20 = MEMORY[0xFFFFF78000000008] - v8;
    LOBYTE(v20) = v4;
    return PopDiagTraceDirectedDripsNotifyDevices(v20, v19, (MEMORY[0xFFFFF78000000008] - v8) / 0x2710uLL);
  }
  return result;
}
