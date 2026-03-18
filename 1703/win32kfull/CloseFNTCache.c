/*
 * XREFs of CloseFNTCache @ 0x1C000A6DC
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C000A1A0 (xxxLW_LoadFonts.c)
 *     EngFntCacheAlloc @ 0x1C013B980 (EngFntCacheAlloc.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x1C0008400 (ComputeFileviewCheckSum.c)
 *     bSetFntCacheReg @ 0x1C00084C4 (bSetFntCacheReg.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0009204 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void CloseFNTCache()
{
  char v0; // al
  _DWORD *v1; // rdx
  int v2; // edx
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = ghsemFntCache;
  GreAcquireSemaphore(ghsemFntCache);
  v0 = dword_1C032C4C0;
  if ( (dword_1C032C4C0 & 3) == 0 || (v1 = (_DWORD *)qword_1C032C4C8) == 0LL )
  {
    dword_1C032C4C0 = 0;
    gbFntCacheClosed = 1;
    goto LABEL_6;
  }
  if ( (dword_1C032C4C0 & 2) != 0 )
  {
    if ( *(_QWORD *)qword_1C032C4C8 && *(_DWORD *)(qword_1C032C4C8 + 96) )
    {
      *(_DWORD *)(*(_QWORD *)qword_1C032C4C8 + 20LL) = *(_DWORD *)(qword_1C032C4C8 + 8);
      *(_DWORD *)(*(_QWORD *)v1 + 36LL) = v1[8] - v1[6];
      v3 = ComputeFileviewCheckSum((_DWORD *)(*(_QWORD *)v1 + 4LL), *(_DWORD *)(*(_QWORD *)v1 + 24LL) - 4);
      v1 = (_DWORD *)qword_1C032C4C8;
      **(_DWORD **)qword_1C032C4C8 = v3;
      v0 = dword_1C032C4C0;
    }
    if ( (v0 & 2) != 0 )
    {
      v4 = v1[4];
      if ( v1[3] != v4 )
        bSetFntCacheReg(1u, v4);
      v2 = 0;
      v5 = 0;
      goto LABEL_14;
    }
  }
  v2 = v1[4];
  if ( (v2 & 3) != 0 )
  {
    v5 = 1;
LABEL_14:
    bSetFntCacheReg(v5, v2);
  }
  vCleanUpFntCacheInternal();
LABEL_6:
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
}
