/*
 * XREFs of vBmfdScrubGLYPHBITS @ 0x1C0233908
 * Callers:
 *     BmfdQueryFontData @ 0x1C023307C (BmfdQueryFontData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vBmfdScrubGLYPHBITS(__int64 a1)
{
  unsigned __int64 result; // rax
  char v2; // r8
  int v3; // eax
  __int64 v4; // r9
  _BYTE *v5; // rdx

  result = *(_DWORD *)(a1 + 8) & 7;
  v2 = byte_1C02F0420[result];
  if ( v2 )
  {
    v3 = (*(_DWORD *)(a1 + 8) + 7) / 8;
    v4 = v3;
    v5 = (_BYTE *)(v3 + a1 + 15);
    result = (unsigned __int64)&v5[*(_DWORD *)(a1 + 12) * v3];
    while ( (unsigned __int64)v5 < result )
    {
      *v5 &= v2;
      v5 += v4;
    }
  }
  return result;
}
