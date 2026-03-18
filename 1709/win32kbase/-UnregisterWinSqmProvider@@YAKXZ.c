/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C0076444
 * Callers:
 *     WinSqmEndSession @ 0x1C007639C (WinSqmEndSession.c)
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
  v0 = _InterlockedCompareExchange64(&qword_1C01937A0, 170LL, 221LL);
  switch ( v0 )
  {
    case 221LL:
      v1 = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Reserved);
      LODWORD(WPP_MAIN_CB.DeviceObjectExtension) = 0;
      WPP_MAIN_CB.Reserved = 0LL;
      _InterlockedExchange64(&qword_1C01937A0, v1 != 0 ? 238LL : 221LL);
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
        v4 = _InterlockedExchange64(&qword_1C01937A0, qword_1C01937A0);
        if ( v4 != 170 )
          break;
      }
      if ( i == 10 )
        v4 = _InterlockedCompareExchange64(&qword_1C01937A0, 136LL, 170LL);
      return v4 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v1;
}
