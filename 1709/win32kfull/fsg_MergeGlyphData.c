/*
 * XREFs of fsg_MergeGlyphData @ 0x1C02C1D64
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02C105C (fsg_ExecuteGlyph.c)
 * Callees:
 *     mth_IntelMul @ 0x1C02B76D8 (mth_IntelMul.c)
 *     scl_CalcComponentOffset @ 0x1C02B7E88 (scl_CalcComponentOffset.c)
 *     scl_InitializeChildScaling @ 0x1C02B8684 (scl_InitializeChildScaling.c)
 *     scl_ScaleFixedCurrentCharPoints @ 0x1C02B957C (scl_ScaleFixedCurrentCharPoints.c)
 *     scl_ScaleFixedCurrentPhantomPoints @ 0x1C02B9670 (scl_ScaleFixedCurrentPhantomPoints.c)
 *     scl_ShiftCurrentCharPoints @ 0x1C02B9A4C (scl_ShiftCurrentCharPoints.c)
 *     scl_UpdateParentElement @ 0x1C02B9B4C (scl_UpdateParentElement.c)
 *     itrp_SetSameTransformFlag @ 0x1C02D44EC (itrp_SetSameTransformFlag.c)
 */

__int64 __fastcall fsg_MergeGlyphData(_DWORD *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int128 *v4; // r14
  int v5; // eax
  __int64 v7; // rdi
  __int64 v9; // r12
  int v10; // r15d
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm0
  int v16; // r9d
  __int128 v17; // xmm1
  __int16 v18; // r8
  __int16 v19; // dx
  int v20; // r8d
  int v21; // edx
  __int16 v22; // ax
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int16 v26; // r8
  __int16 v27; // cx
  __int16 v28; // ax
  __int64 result; // rax
  int v30; // [rsp+20h] [rbp-60h]
  int v31; // [rsp+28h] [rbp-58h]
  __int128 v32; // [rsp+50h] [rbp-30h] BYREF
  __int128 v33; // [rsp+60h] [rbp-20h]
  int v34; // [rsp+70h] [rbp-10h]
  int v35; // [rsp+C8h] [rbp+48h] BYREF
  unsigned __int16 v36; // [rsp+D0h] [rbp+50h]
  int v37; // [rsp+D8h] [rbp+58h] BYREF

  v36 = a3;
  v3 = *(_QWORD *)(a2 + 24);
  v4 = (__int128 *)(a2 + 96);
  v5 = *(_DWORD *)(a2 + 96);
  v7 = *(_QWORD *)(a2 + 176);
  v9 = *(_QWORD *)(v3 + 176);
  if ( v5 != *(_DWORD *)(a2 + 112) || *(_DWORD *)(a2 + 100) || *(_DWORD *)(a2 + 108) || v5 != 0x10000 )
    mth_IntelMul(
      (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1)) + 9),
      *(char **)v7,
      *(int **)(v7 + 8),
      (int *)(a2 + 96),
      0x10000,
      0x10000);
  if ( !*(_DWORD *)(a2 + 220) && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 220LL) )
  {
    itrp_SetSameTransformFlag(a1, 1LL);
    scl_ScaleFixedCurrentCharPoints((__int64 *)v7, (__int64)a1);
    scl_ScaleFixedCurrentPhantomPoints(v7, (__int64)a1);
    *(_DWORD *)(a2 + 220) = 1;
  }
  if ( *(_DWORD *)(v3 + 188) || *(_DWORD *)(v3 + 196) )
  {
    if ( *(_DWORD *)(v3 + 184) || (v10 = 1, *(_DWORD *)(v3 + 200)) )
      v10 = 2;
  }
  else
  {
    v10 = 0;
  }
  if ( *(_DWORD *)(a2 + 80) == 1 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    if ( !*(_DWORD *)(v11 + 220) )
    {
      v12 = *(_OWORD *)(v11 + 184);
      v13 = *(_OWORD *)(v11 + 200);
      v14 = *(_DWORD *)(v11 + 216);
      v32 = v12;
      v33 = v13;
      v34 = v14;
      scl_InitializeChildScaling(a1, (int *)&v32, v36);
    }
    v15 = *v4;
    v16 = *(_DWORD *)(a2 + 84);
    v17 = v4[1];
    v18 = *(_WORD *)(a2 + 90);
    v19 = *(_WORD *)(a2 + 88);
    v34 = *((_DWORD *)v4 + 8);
    v31 = *(_DWORD *)(a2 + 140);
    v30 = *(_DWORD *)(a2 + 220);
    v32 = v15;
    v33 = v17;
    scl_CalcComponentOffset((__int64)a1, v19, v18, v16, v30, v31, (int *)&v32, v10, &v37, &v35);
    v20 = v35;
    v21 = v37;
  }
  else
  {
    v22 = *(_WORD *)(v9 + 80);
    if ( !v22 )
      return 5121LL;
    v23 = *(unsigned __int16 *)(a2 + 92);
    if ( (int)v23 > *(__int16 *)(*(_QWORD *)(v9 + 64) + 2LL * (v22 - 1)) + 8 )
      return 5121LL;
    v24 = *(unsigned __int16 *)(a2 + 94);
    if ( (int)v24 > *(__int16 *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1)) + 8 )
      return 5121LL;
    v21 = *(_DWORD *)(*(_QWORD *)v9 + 4 * v23) - *(_DWORD *)(*(_QWORD *)v7 + 4 * v24);
    v20 = *(_DWORD *)(*(_QWORD *)(v9 + 8) + 4LL * *(unsigned __int16 *)(a2 + 92))
        - *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v24);
  }
  scl_ShiftCurrentCharPoints(v7, v21, v20);
  if ( *(_DWORD *)(a2 + 136) )
  {
    *(_DWORD *)(v3 + 132) = 1;
    v25 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1)) + 1);
    v26 = *(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1)) + 2;
    *(_DWORD *)(v3 + 144) = *(_DWORD *)(*(_QWORD *)v7 + 4 * v25);
    *(_DWORD *)(v3 + 148) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v25);
    *(_DWORD *)(v3 + 152) = *(_DWORD *)(*(_QWORD *)v7 + 4LL * v26);
    *(_DWORD *)(v3 + 156) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4LL * v26);
  }
  v27 = *(_WORD *)(v3 + 160);
  v28 = *(_WORD *)(a2 + 160);
  if ( v27 != -1 )
    v28 = (unsigned __int8)v27 & (v28 & 3 | 4);
  *(_WORD *)(v3 + 160) = v28;
  result = scl_UpdateParentElement(v7, v9);
  *(_WORD *)(v7 + 80) = 0;
  return result;
}
