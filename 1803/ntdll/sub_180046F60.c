/*
 * XREFs of sub_180046F60 @ 0x180046F60
 * Callers:
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_180046E54 @ 0x180046E54 (sub_180046E54.c)
 *     LdrUnlockLoaderLock @ 0x180047B80 (LdrUnlockLoaderLock.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180048720 (LdrEnumerateLoadedModules.c)
 *     sub_180078130 @ 0x180078130 (sub_180078130.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_180043B30 @ 0x180043B30 (sub_180043B30.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

__int64 __fastcall sub_180046F60(__int64 a1, char a2, int a3)
{
  unsigned __int32 v5; // esi
  __int64 v6; // rcx
  int v8; // r9d
  __int64 v9; // rcx

  v5 = RtlLeaveCriticalSection(&stru_1801565B0);
  if ( a3 < 0 )
    sub_180043B30(a3, 162, a2, 0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  else
    v6 = 2147353476LL;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    else
      v9 = 2147353477LL;
    if ( (*(_BYTE *)v9 & 0x20) != 0 )
    {
      LOBYTE(v8) = a2;
      sub_1800CBAB0(5282, 0, 0, v8, 0LL, 0LL);
    }
  }
  return v5;
}
