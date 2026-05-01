/*
 * XREFs of ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@U3@UtagSIZE@@W4CoreKeyboardAlignment@Core@Text@Internal@UI@6@@Z @ 0x1801AF1F4
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11PEAU9Foundation@8@@Z @ 0x1801AEC1C (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1801DF3D0 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1801DF648 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
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
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  const struct tagRECT *v14; // r9
  int v15; // ecx
  int v16; // r8d
  __int128 v17; // xmm0
  __int128 *result; // rax
  __int128 v19; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-10h] BYREF

  v5 = (__m128)_mm_loadu_si128((const __m128i *)a2);
  *(_QWORD *)&v19 = a4;
  v9 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v20.left = (int)v5.m128_f32[0];
  v20.top = (int)v9;
  v20.right = (int)(float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] + v5.m128_f32[0]);
  v20.bottom = (int)(float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] + v9);
  *a1 = *(_OWORD *)Windows::UI::Immersive::QueryRelativePosition(v21, &v20, &v19, a3, (unsigned int)(a5 != 1) + 1);
  if ( a5 == 1 )
  {
    if ( *((_DWORD *)a1 + 1) >= a3[3] )
    {
      v11 = (int)*(float *)(a2 + 4);
      if ( v11 <= a3[1] )
      {
        v12 = DWORD1(v19);
        if ( v11 - a3[1] >= SDWORD1(v19) )
        {
          *((_DWORD *)a1 + 1) = v11;
          *((_DWORD *)a1 + 3) = v11 + v12;
        }
      }
    }
  }
  else if ( *((_DWORD *)a1 + 3) <= a3[1] )
  {
    v10 = (int)(float)(*(float *)(a2 + 12) + *(float *)(a2 + 4));
    if ( v10 >= a3[3] && v10 - a3[3] >= SDWORD1(v19) )
    {
      *((_DWORD *)a1 + 3) = v10;
      *((_DWORD *)a1 + 1) = v10 - DWORD1(v19);
    }
  }
  v13 = *a3;
  v14 = (const struct tagRECT *)(unsigned int)(int)*(float *)(a2 + 8);
  v15 = *a3 + v19;
  *(_DWORD *)a1 = *a3;
  *((_DWORD *)a1 + 2) = v15;
  v16 = (int)*(float *)(a2 + 12);
  v19 = *a1;
  if ( v15 - v13 > (int)v14 )
    DWORD2(v19) = (_DWORD)v14 + v19;
  if ( *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1) > v16 )
    HIDWORD(v19) = v16 + DWORD1(v19);
  *a1 = v19;
  v17 = (__int128)*Windows::UI::Immersive::ShiftRectIntoContainer(
                     (Windows::UI::Immersive *)v21,
                     &v20,
                     (const struct Windows::UI::Immersive::CConstraint *)a1,
                     v14);
  result = a1;
  *a1 = v17;
  return result;
}
