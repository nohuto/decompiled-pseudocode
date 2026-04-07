/*
 * XREFs of ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180090338
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18008C180 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x18004B36C (sqrtf_0.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x18008A2E4 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x18008EC2C (-Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18008ECD8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18009025C (-InsertAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x180090870 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180093118 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
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
  DWORD v12; // edx
  CContactManager *v13; // rcx
  int v14; // eax
  __m128i v15; // xmm1
  unsigned int v16; // xmm0_4
  __int64 *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rbx
  __m128 v20; // xmm6
  __m128 v21; // xmm10
  __m128 v22; // xmm11
  float v23; // xmm8_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm9_4
  float v27; // xmm12_4
  bool v28; // zf
  __m128 v29; // xmm1
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v32; // r15
  float *v33; // rdx
  float v34; // xmm0_4
  __int64 v35; // r8
  float v36; // xmm0_4
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
    {
      *((_DWORD *)this + 111) = 0;
      v12 = 0;
    }
    else
    {
      v12 = v11 + *((_DWORD *)this + 111);
      *((_DWORD *)this + 111) = v12;
    }
    if ( v12 > *((_DWORD *)this + 77) )
    {
      v13 = (CContactManager *)*((_QWORD *)this + 56);
      if ( v13 )
      {
        v14 = CContactManager::NotifyTouchDragVisualComplete(v13, this);
        v4 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x6Bu);
          goto LABEL_40;
        }
      }
      *((_DWORD *)this + 111) = 0;
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTouchDragVisual_BeginDraw_Info);
  }
  if ( v9 )
  {
    v15 = _mm_cvtsi32_si128(a2->y);
    *(float *)&v16 = (float)a2->x;
    v41 = 0LL;
    v42 = 0;
    *(_QWORD *)&v40 = __PAIR64__(v16, v7);
    *((float *)&v40 + 3) = FLOAT_0_5;
    DWORD2(v40) = _mm_cvtepi32_ps(v15).m128_u32[0];
    if ( *((_BYTE *)this + 440) && v6 )
    {
      v17 = (__int64 *)((char *)this + 320);
      v18 = *((_QWORD *)this + 40);
      *(_OWORD *)v18 = v40;
      *(_QWORD *)(v18 + 16) = v41;
      *(_DWORD *)(v18 + 24) = v42;
    }
    else
    {
      v17 = (__int64 *)((char *)this + 320);
      DynArray<TOUCH_DRAG_POINT,0>::InsertAt((__int64)this + 320, (unsigned __int64)&v40);
      ++v6;
    }
    *((_BYTE *)this + 440) = 0;
    if ( v6 > 1 )
    {
      v19 = *v17;
      v20 = *(__m128 *)(*v17 + 28);
      v21 = _mm_shuffle_ps(v20, v20, 85);
      v22 = _mm_shuffle_ps(v20, v20, 170);
      v23 = *((float *)&v40 + 1) - v21.m128_f32[0];
      v24 = *((float *)&v40 + 2) - v22.m128_f32[0];
      v25 = _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
      v26 = *((float *)&v40 + 3) - v25;
      v27 = sqrtf_0((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v26 * v26));
      v28 = v6 == 2;
      if ( v6 > 2 )
      {
        v29 = *(__m128 *)(v19 + 56);
        v21.m128_f32[0] = v21.m128_f32[0] - _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
        v22.m128_f32[0] = v22.m128_f32[0] - _mm_shuffle_ps(v29, v29, 170).m128_f32[0];
        *((_QWORD *)this + 51) = _mm_unpacklo_ps(v21, v22).m128_u64[0];
        *((float *)this + 104) = v25 - _mm_shuffle_ps(v29, v29, 255).m128_f32[0];
        CTouchDragVisualHelper::Normalize((CTouchDragVisual *)((char *)this + 408));
        if ( (float)((float)((float)((float)((float)(v24 * *((float *)this + 103))
                                           + (float)(v23 * *((float *)this + 102)))
                                   + (float)(v26 * *((float *)this + 104)))
                           / v27)
                   / v27) > 0.059999999 )
          goto LABEL_29;
        v28 = v6 == 2;
      }
      if ( !v28 || v27 >= 10.0 )
      {
LABEL_30:
        v30 = CTouchVisual::RegisterGlobalTimer(this);
        v4 = v30;
        if ( v30 >= 0 )
        {
          v31 = 0;
          v32 = 0LL;
          do
          {
            v33 = (float *)*((_QWORD *)this + 40);
            if ( v31 )
            {
              v35 = 7LL * (v31 - 1);
              v36 = v33[v35 + 2];
              if ( v31 == v6 - 1 )
              {
                LODWORD(v41) = COERCE_UNSIGNED_INT(v36 - v33[v32 + 2]) ^ _xmm;
                v34 = v33[v35 + 1] - v33[v32 + 1];
              }
              else
              {
                v37 = 7LL * (v31 + 1);
                LODWORD(v41) = COERCE_UNSIGNED_INT(v36 - v33[v37 + 2]) ^ _xmm;
                v34 = v33[v35 + 1] - v33[v37 + 1];
              }
            }
            else
            {
              LODWORD(v41) = COERCE_UNSIGNED_INT(v33[2] - v33[9]) ^ _xmm;
              v34 = v33[1] - v33[8];
            }
            v42 = 0;
            *((float *)&v41 + 1) = v34;
            CTouchDragVisualHelper::Normalize((struct MilPoint3F *)&v41);
            v38 = *v17;
            ++v31;
            *(_QWORD *)(v32 * 4 + v38 + 16) = v41;
            *(_DWORD *)(v32 * 4 + v38 + 24) = v42;
            v32 += 7LL;
          }
          while ( v31 < 2 );
          CTouchDragVisualHelper::SmoothTouchDragPath(v17, (__int64)this + 352);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xA5u);
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
