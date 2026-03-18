/*
 * XREFs of KiDetectAccessBitErrata @ 0x140410754
 * Callers:
 *     KiSetFeatureBits @ 0x14040FD30 (KiSetFeatureBits.c)
 * Callees:
 *     <none>
 */

void __fastcall KiDetectAccessBitErrata(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  __int64 v3; // r8
  int v4; // eax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    v2 = *(_BYTE *)(a1 + 141);
    if ( v2 == 1 )
    {
      if ( *(_BYTE *)(a1 + 64) == 23 )
        KiAccessBitErrata = 1;
    }
    else if ( v2 == 2 && *(_BYTE *)(a1 + 64) == 6 )
    {
      if ( (LOBYTE(a2) = *(_BYTE *)(a1 + 67), (unsigned __int8)a2 <= 0x36u)
        && (v3 = 0x6000C010000000LL, _bittest64(&v3, a2))
        || (LOBYTE(a2) = a2 - 55, (unsigned __int8)a2 <= 0x16u)
        && (v4 = 4718593, _bittest(&v4, a2))
        && *(_BYTE *)(a1 + 66) <= 7u )
      {
        KiAccessBitErrata = 2;
      }
    }
  }
}
