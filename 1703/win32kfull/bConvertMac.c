/*
 * XREFs of bConvertMac @ 0x1C022711C
 * Callers:
 *     bConvertExtras @ 0x1C0226D68 (bConvertExtras.c)
 * Callees:
 *     vCvtMacToUnicode @ 0x1C023266C (vCvtMacToUnicode.c)
 */

__int64 __fastcall bConvertMac(__int64 a1, _DWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r11

  if ( *a2 )
  {
    vCvtMacToUnicode(a1, a1, a3, (unsigned int)((*a2 >> 1) - 1));
    *(_WORD *)(v5 + 2 * v4) = 0;
  }
  else
  {
    *a2 = 2 * a4 + 2;
  }
  return 1LL;
}
