/*
 * XREFs of sub_180046FBC @ 0x180046FBC
 * Callers:
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_180046E54 @ 0x180046E54 (sub_180046E54.c)
 *     LdrLockLoaderLock @ 0x180047C20 (LdrLockLoaderLock.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180048720 (LdrEnumerateLoadedModules.c)
 *     sub_180078140 @ 0x180078140 (sub_180078140.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

__int64 sub_180046FBC()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdi
  unsigned __int32 v3; // esi
  int v5; // r8d
  int v6; // r9d
  USHORT *v7; // rcx
  int v8; // r8d
  int v9; // r9d

  v0 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  else
    v1 = 2147353476LL;
  v2 = 2147353477LL;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v7 = RtlGetCurrentServiceSessionId()
       ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
       : (USHORT *)2147353477;
    if ( (*(_BYTE *)v7 & 0x20) != 0 )
    {
      LOBYTE(v6) = -1;
      LOBYTE(v5) = -1;
      sub_1800CBAB0(5248, -1, v5, v6, 0LL, 0LL);
    }
  }
  v3 = RtlEnterCriticalSection(&stru_1801565B0);
  if ( RtlGetCurrentServiceSessionId() )
    v0 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    if ( (*(_BYTE *)v2 & 0x20) != 0 )
    {
      LOBYTE(v9) = -1;
      LOBYTE(v8) = -1;
      sub_1800CBAB0(5249, -1, v8, v9, 0LL, 0LL);
    }
  }
  return v3;
}
