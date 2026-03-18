/*
 * XREFs of SubstituteVertMetrics @ 0x1C02C2C84
 * Callers:
 *     GetSbitMetrics @ 0x1C02C22E0 (GetSbitMetrics.c)
 *     sbit_GetDevAdvanceHeight @ 0x1C02C44B0 (sbit_GetDevAdvanceHeight.c)
 * Callees:
 *     SEmScaleY @ 0x1C02C2548 (SEmScaleY.c)
 *     UEmScaleY @ 0x1C02C2CE8 (UEmScaleY.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C02CADA4 (sfac_ReadGlyphVertMetrics.c)
 */

__int64 __fastcall SubstituteVertMetrics(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v4; // ax
  __int64 v5; // rdx
  unsigned __int16 v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int16 v7; // [rsp+40h] [rbp+18h] BYREF

  result = sfac_ReadGlyphVertMetrics(a2, *(unsigned __int16 *)(a2 + 216), &v6, &v7);
  if ( !(_DWORD)result )
  {
    v4 = UEmScaleY(a1, v6);
    v5 = v7;
    a1[26] = v4;
    a1[39] = a1[37];
    a1[40] = -SEmScaleY((__int64)a1, v5);
    return 0LL;
  }
  return result;
}
