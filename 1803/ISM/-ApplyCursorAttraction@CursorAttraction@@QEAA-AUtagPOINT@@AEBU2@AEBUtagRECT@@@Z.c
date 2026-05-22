/*
 * XREFs of ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x180037440
 * Callers:
 *     _lambda_c3ab10beb6b1aadf1357327b164eb3e9_::_lambda_invoker_cdecl_ @ 0x1800328F0 (_lambda_c3ab10beb6b1aadf1357327b164eb3e9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1800376EC (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 *     ?ComputeAverageCursorVelocity@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@XZ @ 0x1800377EC (-ComputeAverageCursorVelocity@CursorAttraction@@AEAA-AUXMFLOAT2@DirectX@@XZ.c)
 */

struct tagPOINT __fastcall CursorAttraction::ApplyCursorAttraction(
        CursorAttraction *this,
        struct tagPOINT *a2,
        const struct tagPOINT *a3,
        _DWORD *a4)
{
  bool v4; // zf
  struct tagPOINT v6; // rcx
  int v9; // ecx
  __int128 v10; // xmm1
  int v11; // r10d
  int v12; // r8d
  int v13; // eax
  int v14; // r9d
  int v15; // edx
  int v16; // eax
  int v17; // r10d
  int v18; // r9d
  int v19; // edx
  __int64 x; // r8
  LONG y; // ecx
  char v22; // r9
  int v23; // edx
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm3_4
  int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  float v30; // xmm4_4
  float v31; // xmm5_4
  __m128 v32; // xmm6
  float v33; // xmm6_4
  unsigned int v34; // ecx
  unsigned int v35; // r10d
  unsigned int v36; // r8d
  __int64 v37; // r11
  __int64 v38; // rcx
  unsigned __int64 v40; // [rsp+68h] [rbp+28h]
  unsigned __int64 v41; // [rsp+70h] [rbp+30h] BYREF

  v4 = *a4 == 0;
  v6 = *a3;
  *a2 = *a3;
  if ( !v4 || a4[1] || a4[2] || a4[3] )
  {
    *(struct tagPOINT *)((char *)this + 8 * *((unsigned int *)this + 12) + 52) = v6;
    v9 = *((_DWORD *)this + 11);
    v10 = *(_OWORD *)this;
    *(_OWORD *)this = *(_OWORD *)a4;
    v11 = *((_DWORD *)this + 1);
    v12 = (a4[2] - *a4) / 2;
    if ( v9 < v12 )
      v12 = v9;
    v13 = a4[3] - a4[1];
    v14 = *((_DWORD *)this + 3);
    v15 = *((_DWORD *)this + 2);
    v16 = v13 / 2;
    if ( v9 < v16 )
      v16 = v9;
    *(_DWORD *)this += v12;
    v17 = v16 + v11;
    v18 = v14 - v16;
    v19 = v15 - v12;
    *((_DWORD *)this + 1) = v17;
    *((_DWORD *)this + 3) = v18;
    *((_DWORD *)this + 2) = v19;
    if ( (_DWORD)v10 != *(_DWORD *)this || DWORD2(v10) != v19 || DWORD1(v10) != v17 || HIDWORD(v10) != v18 )
      *((_BYTE *)this + 32) = 0;
    CursorAttraction::UpdateAttractionParameters(this, a3);
    x = (unsigned int)a3->x;
    if ( (int)x < *(_DWORD *)this
      || (int)x > *((_DWORD *)this + 2)
      || (y = a3->y, y < *((_DWORD *)this + 1))
      || y > *((_DWORD *)this + 3) )
    {
      y = a3->y;
      v22 = 0;
    }
    else
    {
      v22 = 1;
    }
    v23 = *((_DWORD *)this + 4);
    v24 = *((float *)this + 10) * *((float *)this + 10);
    v25 = (float)((float)(y - *((_DWORD *)this + 5)) * (float)(y - *((_DWORD *)this + 5)))
        + (float)((float)(x - v23) * (float)(x - v23));
    if ( v22 || v24 < v25 )
    {
      if ( *((_BYTE *)this + 32) )
      {
        if ( v24 < v25 )
          *((_BYTE *)this + 32) = 0;
      }
      else
      {
        v34 = (*((_DWORD *)this + 12) + 1) % 0xAu;
        v35 = -1 - v34;
        v36 = v34 + 1;
        while ( 1 )
        {
          v37 = (v36 - 1) % 0xA;
          v38 = v36 % 0xA;
          if ( *((_DWORD *)this + 2 * v38 + 13) != *((_DWORD *)this + 2 * v37 + 13)
            || *((_DWORD *)this + 2 * v38 + 14) != *((_DWORD *)this + 2 * v37 + 14) )
          {
            break;
          }
          ++v36;
          if ( v35 + v36 >= 9 )
          {
            if ( v22 )
              *((_BYTE *)this + 32) = 1;
            break;
          }
        }
      }
    }
    else
    {
      v40 = *((_QWORD *)this + 3);
      v26 = *((float *)&v40 + 1);
      v27 = x + (int)*(float *)&v40;
      v28 = (unsigned int)(y + (int)*((float *)&v40 + 1));
      if ( *(float *)&v40 < 0.0 && v27 <= v23 || COERCE_FLOAT(*((_QWORD *)this + 3)) > 0.0 && v27 >= v23 )
        *(float *)&v40 = (float)(v23 - x);
      if ( *((float *)&v40 + 1) < 0.0 && (v29 = *((_DWORD *)this + 5), (int)v28 <= v29)
        || *((float *)&v40 + 1) > 0.0 && (v29 = *((_DWORD *)this + 5), (int)v28 >= v29) )
      {
        v26 = (float)(v29 - y);
        *((float *)&v40 + 1) = v26;
      }
      CursorAttraction::ComputeAverageCursorVelocity(this, &v41, x, v28, v10);
      v32 = _mm_mul_ps((__m128)v41, (__m128)v40);
      v33 = v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
      if ( !*((_BYTE *)this + 32) || v33 > v31 )
      {
        a2->x += (int)v30;
        a2->y += (int)v26;
      }
    }
    *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) % 0xAu;
  }
  return (struct tagPOINT)a2;
}
