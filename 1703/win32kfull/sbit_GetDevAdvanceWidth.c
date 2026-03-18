/*
 * XREFs of sbit_GetDevAdvanceWidth @ 0x1C02C45E4
 * Callers:
 *     fs__Contour @ 0x1C02BC2C8 (fs__Contour.c)
 * Callees:
 *     SubstituteHorMetrics @ 0x1C02C2BF0 (SubstituteHorMetrics.c)
 *     UScaleX @ 0x1C02C2D20 (UScaleX.c)
 *     sbit_ValidateScaleX @ 0x1C02C4E6C (sbit_ValidateScaleX.c)
 *     sfac_GetSbitMetrics @ 0x1C02CA2A8 (sfac_GetSbitMetrics.c)
 */

__int64 __fastcall sbit_GetDevAdvanceWidth(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int16 *v4; // r12
  __int64 result; // rax
  _WORD *v8; // rcx
  unsigned __int16 v9; // ax
  int v10; // ecx
  int v11; // [rsp+A0h] [rbp+8h] BYREF
  char v12; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned __int16 *)(a1 + 50);
  result = sfac_GetSbitMetrics(
             a2,
             *(unsigned __int16 *)(a1 + 40),
             *(unsigned __int16 *)(a1 + 42),
             *(_DWORD *)(a1 + 4),
             a1 + 46,
             a1 + 48,
             a1 + 74,
             a1 + 76,
             a1 + 78,
             a1 + 80,
             a1 + 50,
             a1 + 52,
             (__int64)&v11,
             (__int64)&v12);
  if ( !(_DWORD)result )
  {
    if ( v11 || (result = SubstituteHorMetrics((_WORD *)a1, a2), !(_DWORD)result) )
    {
      result = sbit_ValidateScaleX(a1);
      if ( !(_DWORD)result )
      {
        v9 = UScaleX(v8, *v4);
        v10 = v9 << 6;
        if ( *(_WORD *)(a1 + 38) )
        {
          if ( *(_WORD *)(a1 + 38) == 1 )
          {
LABEL_11:
            *a3 = 0;
            a3[1] = v10;
            return 0LL;
          }
          if ( *(_WORD *)(a1 + 38) != 2 )
          {
            if ( *(_WORD *)(a1 + 38) != 3 )
              return 6146LL;
            v10 = -64 * v9;
            goto LABEL_11;
          }
          v10 = -64 * v9;
        }
        a3[1] = 0;
        *a3 = v10;
        return 0LL;
      }
    }
  }
  return result;
}
