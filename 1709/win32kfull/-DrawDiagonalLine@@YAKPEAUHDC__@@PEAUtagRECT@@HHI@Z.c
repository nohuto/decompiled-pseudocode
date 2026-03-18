/*
 * XREFs of ?DrawDiagonalLine@@YAKPEAUHDC__@@PEAUtagRECT@@HHI@Z @ 0x1C023AC74
 * Callers:
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1C023ABB4 (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C023AEC0 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall DrawDiagonalLine(HDC a1, struct tagRECT *a2, int a3, __int64 a4, __int16 a5)
{
  __m128i *v7; // rdx
  int v8; // r10d
  int v10; // r9d
  int v11; // ecx
  int v12; // r11d
  int v13; // r8d
  int v14; // esi
  int v15; // ebx
  __int8 *v16; // rdi
  int v17; // eax
  int v18; // r11d
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // ecx
  LONG top; // eax
  int v24; // eax
  int v25; // eax
  LONG left; // ecx
  __int64 v27; // rdx
  __m128i v29; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v30[48]; // [rsp+50h] [rbp-B0h] BYREF

  if ( IsRectEmptyInl(a2) )
    return 0LL;
  v10 = _mm_cvtsi128_si32(*v7);
  v11 = _mm_srli_si128(*v7, 8).m128i_i32[1] - HIDWORD(v7->m128i_i64[0]);
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 8));
  v29 = *v7;
  v13 = v12 - v10;
  if ( v11 < v12 - v10 )
  {
    v15 = 1;
    v14 = v13 / v11;
  }
  else
  {
    v14 = 1;
    v15 = v11 / v13;
  }
  v16 = &v29.m128i_i8[12];
  v17 = v29.m128i_i32[3] - v15;
  v18 = v12 - v14;
  v29.m128i_i32[3] -= v15;
  v29.m128i_i32[2] = v18;
  if ( a3 < 0 )
    v16 = &v29.m128i_i8[4];
  if ( v10 <= v18 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( v29.m128i_i32[1] > v17 )
      {
LABEL_25:
        if ( v8 )
          GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v30, v8);
        return (unsigned __int16)v14 | ((unsigned __int16)v15 << 16);
      }
      if ( (a5 & 0x800) == 0 )
        break;
      if ( v15 <= 1 )
      {
        v25 = *(_DWORD *)v16;
        if ( (a5 & 2) != 0 )
        {
          v20 = 3 * v19;
          v30[2 * v20 + 1] = v25;
          v30[2 * v20 + 2] = a2->right - v10;
          goto LABEL_19;
        }
        left = a2->left;
        v27 = 3 * v19;
        v30[2 * v27 + 1] = v25;
        v30[2 * v27] = left;
        v30[2 * v27 + 3] = v15;
        v30[2 * v27 + 2] = v14 + v10 - left;
        *(_QWORD *)&v30[2 * v27 + 4] = 0LL;
      }
      else
      {
        v21 = 3 * v19;
        v22 = *(_DWORD *)v16;
        v30[2 * v21] = v10;
        v30[2 * v21 + 2] = v14;
        *(_QWORD *)&v30[2 * v21 + 4] = 0LL;
        if ( (a5 & 1) != 0 )
        {
          top = a2->top;
          v30[6 * v19 + 1] = top;
          v30[6 * v19 + 3] = v15 + v22 - top;
        }
        else
        {
          v24 = a2->bottom - v22;
          v30[6 * v19 + 1] = v22;
          v30[6 * v19 + 3] = v24;
        }
      }
LABEL_21:
      ++v19;
      v29.m128i_i32[0] = v14 + v10;
      ++v8;
      *(_DWORD *)v16 -= a3 * v15;
      if ( v19 == 8 )
      {
        GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v30, 8);
        v8 = 0;
        v19 = 0LL;
      }
      v10 = v29.m128i_i32[0];
      if ( v29.m128i_i32[0] > v29.m128i_i32[2] )
        goto LABEL_25;
      v17 = v29.m128i_i32[3];
    }
    v20 = 3 * v19;
    v30[2 * v20 + 1] = *(_DWORD *)v16;
    v30[2 * v20 + 2] = v14;
LABEL_19:
    v30[2 * v20] = v10;
    v30[2 * v20 + 3] = v15;
    *(_QWORD *)&v30[2 * v20 + 4] = 0LL;
    goto LABEL_21;
  }
  return (unsigned __int16)v14 | ((unsigned __int16)v15 << 16);
}
