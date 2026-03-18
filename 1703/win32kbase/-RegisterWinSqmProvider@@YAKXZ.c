/*
 * XREFs of ?RegisterWinSqmProvider@@YAKXZ @ 0x1C006D1E0
 * Callers:
 *     WinSqmStartSession @ 0x1C006D038 (WinSqmStartSession.c)
 * Callees:
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C006D264 (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 */

__int64 RegisterWinSqmProvider(void)
{
  signed __int64 v0; // rax
  unsigned int v1; // ebx
  int i; // edi
  __int64 v4; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = 0LL;
  v0 = _InterlockedCompareExchange64(&qword_1C018E938, 255LL, 0LL);
  if ( v0 )
  {
    switch ( v0 )
    {
      case 221LL:
        return 0;
      case 238LL:
        return 1359;
      case 255LL:
        Interval.QuadPart = -1000000LL;
        for ( i = 0; i < 10; ++i )
        {
          KeDelayExecutionThread(1, 0, &Interval);
          v4 = _InterlockedExchange64(&qword_1C018E938, qword_1C018E938);
          if ( v4 != 255 )
            break;
        }
        if ( i == 10 )
          v4 = _InterlockedCompareExchange64(&qword_1C018E938, 204LL, 255LL);
        return v4 != 221 ? 0x5B4 : 0;
      default:
        return 1460;
    }
  }
  else
  {
    v1 = EtwRegister(&Microsoft_Windows_SQM_Provider, 0LL, 0LL, (PREGHANDLE)&WPP_MAIN_CB.DeviceLock);
    if ( (unsigned int)IsSessionDisabled(0LL, 0) )
      LODWORD(WPP_MAIN_CB.SecurityDescriptor) |= 1u;
    _InterlockedExchange64(&qword_1C018E938, v1 != 0 ? 238LL : 221LL);
  }
  return v1;
}
