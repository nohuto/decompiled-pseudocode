/*
 * XREFs of fsg_InitInterpreterTrans @ 0x1C02C7CB4
 * Callers:
 *     fs__NewTransformation @ 0x1C02BCA4C (fs__NewTransformation.c)
 * Callees:
 *     mth_IsMatrixStretched @ 0x1C02BDA5C (mth_IsMatrixStretched.c)
 *     mth_PositiveSquare @ 0x1C02BDC84 (mth_PositiveSquare.c)
 *     scl_InitializeScaling @ 0x1C02BE930 (scl_InitializeScaling.c)
 */

__int64 __fastcall fsg_InitInterpreterTrans(
        __int64 a1,
        __int64 a2,
        int a3,
        __int16 a4,
        __int16 a5,
        int a6,
        __int16 a7,
        unsigned __int16 a8,
        __int16 a9,
        int a10,
        _WORD *a11,
        __int16 *a12)
{
  unsigned __int16 v12; // si
  __int16 v13; // bp
  int *v14; // rdi
  __int64 result; // rax
  unsigned int v17; // eax
  BOOL v18; // eax
  int *v19; // rcx
  int v20; // r11d
  int v21; // [rsp+38h] [rbp-50h]
  unsigned int v22; // [rsp+90h] [rbp+8h] BYREF

  v12 = a8;
  v13 = a7;
  v14 = (int *)(a1 + 4);
  LOWORD(v21) = a7;
  result = scl_InitializeScaling(
             a2,
             *(_DWORD *)(a1 + 48),
             (int *)(a1 + 4),
             *(_WORD *)a1,
             a3,
             a4,
             a5,
             v21,
             a8,
             a9,
             a10,
             a11,
             a12,
             a6,
             &v22);
  if ( !(_DWORD)result )
  {
    v17 = v22;
    *(_DWORD *)(a1 + 40) = 0;
    if ( v17 <= 0xFF )
      *(_DWORD *)(a1 + 56) = v17;
    else
      *(_DWORD *)(a1 + 56) = 255;
    v18 = mth_PositiveSquare(v14);
    *(_DWORD *)(a1 + 44) = v18;
    if ( v14[1] != v20 || v14[3] != v20 || *v14 < v20 || v14[4] < v20 )
      *(_DWORD *)(a1 + 56) |= 0x2000u;
    if ( !v18 )
    {
      if ( (*v14 != v20 || v14[4] != v20) && (v14[3] != v20 || v14[1] != v20) )
        *(_DWORD *)(a1 + 56) |= 0x400u;
      *(_DWORD *)(a1 + 56) |= 0x1000u;
      *(_DWORD *)(a1 + 40) = mth_IsMatrixStretched(v19);
    }
    if ( v13 || v12 )
      v20 = 1;
    *(_DWORD *)(a1 + 60) = v20;
    return 0LL;
  }
  return result;
}
