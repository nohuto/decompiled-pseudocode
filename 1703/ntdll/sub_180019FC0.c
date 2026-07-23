/*
 * XREFs of sub_180019FC0 @ 0x180019FC0
 * Callers:
 *     sub_180011D94 @ 0x180011D94 (sub_180011D94.c)
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     sub_180068380 @ 0x180068380 (sub_180068380.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     LdrLockLoaderLock @ 0x1800803F0 (LdrLockLoaderLock.c)
 *     LdrEnumerateLoadedModules @ 0x180083E40 (LdrEnumerateLoadedModules.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

__int64 sub_180019FC0()
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
      sub_1800D62F0(5248, -1, v5, v6, 0LL, 0LL);
    }
  }
  v3 = RtlEnterCriticalSection(&stru_1801555A8);
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
      sub_1800D62F0(5249, -1, v8, v9, 0LL, 0LL);
    }
  }
  return v3;
}
