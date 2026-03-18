/*
 * XREFs of MmTrimSection @ 0x140014470
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x140014340 (CcCoherencyFlushAndPurgeCache.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 * Callees:
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 *     MiComputeFlushRange @ 0x1400989C0 (MiComputeFlushRange.c)
 *     MiFlushRelease @ 0x1400A8C60 (MiFlushRelease.c)
 */

__int64 __fastcall MmTrimSection(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  __int64 v7; // rax
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v4 = (a4 & 1) << 18;
  if ( a2 )
  {
    v7 = *a2;
    a2 = &v9;
    v9 = v7;
  }
  if ( !(unsigned int)MiComputeFlushRange(a1, a2, a3, v8) )
    return 0LL;
  v5 = MiTrimSection(v8, 0LL, v4);
  MiFlushRelease(v8[0], v8[3], v8[4]);
  return v5;
}
