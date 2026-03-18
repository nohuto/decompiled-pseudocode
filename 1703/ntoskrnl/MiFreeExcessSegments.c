/*
 * XREFs of MiFreeExcessSegments @ 0x140126A94
 * Callers:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     MiExpandPagedPool @ 0x140126B48 (MiExpandPagedPool.c)
 *     MmResourcesAvailable @ 0x14012A820 (MmResourcesAvailable.c)
 *     MiRemoveUnusedSegments @ 0x140161338 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x140085050 (MiFreePoolPagesLeft.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

__int64 MiFreeExcessSegments()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  int v2; // r9d
  int v3; // r10d
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r9d
  unsigned __int64 v8; // r8
  unsigned int v9; // ebx

  if ( !qword_14036D098 || !qword_14036D088 )
    return 0LL;
  v0 = MiFreePoolPagesLeft(6);
  v4 = v1 + v0;
  if ( v1 + v0 > (unsigned __int64)qword_140381A68 )
    v4 = qword_140381A68;
  if ( (unsigned int)(100 * v1 / v4) > dword_1403E3120 )
  {
    v9 = 1;
  }
  else
  {
    v5 = MiFreePoolPagesLeft(v2 + 5);
    v8 = v6 + v5;
    if ( v6 + v5 > (unsigned __int64)qword_140381A68 )
      v8 = qword_140381A68;
    if ( (unsigned int)(100 * v6 / v8) > dword_1403E3120 )
      ++v7;
    v9 = v7;
  }
  if ( (v9 & v3) != 0 )
    KeSetEvent(&stru_140380770, 0, 0);
  return v9;
}
