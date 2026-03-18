/*
 * XREFs of KiDetectCacheErrata @ 0x14047A44C
 * Callers:
 *     KiSetFeatureBits @ 0x140479754 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void __fastcall KiDetectCacheErrata(__int64 a1)
{
  int v1; // r8d
  unsigned int v2; // edx
  unsigned int v3; // eax

  if ( !*(_DWORD *)(a1 + 36) && *(_BYTE *)(a1 + 141) == 1 )
  {
    v1 = *(char *)(a1 + 64);
    v2 = *(unsigned __int8 *)(a1 + 67);
    v3 = *(unsigned __int8 *)(a1 + 66);
    if ( v1 == 15 )
    {
      if ( (v2 == 107 || v2 == 104) && v3 == 1 )
        KiCacheErrataMonitor |= 1uLL;
    }
    else if ( v1 == 16
           && (__PAIR64__(v2, v3) <= 2 || v2 == 2 && (v3 <= 2 || v3 == 10) || v2 == 4 && !*(_BYTE *)(a1 + 66)) )
    {
      KiCacheErrataMonitor |= 2uLL;
    }
  }
}
