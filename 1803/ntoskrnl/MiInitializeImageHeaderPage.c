/*
 * XREFs of MiInitializeImageHeaderPage @ 0x1400C7E10
 * Callers:
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

char __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  char result; // al
  __int64 v8; // rcx
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  v6 = MiMapPageInHyperSpaceWorker(a1, &v9, 0x80000000, a4);
  memset((void *)(v6 + a2), 0, 4096 - a2);
  result = MiUnmapPageInHyperSpaceWorker(v6, v9, 0x80000000);
  if ( (a2 & 0x1FF) != 0 )
  {
    v8 = 48 * a1 - 0x58000000000LL;
    result = *(_BYTE *)(v8 + 34) | 0x10;
    *(_BYTE *)(v8 + 34) = result;
  }
  return result;
}
