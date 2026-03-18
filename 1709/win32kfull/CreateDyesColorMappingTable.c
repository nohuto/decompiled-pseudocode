/*
 * XREFs of CreateDyesColorMappingTable @ 0x1C0079748
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00799CC (AAHalftoneBitmap.c)
 * Callees:
 *     ComputeRGBLUTAA @ 0x1C0078BBC (ComputeRGBLUTAA.c)
 *     ComputeChecksum @ 0x1C0079110 (ComputeChecksum.c)
 *     CachedHalftonePattern @ 0x1C00797DC (CachedHalftonePattern.c)
 *     AddBGRMapCache @ 0x1C023E724 (AddBGRMapCache.c)
 *     ComputeBGRMappingTable @ 0x1C023E944 (ComputeBGRMappingTable.c)
 *     FindBGRMapCache @ 0x1C023F474 (FindBGRMapCache.c)
 */

__int64 __fastcall CreateDyesColorMappingTable(__int64 a1)
{
  _DWORD *v1; // rbp
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v5; // eax
  unsigned int v6; // r10d
  unsigned int v7; // eax
  int v8; // r10d
  __int64 v9; // r14
  void *BGRMapCache; // rbx
  PVOID v11; // rax
  __int64 v12; // rcx

  v1 = *(_DWORD **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(v2 + 29) = 4;
  ComputeRGBLUTAA(v1, (__int128 *)v2, v1 + 214);
  if ( (*(_DWORD *)(v2 + 56) & 0x40000000) != 0 )
    return CachedHalftonePattern(
             (_DWORD)v1,
             v2,
             (int)v3 + 408,
             *(_DWORD *)(v3 + 328),
             *(_DWORD *)(v3 + 332),
             *(_DWORD *)v3 & 2);
  v5 = ComputeChecksum((char *)(v2 + 124), 0x12345678u, 0x50u);
  v7 = ComputeChecksum((char *)(v2 + 204), v5, v6);
  v9 = (unsigned int)ComputeChecksum((char *)v2, v7, v8 - 56);
  BGRMapCache = (void *)FindBGRMapCache(0LL, v9);
  if ( BGRMapCache )
    goto LABEL_10;
  v11 = EngAllocMem(0, 0x18006u, 0x31365448u);
  BGRMapCache = v11;
  if ( !v11 )
    return 4294967294LL;
  if ( (unsigned int)ComputeBGRMappingTable(v12, v2, 0LL, v11) == 0x8000 )
  {
    if ( !(unsigned int)AddBGRMapCache(BGRMapCache, (unsigned int)v9) )
    {
      EngFreeMem(BGRMapCache);
      return 4294967294LL;
    }
LABEL_10:
    *(_QWORD *)(v3 + 392) = BGRMapCache;
    return CachedHalftonePattern(
             (_DWORD)v1,
             v2,
             (int)v3 + 408,
             *(_DWORD *)(v3 + 328),
             *(_DWORD *)(v3 + 332),
             *(_DWORD *)v3 & 2);
  }
  return 4294957291LL;
}
