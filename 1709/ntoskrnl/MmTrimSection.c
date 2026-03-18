/*
 * XREFs of MmTrimSection @ 0x1400F2370
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x1400F2240 (CcCoherencyFlushAndPurgeCache.c)
 *     CcPurgeCacheSection @ 0x1400F28C0 (CcPurgeCacheSection.c)
 * Callees:
 *     MiFlushRelease @ 0x1400A2708 (MiFlushRelease.c)
 *     MiComputeFlushRange @ 0x1400A4B48 (MiComputeFlushRange.c)
 *     MiTrimSection @ 0x1400F23D8 (MiTrimSection.c)
 */

__int64 __fastcall MmTrimSection(__int64 a1, unsigned __int64 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned __int64 v7; // rax
  __int64 v8[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v4 = (a4 & 1) << 18;
  if ( a2 )
  {
    v7 = *a2;
    a2 = &v9;
    v9 = v7;
  }
  if ( !(unsigned int)MiComputeFlushRange(a1, a2, a3, (__int64)v8) )
    return 0LL;
  v5 = MiTrimSection(v8, 0LL, v4);
  MiFlushRelease(v8[0], v8[3], v8[4]);
  return v5;
}
