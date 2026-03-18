/*
 * XREFs of vFillGLYPHDATA_ErrRecover @ 0x1C0230FA0
 * Callers:
 *     lGetGlyphBitmapErrRecover @ 0x1C022EF08 (lGetGlyphBitmapErrRecover.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     bGetFastAdvanceWidth @ 0x1C022DB2C (bGetFastAdvanceWidth.c)
 *     vGetNotionalGlyphMetrics @ 0x1C0231434 (vGetNotionalGlyphMetrics.c)
 *     vLTimesVtfl @ 0x1C023A4B4 (vLTimesVtfl.c)
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 */

__int64 __fastcall vFillGLYPHDATA_ErrRecover(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r15d
  int v7; // ebx
  int *v8; // r14
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  int fixed; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 result; // rax
  _DWORD *v16; // r11
  unsigned int v17; // ebx
  char v18; // r8
  int v19; // eax
  _BYTE v20[2]; // [rsp+20h] [rbp-10h] BYREF
  __int16 v21; // [rsp+22h] [rbp-Eh]
  __int16 v22; // [rsp+28h] [rbp-8h]
  __int16 v23; // [rsp+2Ah] [rbp-6h]
  int v24; // [rsp+60h] [rbp+30h] BYREF

  *(_DWORD *)(a4 + 8) = a1;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 40) = 0LL;
  *(_QWORD *)(a4 + 24) = 0LL;
  v6 = a2;
  vGetNotionalGlyphMetrics(a3, a2, v20);
  if ( (*(_DWORD *)(a3 + 116) & 1) != 0 )
  {
    v7 = *(_DWORD *)(a3 + 80);
    if ( v7 < 0 )
      v7 = -v7;
    v8 = (int *)(a4 + 12);
    if ( !(unsigned int)bGetFastAdvanceWidth(a3, v6, (unsigned int *)(a4 + 12)) )
      *v8 = 16 * FixMul((unsigned int)v23, *(unsigned int *)(a3 + 80), v9);
    v10 = *v8;
    *(_DWORD *)(a4 + 48) = 0;
    *(_DWORD *)(a4 + 52) = v10;
    if ( *(int *)(a3 + 80) < 0 )
      *v8 = -v10;
    v11 = (unsigned int)v22;
    *(_QWORD *)(a4 + 56) = 0LL;
    fixed = FixMul((unsigned int)v7, v11, v9);
    v13 = (unsigned int)v21;
    *(_DWORD *)(a4 + 16) = 16 * fixed;
    result = 16 * (unsigned int)FixMul((unsigned int)v7, v13, v14);
    *(_DWORD *)(a4 + 20) = result;
  }
  else
  {
    v17 = v23;
    v24 = 0;
    bFToL((float)v23 * *(float *)(a3 + 224), &v24, 0);
    v8 = (int *)(a4 + 12);
    *(_DWORD *)(a4 + 12) = v24;
    v24 = 0;
    bFToL((float)v22 * *(float *)(a3 + 224), &v24, v18);
    v19 = v21;
    *(_DWORD *)(a4 + 16) = v24;
    v24 = 0;
    bFToL((float)v19 * *(float *)(a3 + 224), &v24, 0);
    *(_DWORD *)(a4 + 20) = v24;
    result = vLTimesVtfl(v17, a3 + 208, a4 + 48);
  }
  if ( (*(_DWORD *)(a3 + 40) & 0x2000) != 0 )
  {
    if ( *v8 )
      *v8 += 16;
    result = *(unsigned int *)(a3 + 116);
    if ( (result & 1) != 0 )
    {
      result = (unsigned int)*v8;
      *(_DWORD *)(a4 + 52) = result;
      if ( *(int *)(a3 + 80) < 0 )
      {
        result = (unsigned int)-(int)result;
        *(_DWORD *)(a4 + 52) = result;
      }
    }
    else if ( *(_DWORD *)(a4 + 52) || *(_DWORD *)(a4 + 60) )
    {
      *v16 += *(_DWORD *)(a3 + 232);
      v16[1] += *(_DWORD *)(a3 + 236) + (*v16 < *(_DWORD *)(a3 + 232));
      v16[2] += *(_DWORD *)(a3 + 240);
      result = *(unsigned int *)(a3 + 244);
      v16[3] += result + (v16[2] < *(_DWORD *)(a3 + 240));
    }
  }
  return result;
}
