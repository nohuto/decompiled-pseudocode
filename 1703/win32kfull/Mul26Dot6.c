/*
 * XREFs of Mul26Dot6 @ 0x1C02BD3AC
 * Callers:
 *     EmboldPoint @ 0x1C02C55D8 (EmboldPoint.c)
 *     itrp_ISECT @ 0x1C02D3690 (itrp_ISECT.c)
 *     itrp_MUL @ 0x1C02D6C20 (itrp_MUL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Mul26Dot6(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // r11d
  unsigned int v4; // r10d
  __int64 result; // rax
  int v6; // r9d
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // r8d
  int v10; // eax
  unsigned int v11; // r10d

  v2 = a1;
  v3 = 0;
  v4 = a2;
  if ( a1 <= 46340 && a2 <= 46340 && a1 >= -46340 && a2 >= -46340 )
    return (unsigned int)((a2 * a1 + 32) >> 6);
  if ( a1 < 0 )
  {
    v2 = -a1;
    v3 = 1;
  }
  if ( a2 < 0 )
  {
    v4 = -a2;
    v3 ^= 1u;
  }
  v6 = (unsigned __int16)v2;
  v7 = HIWORD(v2);
  v8 = (unsigned __int16)v2;
  v9 = (unsigned __int16)v4;
  v10 = (unsigned __int16)v4 * HIWORD(v2);
  v11 = HIWORD(v4);
  result = ((((v10 + v11 * v8) << 16) + 32 + v9 * v6) >> 6) | (((((v10 + v11 * v8) << 16) + 32 + v9 * v6 < ((v10 + v11 * v8) << 16) + 32)
                                                              + v7 * v11
                                                              + ((v10 + v11 * v8) >> 16)) << 26);
  if ( v3 )
    return (unsigned int)-(int)result;
  return result;
}
