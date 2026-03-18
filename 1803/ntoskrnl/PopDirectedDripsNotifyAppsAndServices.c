/*
 * XREFs of PopDirectedDripsNotifyAppsAndServices @ 0x140761810
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140761C98 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     PoBlockConsoleSwitch @ 0x140583BAC (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 *     PopSuspendApps @ 0x1405EC3E4 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1405EC44C (PopSuspendServices.c)
 *     PopResumeApps @ 0x1405EC4BC (PopResumeApps.c)
 *     PopResumeServices @ 0x1405EC548 (PopResumeServices.c)
 *     PopDiagTraceDirectedDripsNotifyAppsAndServices @ 0x140767268 (PopDiagTraceDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsNotifyAppsAndServices(_DWORD *a1, _DWORD *a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // r15
  int v8; // ett
  int v9; // ebp
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  _DWORD v12[10]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0);
  if ( (_DWORD)result )
  {
    v7 = MEMORY[0xFFFFF78000000008];
    _m_prefetchw(a1);
    LODWORD(result) = *a1;
    do
    {
      v8 = result;
      result = (unsigned int)_InterlockedCompareExchange(a1, result, result);
    }
    while ( v8 != (_DWORD)result );
    if ( a3 )
    {
      if ( (result & 8) != 0 )
        return result;
      if ( (result & 4) != 0 )
      {
        a1[79] = -1073741536;
        return result;
      }
      _InterlockedOr(a1, 2u);
      memset(a2, 0, 0x3CuLL);
      a2[10] = 2;
      *a2 = -1946157056;
      a2[12] = -1946157056;
      a2[11] = 5;
      a2[14] = 21;
      a2[8] = PoBlockConsoleSwitch((__int64)(a2 + 9));
      a2[13] = 1;
      v9 = PopDispatchStateCallout(a2 + 9, 0LL);
      if ( v9 < 0 )
      {
        v13 = a2[8];
        a2[13] = 7;
        PopDispatchStateCallout(a2 + 9, (__int64)&v13);
      }
      else
      {
        if ( !PsWin32CalloutsEstablished )
        {
          PopSuspendApps(a2 + 9, 0);
          PopSuspendServices(a2 + 9, 0);
        }
        _InterlockedOr(a1, 8u);
      }
      a1[79] = v9;
    }
    else
    {
      if ( (result & 8) != 0 )
      {
        v10 = a2 + 9;
        if ( !PsWin32CalloutsEstablished )
        {
          PopResumeServices(v10, 0);
          PopResumeApps(v10, 0);
        }
        v10[4] = 8;
        PopDispatchStateCallout(v10, 0LL);
        v12[0] = a2[8];
        v10[4] = 7;
        PopDispatchStateCallout(v10, (__int64)v12);
      }
      _InterlockedAnd(a1, 0xFFFFFFF5);
      v9 = 0;
    }
    v11 = MEMORY[0xFFFFF78000000008] - v7;
    LOBYTE(v11) = a3;
    return PopDiagTraceDirectedDripsNotifyAppsAndServices(
             v11,
             (unsigned int)v9,
             (MEMORY[0xFFFFF78000000008] - v7) / 0x2710uLL);
  }
  return result;
}
