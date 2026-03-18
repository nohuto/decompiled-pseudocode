/*
 * XREFs of bGetGlyphMetrics @ 0x1C022C7EC
 * Callers:
 *     lGetGlyphBitmap @ 0x1C022D6AC (lGetGlyphBitmap.c)
 * Callees:
 *     bGetGlyphOutline @ 0x1C022C864 (bGetGlyphOutline.c)
 *     fs_FindBitMapSize @ 0x1C02BAEC8 (fs_FindBitMapSize.c)
 */

__int64 __fastcall bGetGlyphMetrics(__int64 a1, int a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  int BitMapSize; // eax
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  if ( !(unsigned int)bGetGlyphOutline(a1, a2, (unsigned int)&v9, 1, (__int64)a4) )
    return 0LL;
  BitMapSize = fs_FindBitMapSize(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184));
  if ( BitMapSize )
  {
    *a4 = BitMapSize;
    return 0LL;
  }
  result = 1LL;
  *(_DWORD *)(a1 + 20) = v9;
  *(_DWORD *)(a1 + 16) = a2;
  return result;
}
