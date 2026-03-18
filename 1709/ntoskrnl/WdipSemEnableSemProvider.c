/*
 * XREFs of WdipSemEnableSemProvider @ 0x1405AADCC
 * Callers:
 *     WdipSemCleanStart @ 0x1405AB080 (WdipSemCleanStart.c)
 * Callees:
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     WdipSemEnableDisableTrace @ 0x1405A8CF4 (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemEnableSemProvider()
{
  int v0; // ecx
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  RegHandle = 0LL;
  v0 = WdipSemEnableDisableTrace(
         _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId),
         (__int128 *)&WDI_SEM_PROVIDER,
         0,
         0x200000000LL,
         0,
         1);
  if ( v0 >= 0 )
  {
    v0 = WdipSemEnableDisableTrace(
           _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
           (__int128 *)&WDI_SEM_PROVIDER,
           0,
           0x100000000LL,
           0,
           1);
    if ( v0 >= 0 && !WdipSemRegHandle )
    {
      v0 = EtwRegister(&WDI_SEM_PROVIDER, 0LL, 0LL, &RegHandle);
      if ( v0 >= 0 )
        WdipSemRegHandle = RegHandle;
    }
  }
  return (unsigned int)v0;
}
