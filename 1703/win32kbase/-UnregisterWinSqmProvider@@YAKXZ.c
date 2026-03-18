/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C0065F5C
 * Callers:
 *     WinSqmEndSession @ 0x1C0065EB4 (WinSqmEndSession.c)
 * Callees:
 *     <none>
 */

__int64 UnregisterWinSqmProvider(void)
{
  signed __int64 v0; // rax
  unsigned int v1; // edx
  int i; // ebx
  __int64 v4; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  v0 = _InterlockedCompareExchange64(&qword_1C018E938, 170LL, 221LL);
  switch ( v0 )
  {
    case 221LL:
      v1 = EtwUnregister(*(REGHANDLE *)&WPP_MAIN_CB.DeviceLock.Header.Lock);
      LODWORD(WPP_MAIN_CB.SecurityDescriptor) = 0;
      *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock = 0LL;
      _InterlockedExchange64(&qword_1C018E938, v1 != 0 ? 238LL : 221LL);
      break;
    case 153LL:
      return 0;
    case 119LL:
      return 1359;
    case 170LL:
      Interval.QuadPart = -1000000LL;
      for ( i = 0; i < 10; ++i )
      {
        KeDelayExecutionThread(1, 0, &Interval);
        v4 = _InterlockedExchange64(&qword_1C018E938, qword_1C018E938);
        if ( v4 != 170 )
          break;
      }
      if ( i == 10 )
        v4 = _InterlockedCompareExchange64(&qword_1C018E938, 136LL, 170LL);
      return v4 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v1;
}
