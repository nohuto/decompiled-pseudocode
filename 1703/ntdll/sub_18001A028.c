/*
 * XREFs of sub_18001A028 @ 0x18001A028
 * Callers:
 *     sub_180011D94 @ 0x180011D94 (sub_180011D94.c)
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     sub_180068370 @ 0x180068370 (sub_180068370.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     LdrUnlockLoaderLock @ 0x180081C00 (LdrUnlockLoaderLock.c)
 *     LdrEnumerateLoadedModules @ 0x180083E40 (LdrEnumerateLoadedModules.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 *     sub_1800D7B28 @ 0x1800D7B28 (sub_1800D7B28.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

__int64 __fastcall sub_18001A028(__int64 a1, char a2, int a3)
{
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v15; // r9d
  __int64 v16; // rcx

  v6 = RtlLeaveCriticalSection(&off_1801555A8);
  v9 = (unsigned int)~a3;
  if ( a3 < 0 )
  {
    LOBYTE(v7) = a2;
    sub_180084734((unsigned int)a3, 5282LL, v7, 0LL);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v5, v7, v8) )
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
  else
    v13 = 2147353476LL;
  if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v13, v10, v11, v12) )
      v16 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
    else
      v16 = 2147353477LL;
    if ( (*(_BYTE *)v16 & 0x20) != 0 )
    {
      LOBYTE(v15) = a2;
      sub_1800D62F0(5282, 0, 0, v15, 0LL, 0LL);
    }
  }
  return v6;
}
