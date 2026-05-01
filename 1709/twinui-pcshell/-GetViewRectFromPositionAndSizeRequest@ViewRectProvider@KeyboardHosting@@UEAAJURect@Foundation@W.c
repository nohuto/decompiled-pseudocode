/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@PEAU345@@Z @ 0x1801AC5B0
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1801AACE0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11PEAU9Foundation@8@@Z @ 0x1801AEC1C (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
        __int64 a1,
        const __m128i *a2,
        __m128i *a3,
        __int128 *a4,
        int a5,
        __int64 a6)
{
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int ViewRectNearCaret; // eax
  unsigned int v18; // ebx
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  int v22; // r8d
  __m128i v23; // xmm2
  __int128 v24; // xmm3
  __int64 v25; // xmm4_8
  __int128 v26; // xmm1
  unsigned __int64 v27; // rcx
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm0_4
  __m128 v31; // xmm0
  __m128i v32; // [rsp+30h] [rbp-29h] BYREF
  __m128i v33; // [rsp+40h] [rbp-19h] BYREF
  __m128i v34; // [rsp+50h] [rbp-9h] BYREF
  __m128i v35; // [rsp+60h] [rbp+7h] BYREF
  __int128 v36; // [rsp+70h] [rbp+17h] BYREF
  __int128 v37; // [rsp+80h] [rbp+27h]
  __int64 v38; // [rsp+90h] [rbp+37h]
  int v39; // [rsp+98h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+4Fh]

  v6 = *((_DWORD *)a4 + 2);
  v33.m128i_i64[0] = 0LL;
  v7 = (float)v6;
  v8 = *((_DWORD *)a4 + 1);
  *(float *)&v33.m128i_i32[2] = v7;
  *(float *)&v33.m128i_i32[3] = (float)v8;
  *(__m128i *)a6 = v33;
  switch ( *(_DWORD *)a4 )
  {
    case 1:
      v9 = *((_DWORD *)a4 + 5);
      v32 = *(__m128i *)(a1 + 24);
      v10 = v9 & 0xC;
      if ( v10 )
      {
        if ( v10 == 12 )
        {
          v11 = *(float *)v32.m128i_i32;
        }
        else
        {
          if ( (*((_BYTE *)a4 + 20) & 4) == 0 )
          {
            if ( (*((_BYTE *)a4 + 20) & 8) != 0 )
              *(float *)a6 = (float)((float)(*(float *)&v32.m128i_i32[2] + *(float *)v32.m128i_i32)
                                   - (float)*((int *)a4 + 2))
                           - (float)*((int *)a4 + 3);
            goto LABEL_11;
          }
          v11 = (float)*((int *)a4 + 3) + *(float *)v32.m128i_i32;
        }
        *(float *)a6 = v11;
      }
      else
      {
        *(float *)a6 = (float)((float)(*(float *)&v32.m128i_i32[2] - (float)*((int *)a4 + 2)) * 0.5)
                     + *(float *)v32.m128i_i32;
      }
LABEL_11:
      if ( (*((_DWORD *)a4 + 5) & 3) != 0 && (*((_DWORD *)a4 + 5) & 3) != 3 )
      {
        if ( (*((_BYTE *)a4 + 20) & 2) != 0 )
        {
          *(float *)(a6 + 4) = (float)((float)(*(float *)&v32.m128i_i32[3] + *(float *)&v32.m128i_i32[1])
                                     - (float)*((int *)a4 + 1))
                             - (float)*((int *)a4 + 4);
        }
        else if ( (*((_BYTE *)a4 + 20) & 1) != 0 )
        {
          *(float *)(a6 + 4) = (float)*((int *)a4 + 4) + *(float *)&v32.m128i_i32[1];
        }
      }
      else
      {
        *(float *)(a6 + 4) = (float)((float)(*(float *)&v32.m128i_i32[3] - (float)*((int *)a4 + 1)) * 0.5)
                           + *(float *)&v32.m128i_i32[1];
      }
      return 0LL;
    case 2:
      v12 = *((_DWORD *)a4 + 10);
      v13 = *a2;
      v34 = *a3;
      v39 = v12;
      v14 = *(__m128i *)(a1 + 80);
      v33 = v13;
      v15 = a4[1];
      v32 = v14;
      v16 = *a4;
      v37 = v15;
      v36 = v16;
      v38 = *((_QWORD *)a4 + 4);
      ViewRectNearCaret = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(&v36, &v32, &v33, &v34, a6);
      v18 = ViewRectNearCaret;
      if ( ViewRectNearCaret < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x48,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
          (const char *)(unsigned int)ViewRectNearCaret);
        return v18;
      }
      break;
    case 3:
      v20 = *(__m128i *)(a1 + 80);
      v21 = *a3;
      v22 = *((_DWORD *)a4 + 10);
      v23 = _mm_loadu_si128(a2);
      v34 = 0uLL;
      v24 = a4[1];
      v25 = *((_QWORD *)a4 + 4);
      v32 = v20;
      v26 = *a4;
      v33 = v21;
      v36 = v26;
      v27 = DWORD1(v26);
      *(_OWORD *)a6 = 0uLL;
      if ( a5 )
      {
        v34 = v33;
        v33 = v32;
        v39 = v22;
        v35 = v23;
        v36 = v26;
        v37 = v24;
        v38 = v25;
        KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(&v36, &v33, &v35, &v34, a6);
      }
      else
      {
        v28 = *(float *)&v33.m128i_i32[3] + *(float *)&v33.m128i_i32[1];
        v29 = (float)(int)v27;
        if ( (float)(int)v27 <= (float)((float)(*(float *)&v33.m128i_i32[3] + *(float *)&v33.m128i_i32[1])
                                      - *(float *)&v32.m128i_i32[1]) )
        {
          if ( v28 <= (float)(*(float *)&v32.m128i_i32[3] + *(float *)&v32.m128i_i32[1]) )
            *(float *)(a6 + 4) = v28 - v29;
          else
            *(float *)(a6 + 4) = (float)(*(float *)&v32.m128i_i32[3] + *(float *)&v32.m128i_i32[1]) - v29;
        }
        else
        {
          *(_DWORD *)(a6 + 4) = v32.m128i_i32[1];
        }
        if ( *(float *)v32.m128i_i32 <= *(float *)v33.m128i_i32 )
        {
          if ( (float)SDWORD2(v36) <= (float)((float)(*(float *)&v32.m128i_i32[2] + *(float *)v32.m128i_i32)
                                            - *(float *)v33.m128i_i32) )
            *(_DWORD *)a6 = v33.m128i_i32[0];
          else
            *(float *)a6 = (float)(*(float *)&v32.m128i_i32[2] + *(float *)v32.m128i_i32) - (float)SDWORD2(v36);
        }
        else
        {
          *(_DWORD *)a6 = v32.m128i_i32[0];
        }
        v30 = (float)SDWORD2(v36);
        *(float *)(a6 + 12) = (float)(int)v27;
        *(float *)(a6 + 8) = v30;
      }
      break;
    default:
      v31 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 24));
      *(_DWORD *)a6 = v31.m128_i32[0];
      *(float *)(a6 + 4) = (float)((float)(_mm_shuffle_ps(v31, v31, 255).m128_f32[0]
                                         + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
                                 - (float)*((int *)a4 + 1))
                         - (float)*((int *)a4 + 4);
      break;
  }
  return 0LL;
}
