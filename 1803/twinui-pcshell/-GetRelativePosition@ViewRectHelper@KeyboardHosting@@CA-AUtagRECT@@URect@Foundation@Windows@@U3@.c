/*
 * XREFs of ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@U3@UtagSIZE@@W4CoreKeyboardAlignment@Core@Text@Internal@UI@6@@Z @ 0x18025608C
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x1802561F4 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18030C100 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18030C430 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

__int128 *__fastcall KeyboardHosting::ViewRectHelper::GetRelativePosition(
        __int128 *a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        int a5)
{
  __m128 v5; // xmm2
  float v9; // xmm1_4
  int v10; // ecx
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  const struct tagRECT *v15; // r9
  int v16; // edx
  int v17; // r10d
  __int128 v18; // xmm0
  __int128 *result; // rax
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int128 v21; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v22; // [rsp+48h] [rbp-18h] BYREF

  v5 = (__m128)_mm_loadu_si128((const __m128i *)a2);
  v20 = a4;
  v9 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v22.left = (int)v5.m128_f32[0];
  v22.top = (int)v9;
  v22.right = (int)(float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] + v5.m128_f32[0]);
  v22.bottom = (int)(float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] + v9);
  *a1 = *(_OWORD *)Windows::UI::Immersive::QueryRelativePosition(&v21, &v22, &v20, a3, (unsigned int)(a5 != 1) + 1);
  if ( a5 == 1 )
  {
    v11 = *((_DWORD *)a1 + 1);
    if ( v11 >= a3[3] )
    {
      v12 = (int)*(float *)(a2 + 4);
      if ( v12 <= a3[1] )
      {
        v13 = HIDWORD(v20);
        if ( v12 - a3[1] >= SHIDWORD(v20) )
        {
          *((_DWORD *)a1 + 1) = v12;
          *((_DWORD *)a1 + 3) = v12 + v13;
          v11 = v12;
        }
      }
    }
  }
  else if ( *((_DWORD *)a1 + 3) > a3[1]
         || (v10 = (int)(float)(*(float *)(a2 + 12) + *(float *)(a2 + 4)), v10 < a3[3])
         || v10 - a3[3] < SHIDWORD(v20) )
  {
    v11 = *((_DWORD *)a1 + 1);
  }
  else
  {
    *((_DWORD *)a1 + 3) = v10;
    v11 = v10 - HIDWORD(v20);
    *((_DWORD *)a1 + 1) = v10 - HIDWORD(v20);
  }
  v14 = *a3;
  v15 = (const struct tagRECT *)(unsigned int)(int)*(float *)(a2 + 8);
  v16 = *a3 + v20;
  *(_DWORD *)a1 = *a3;
  *((_DWORD *)a1 + 2) = v16;
  v17 = (int)*(float *)(a2 + 12);
  v21 = *a1;
  if ( v16 - v14 > (int)v15 )
    DWORD2(v21) = (_DWORD)v15 + v21;
  if ( *((_DWORD *)a1 + 3) - v11 > v17 )
    HIDWORD(v21) = v17 + DWORD1(v21);
  *a1 = v21;
  v18 = (__int128)*Windows::UI::Immersive::ShiftRectIntoContainer(
                     (Windows::UI::Immersive *)&v21,
                     &v22,
                     (const struct Windows::UI::Immersive::CConstraint *)a1,
                     v15);
  result = a1;
  *a1 = v18;
  return result;
}
