/*
 * XREFs of ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180087268
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180083130 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x180046766 (sqrtf_0.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180081394 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x180085BD4 (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x180085C80 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18008718C (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800877A0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18008A048 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::NotifyTouchDrag(CTouchDragVisual *this, const struct tagPOINT *a2)
{
  int v4; // ebx
  DWORD TickCount; // eax
  unsigned int v6; // esi
  DWORD v7; // r12d
  __int64 v8; // rax
  bool v9; // r15
  __int64 v10; // rax
  DWORD v11; // ecx
  CContactManager *v12; // rcx
  int v13; // eax
  __m128i v14; // xmm1
  unsigned int v15; // xmm0_4
  _DWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rbx
  __m128 v19; // xmm6
  __m128 v20; // xmm10
  __m128 v21; // xmm11
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm9_4
  float v26; // xmm12_4
  bool v27; // zf
  __m128 v28; // xmm1
  int v29; // eax
  unsigned int v30; // r15d
  __int64 v31; // r12
  __int64 v32; // rax
  float v33; // xmm0_4
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  __int128 v40; // [rsp+48h] [rbp-89h] BYREF
  __int64 v41; // [rsp+58h] [rbp-79h] BYREF
  int v42; // [rsp+60h] [rbp-71h]

  v4 = 0;
  TickCount = GetTickCount();
  v6 = *((_DWORD *)this + 86);
  v7 = TickCount;
  v9 = 1;
  if ( v6 )
  {
    v8 = *((_QWORD *)this + 40);
    if ( *(float *)(v8 + 4) == (float)a2->x && *(float *)(v8 + 8) == (float)a2->y )
      v9 = 0;
  }
  if ( v6 )
  {
    v10 = *((_QWORD *)this + 40);
    v11 = v7 - *(_DWORD *)v10;
    if ( *((float *)this + 76) <= (float)((float)((float)((float)(*(float *)(v10 + 8) - (float)a2->y)
                                                        * (float)(*(float *)(v10 + 8) - (float)a2->y))
                                                + (float)((float)(*(float *)(v10 + 4) - (float)a2->x)
                                                        * (float)(*(float *)(v10 + 4) - (float)a2->x)))
                                        / (float)(int)(v11 * v11)) )
      *((_DWORD *)this + 111) = 0;
    else
      *((_DWORD *)this + 111) += v11;
    if ( *((_DWORD *)this + 111) > *((_DWORD *)this + 77) )
    {
      v12 = (CContactManager *)*((_QWORD *)this + 56);
      if ( v12 )
      {
        v13 = CContactManager::NotifyTouchDragVisualComplete(v12, this);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x6Bu);
          goto LABEL_40;
        }
      }
      *((_DWORD *)this + 111) = 0;
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTouchDragVisual_BeginDraw_Info);
  }
  if ( v9 )
  {
    v14 = _mm_cvtsi32_si128(a2->y);
    *(float *)&v15 = (float)a2->x;
    v41 = 0LL;
    v42 = 0;
    *(_QWORD *)&v40 = __PAIR64__(v15, v7);
    *((float *)&v40 + 3) = FLOAT_0_5;
    DWORD2(v40) = _mm_cvtepi32_ps(v14).m128_u32[0];
    if ( *((_BYTE *)this + 440) && v6 )
    {
      v16 = (_DWORD *)((char *)this + 320);
      v17 = *((_QWORD *)this + 40);
      *(_OWORD *)v17 = v40;
      *(_QWORD *)(v17 + 16) = v41;
      *(_DWORD *)(v17 + 24) = v42;
    }
    else
    {
      v16 = (_DWORD *)((char *)this + 320);
      DynArray<TOUCH_DRAG_POINT,0>::InsertAt((__int64)this + 320, (unsigned __int64)&v40);
      ++v6;
    }
    *((_BYTE *)this + 440) = 0;
    if ( v6 > 1 )
    {
      v18 = *(_QWORD *)v16;
      v19 = *(__m128 *)(*(_QWORD *)v16 + 28LL);
      v20 = _mm_shuffle_ps(v19, v19, 85);
      v21 = _mm_shuffle_ps(v19, v19, 170);
      v22 = *((float *)&v40 + 1) - v20.m128_f32[0];
      v23 = *((float *)&v40 + 2) - v21.m128_f32[0];
      v24 = _mm_shuffle_ps(v19, v19, 255).m128_f32[0];
      v25 = *((float *)&v40 + 3) - v24;
      v26 = sqrtf_0((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v25 * v25));
      v27 = v6 == 2;
      if ( v6 > 2 )
      {
        v28 = *(__m128 *)(v18 + 56);
        v20.m128_f32[0] = v20.m128_f32[0] - _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
        v21.m128_f32[0] = v21.m128_f32[0] - _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
        *((_QWORD *)this + 51) = _mm_unpacklo_ps(v20, v21).m128_u64[0];
        *((float *)this + 104) = v24 - _mm_shuffle_ps(v28, v28, 255).m128_f32[0];
        CTouchDragVisualHelper::Normalize((CTouchDragVisual *)((char *)this + 408));
        if ( (float)((float)((float)((float)((float)(v23 * *((float *)this + 103))
                                           + (float)(v22 * *((float *)this + 102)))
                                   + (float)(v25 * *((float *)this + 104)))
                           / v26)
                   / v26) > 0.059999999 )
          goto LABEL_29;
        v27 = v6 == 2;
      }
      if ( !v27 || v26 >= 10.0 )
      {
LABEL_30:
        v29 = CTouchVisual::RegisterGlobalTimer(this);
        v4 = v29;
        if ( v29 >= 0 )
        {
          v30 = 0;
          v31 = 0LL;
          do
          {
            if ( v30 )
            {
              v34 = v30 - 1;
              if ( v30 == v6 - 1 )
              {
                v35 = *(_QWORD *)v16;
                LODWORD(v41) = COERCE_UNSIGNED_INT(*(float *)(28 * v34 + *(_QWORD *)v16 + 8) - *(float *)(*(_QWORD *)v16 + v31 + 8)) ^ _xmm;
                v33 = *(float *)(28 * v34 + v35 + 4) - *(float *)(v35 + v31 + 4);
              }
              else
              {
                v36 = *(_QWORD *)v16;
                v37 = 28LL * (v30 + 1);
                LODWORD(v41) = COERCE_UNSIGNED_INT(*(float *)(28 * v34 + *(_QWORD *)v16 + 8) - *(float *)(v37 + *(_QWORD *)v16 + 8)) ^ _xmm;
                v33 = *(float *)(28 * v34 + v36 + 4) - *(float *)(v37 + v36 + 4);
              }
            }
            else
            {
              v32 = *(_QWORD *)v16;
              LODWORD(v41) = COERCE_UNSIGNED_INT(*(float *)(*(_QWORD *)v16 + 8LL) - *(float *)(*(_QWORD *)v16 + 36LL)) ^ _xmm;
              v33 = *(float *)(v32 + 4) - *(float *)(v32 + 32);
            }
            v42 = 0;
            *((float *)&v41 + 1) = v33;
            CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v41);
            v38 = *(_QWORD *)v16;
            ++v30;
            *(_QWORD *)(v31 + v38 + 16) = v41;
            *(_DWORD *)(v31 + v38 + 24) = v42;
            v31 += 28LL;
          }
          while ( v30 < 2 );
          CTouchDragVisualHelper::SmoothTouchDragPath(v16, (__int64)this + 352);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xA5u);
        }
        goto LABEL_40;
      }
LABEL_29:
      *((_BYTE *)this + 440) = 1;
      goto LABEL_30;
    }
  }
LABEL_40:
  if ( v4 < 0 )
    CTouchDragVisual::Stop(this);
  return (unsigned int)v4;
}
