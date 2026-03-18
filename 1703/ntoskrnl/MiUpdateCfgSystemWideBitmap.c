/*
 * XREFs of MiUpdateCfgSystemWideBitmap @ 0x140495C30
 * Callers:
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
 * Callees:
 *     MiSelectBitMapForImage @ 0x140495F78 (MiSelectBitMapForImage.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140514AB0 (MiUpdateCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmap(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // r10
  __int64 result; // rax

  v4 = *a1;
  if ( *((_DWORD *)a1 + 22) == -1 || (a1[7] & 0x10000000) != 0 )
    return 0LL;
  v5 = 2 * (a2 >> 4);
  v6 = 2 * ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), -1LL, -1LL) >> 4);
  v7 = 0;
  do
  {
    v8 = qword_14036BFF0;
    if ( !v7 && !(unsigned int)MiSelectBitMapForImage(v4) )
      v8 = qword_14036BFE0;
    result = MiUpdateCfgSystemWideBitmapWorker(v8, a3, v5, v6);
    if ( (int)result < 0 )
      break;
    ++v7;
    if ( !a3 )
      break;
  }
  while ( v7 < 1 );
  return result;
}
