/*
 * XREFs of MiInitializeImageHeaderPage @ 0x1400B7A00
 * Callers:
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = MiMapPageInHyperSpaceWorker(a1, &v7, 0x80000000LL);
  memset((void *)(v4 + a2), 0, 4096 - a2);
  LOBYTE(v5) = v7;
  result = MiUnmapPageInHyperSpaceWorker(v4, v5, 0x80000000LL);
  if ( (a2 & 0x1FF) != 0 )
  {
    result = 6 * a1;
    *(_BYTE *)(48 * a1 - 0x57FFFFFFFDELL) |= 0x10u;
  }
  return result;
}
