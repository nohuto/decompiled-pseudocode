/*
 * XREFs of itrp_Normalize @ 0x1C02D0E30
 * Callers:
 *     EmboldPoint @ 0x1C02BF428 (EmboldPoint.c)
 *     itrp_SDPVTL @ 0x1C02D2080 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C02D2560 (itrp_SFVTL.c)
 *     itrp_SPVTL @ 0x1C02D3A10 (itrp_SPVTL.c)
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 *     FracMul @ 0x1C02B70A4 (FracMul.c)
 *     FracSqrt @ 0x1C02B714C (FracSqrt.c)
 */

void __fastcall itrp_Normalize(int a1, int a2, __int64 a3)
{
  int v3; // edi
  int v5; // r10d
  char v6; // cl
  signed int i; // r11d
  int v8; // eax
  int v9; // r11d
  int v10; // ebx
  int v11; // r10d

  v3 = a2;
  v5 = a1;
  if ( a1 )
  {
    if ( (unsigned int)(a1 + 0x7FFF) > 0xFFFD )
      goto LABEL_14;
  }
  else if ( !a2 )
  {
    *(_DWORD *)a3 = 0x4000;
    return;
  }
  if ( (unsigned int)(a2 + 0x7FFF) > 0xFFFD )
  {
LABEL_14:
    while ( v5 < 0x20000000 && v5 > -536870912 && (unsigned int)(v3 + 0x1FFFFFFF) <= 0x3FFFFFFE )
    {
      v5 *= 2;
      v3 *= 2;
    }
    FracMul(v5, v5);
    v8 = FracMul(v3, v3);
    i = v8 + v9;
    goto LABEL_16;
  }
  v6 = 15;
  for ( i = a2 * a2 + v5 * v5; i < 0x20000000; i *= 4 )
    ++v6;
  v3 = a2 << v6;
LABEL_16:
  v10 = FracSqrt(i);
  *(_WORD *)a3 = ((unsigned int)CompDiv(v10, (__int64)v11 << 30) + 0x8000) >> 16;
  *(_WORD *)(a3 + 2) = ((unsigned int)CompDiv(v10, (__int64)v3 << 30) + 0x8000) >> 16;
}
