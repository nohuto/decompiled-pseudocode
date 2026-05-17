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

__int64 __fastcall sub_180019FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  struct _PEB *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // r8d
  int v21; // r9d
  char *v22; // rcx
  int v23; // r8d
  int v24; // r9d

  v7 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v8 = 2147353476LL;
  v9 = 2147353477LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v22 = (unsigned int)RtlGetCurrentServiceSessionId(v8, v4, v5, v6)
        ? (char *)NtCurrentPeb()->HotpatchInformation + 555
        : (char *)2147353477;
    if ( (*v22 & 0x20) != 0 )
    {
      LOBYTE(v21) = -1;
      LOBYTE(v20) = -1;
      sub_1800D62F0(5248, -1, v20, v21, 0LL, 0LL);
    }
  }
  v10 = RtlEnterCriticalSection(&off_1801555A8);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11, v13, v14) )
  {
    v16 = NtCurrentPeb();
    v7 = (__int64)v16->HotpatchInformation + 554;
  }
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15, v17, v18) )
      v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    if ( (*(_BYTE *)v9 & 0x20) != 0 )
    {
      LOBYTE(v24) = -1;
      LOBYTE(v23) = -1;
      sub_1800D62F0(5249, -1, v23, v24, 0LL, 0LL);
    }
  }
  return v10;
}
