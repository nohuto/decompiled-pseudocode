/*
 * XREFs of ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x180025510
 * Callers:
 *     ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180028588 (-AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     sinf_0 @ 0x180036B77 (sinf_0.c)
 *     ?ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x1800D6134 (-ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets.c)
 */

__int64 __fastcall SpatialAudioPositionCalc::CalculatePositions(
        SpatialAudioPositionCalc *this,
        struct StaticObjectProjectionData *a2,
        union __m128 *a3,
        int a4)
{
  _BYTE *v4; // rbx
  union __m128 *v5; // rdi
  float v7; // xmm6_4
  float v8; // xmm13_4
  __m128 v9; // xmm12
  float v10; // xmm10_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm7_4
  __m128 v18; // xmm7
  float v19; // xmm6_4
  float v20; // xmm13_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  unsigned int v23; // xmm13_4
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __m128 Ptr_high; // xmm15
  __m128 v27; // xmm6
  __m128 Size; // xmm13
  __m128 v29; // xmm0
  __m128 v30; // xmm14
  __m128 v31; // xmm0
  __m128 v32; // xmm9
  __m128 Ptr_low; // xmm1
  __m128 Reserved; // xmm4
  __m128 v35; // xmm8
  __m128 v36; // xmm10
  __int64 v37; // r9
  int v38; // edx
  float v39; // xmm5_4
  int v40; // eax
  __m128 v41; // xmm3
  __m128 v42; // xmm3
  int v43; // eax
  __m128 v44; // xmm2
  int v45; // eax
  __m128 v46; // xmm0
  __m128 v47; // xmm4
  __m128 v48; // xmm3
  __m128 v49; // xmm3
  __m128 v50; // xmm1
  __m128 v51; // xmm2
  __m128 v52; // xmm4
  __m128 v53; // xmm4
  __m128 v55; // xmm2
  LPCGUID v56; // r8
  LPCGUID v57; // r9
  float v58; // [rsp+38h] [rbp-D0h]
  float v59; // [rsp+3Ch] [rbp-CCh]
  float v60; // [rsp+40h] [rbp-C8h]
  float v61; // [rsp+44h] [rbp-C4h]
  unsigned int v62; // [rsp+48h] [rbp-C0h]
  unsigned int v63; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v64; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v66; // [rsp+68h] [rbp-A0h]
  float v67; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v68; // [rsp+70h] [rbp-98h]
  float v69; // [rsp+74h] [rbp-94h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *v71; // [rsp+88h] [rbp-80h]
  __int64 v72; // [rsp+90h] [rbp-78h]
  unsigned int *v73; // [rsp+98h] [rbp-70h]
  __int64 v74; // [rsp+A0h] [rbp-68h]

  v4 = (char *)this + 96;
  v5 = a3;
  if ( a2 && a3 && a4 == 272 )
  {
    if ( *((_DWORD *)a2 + 27) )
    {
      SpatialAudioPositionCalc::ComputeRadialProjectionOffsets(this, (struct SpatialAudioProjectionOffsets *)&pData, a2);
      Reserved = (__m128)pData.Reserved;
      Ptr_low = (__m128)LODWORD(pData.Ptr);
      v35 = (__m128)(unsigned int)v71;
      v30 = (__m128)pDesc.Reserved;
      Size = (__m128)pDesc.Size;
      Ptr_high = (__m128)HIDWORD(pDesc.Ptr);
      v9 = (__m128)LODWORD(pDesc.Ptr);
      v32 = (__m128)v68;
      v36 = (__m128)v66;
      v60 = v69;
      v59 = v67;
      v58 = *(float *)&pData.Size;
      v62 = pData.Reserved;
      v61 = *(float *)&pData.Ptr;
    }
    else
    {
      v9 = (__m128)*(unsigned int *)a2;
      v7 = *((float *)a2 + 9);
      v8 = *((float *)a2 + 2) * 0.5;
      v9.m128_f32[0] = v9.m128_f32[0] * 0.5;
      *(float *)&v64 = *((float *)a2 + 1) * 0.5;
      v60 = v8;
      v10 = sinf_0(v7 * 0.017453292) * v9.m128_f32[0];
      v11 = sinf_0((float)(90.0 - v7) * 0.017453292);
      v12 = *((float *)a2 + 6);
      v13 = v10 / v11;
      v61 = v8;
      v62 = LODWORD(v8) ^ _xmm;
      v14 = sinf_0(v12 * 0.017453292) * *(float *)&v64;
      v15 = sinf_0((float)(90.0 - v12) * 0.017453292);
      v16 = 90.0 - *((float *)a2 + 7);
      v58 = v14 / v15;
      v17 = sinf_0(v16 * 0.017453292) * v8;
      v59 = v17 / sinf_0((float)(90.0 - v16) * 0.017453292);
      v18 = (__m128)LODWORD(FLOAT_180_0);
      v19 = 180.0 - *((float *)a2 + 8);
      v20 = sinf_0(v19 * 0.017453292) * *(float *)&v64;
      v21 = sinf_0((float)(90.0 - v19) * 0.017453292);
      v22 = *((float *)a2 + 10);
      *(float *)&v23 = v20 / v21;
      v24 = (__m128)LODWORD(v22);
      v63 = v23;
      v24.m128_f32[0] = sinf_0(v22 * 0.017453292);
      Ptr_high = v24;
      v25 = (__m128)LODWORD(FLOAT_90_0);
      Ptr_high.m128_f32[0] = Ptr_high.m128_f32[0] * v13;
      v25.m128_f32[0] = sinf_0((float)(90.0 - v22) * 0.017453292);
      v27 = (__m128)*((unsigned int *)a2 + 11);
      Size = v25;
      Size.m128_f32[0] = v25.m128_f32[0] * v13;
      v18.m128_f32[0] = (float)(180.0 - v27.m128_f32[0]) * 0.017453292;
      v29 = v18;
      v29.m128_f32[0] = sinf_0(v18.m128_f32[0]);
      v30 = v29;
      v30.m128_f32[0] = v29.m128_f32[0] * v13;
      v27.m128_f32[0] = (float)(v27.m128_f32[0] - 90.0) * 0.017453292;
      v31 = v27;
      v31.m128_f32[0] = sinf_0(v27.m128_f32[0]);
      v32 = (__m128)v63;
      v35 = v31;
      Ptr_low = (__m128)LODWORD(v61);
      Reserved = (__m128)v62;
      v35.m128_f32[0] = v31.m128_f32[0] * v13;
      v36 = (__m128)v64;
    }
    v37 = 0LL;
    while ( 1 )
    {
      v38 = dword_18010E420[v37];
      v39 = FLOAT_1_0;
      if ( (v38 & 0x10) != 0 )
      {
        v39 = *((float *)a2 + 17);
      }
      else if ( (v38 & 0x20) != 0 )
      {
        v39 = *((float *)a2 + 18);
      }
      else if ( (v38 & 0x41) == 0x41 )
      {
        v39 = *((float *)a2 + 15);
      }
      else if ( (v38 & 0x42) == 0x42 )
      {
        v39 = *((float *)a2 + 16);
      }
      else if ( (v38 & 0x80u) != 0 )
      {
        v39 = *((float *)a2 + 13);
      }
      else if ( (v38 & 1) != 0 )
      {
        v39 = *((float *)a2 + 12);
      }
      else if ( (v38 & 2) != 0 )
      {
        v39 = *((float *)a2 + 14);
      }
      v40 = (unsigned __int8)*v4;
      v41 = 0LL;
      if ( *v4 )
      {
        switch ( v40 )
        {
          case 12:
            v42 = Ptr_high;
            goto LABEL_24;
          case 13:
            v41 = Ptr_high;
            break;
          case 15:
            v41 = v30;
            break;
          case 14:
            v42 = v30;
LABEL_24:
            v41 = _mm_xor_ps(v42, (__m128)(unsigned int)_xmm);
            break;
          default:
            switch ( *v4 )
            {
              case 1:
                v42 = (__m128)LODWORD(v58);
                goto LABEL_24;
              case 2:
                v41 = (__m128)LODWORD(v58);
                break;
              case 3:
                v42 = Ptr_low;
                goto LABEL_24;
              case 4:
                v41 = Ptr_low;
                break;
              case 5:
                v41 = Reserved;
                break;
              case 6:
                v42 = (__m128)LODWORD(v59);
                goto LABEL_24;
              case 7:
                v42 = v36;
                goto LABEL_24;
              case 8:
                v41 = v36;
                break;
              case 9:
                v42 = v32;
                goto LABEL_24;
              case 0xA:
                v41 = v32;
                break;
              case 0xB:
                v41 = (__m128)LODWORD(v60);
                break;
              case 0x10:
                v42 = Size;
                goto LABEL_24;
              case 0x11:
                v41 = Size;
                break;
              case 0x12:
                v42 = v35;
                goto LABEL_24;
              case 0x13:
                v41 = v35;
                break;
              case 0x14:
                v42 = v9;
                goto LABEL_24;
              case 0x15:
                v41 = v9;
                break;
              default:
                goto LABEL_25;
            }
            break;
        }
      }
LABEL_25:
      v43 = (unsigned __int8)v4[1];
      v44 = 0LL;
      if ( v4[1] )
      {
        if ( v43 == 20 )
        {
          v55 = v9;
LABEL_53:
          v44 = _mm_xor_ps(v55, (__m128)(unsigned int)_xmm);
        }
        else if ( v43 == 21 )
        {
          v44 = v9;
        }
        else
        {
          switch ( v4[1] )
          {
            case 1:
              v55 = (__m128)LODWORD(v58);
              goto LABEL_53;
            case 2:
              v44 = (__m128)LODWORD(v58);
              break;
            case 3:
              v55 = Ptr_low;
              goto LABEL_53;
            case 4:
              v44 = Ptr_low;
              break;
            case 5:
              v44 = Reserved;
              break;
            case 6:
              v55 = (__m128)LODWORD(v59);
              goto LABEL_53;
            case 7:
              v55 = v36;
              goto LABEL_53;
            case 8:
              v44 = v36;
              break;
            case 9:
              v55 = v32;
              goto LABEL_53;
            case 0xA:
              v44 = v32;
              break;
            case 0xB:
              v44 = (__m128)LODWORD(v60);
              break;
            case 0xC:
              v55 = Ptr_high;
              goto LABEL_53;
            case 0xD:
              v44 = Ptr_high;
              break;
            case 0xE:
              v55 = v30;
              goto LABEL_53;
            case 0xF:
              v44 = v30;
              break;
            case 0x10:
              v55 = Size;
              goto LABEL_53;
            case 0x11:
              v44 = Size;
              break;
            case 0x12:
              v55 = v35;
              goto LABEL_53;
            case 0x13:
              v44 = v35;
              break;
            default:
              break;
          }
        }
      }
      v45 = (unsigned __int8)v4[2];
      v46 = 0LL;
      switch ( v45 )
      {
        case 19:
          v46 = v35;
          break;
        case 16:
          v46 = _mm_xor_ps(Size, (__m128)(unsigned int)_xmm);
          break;
        case 5:
          v46 = Reserved;
          break;
        case 11:
          v46 = (__m128)LODWORD(v60);
          break;
        case 6:
          v46 = _mm_xor_ps((__m128)LODWORD(v59), (__m128)(unsigned int)_xmm);
          break;
        default:
          switch ( v4[2] )
          {
            case 1:
              v46 = _mm_xor_ps((__m128)LODWORD(v58), (__m128)(unsigned int)_xmm);
              break;
            case 2:
              v46 = (__m128)LODWORD(v58);
              break;
            case 3:
              v46 = _mm_xor_ps(Ptr_low, (__m128)(unsigned int)_xmm);
              break;
            case 4:
              v46 = Ptr_low;
              break;
            case 7:
              v46 = _mm_xor_ps(v36, (__m128)(unsigned int)_xmm);
              break;
            case 8:
              v46 = v36;
              break;
            case 9:
              v46 = _mm_xor_ps(v32, (__m128)(unsigned int)_xmm);
              break;
            case 0xA:
              v46 = v32;
              break;
            case 0xC:
              v46 = _mm_xor_ps(Ptr_high, (__m128)(unsigned int)_xmm);
              break;
            case 0xD:
              v46 = Ptr_high;
              break;
            case 0xE:
              v46 = _mm_xor_ps(v30, (__m128)(unsigned int)_xmm);
              break;
            case 0xF:
              v46 = v30;
              break;
            case 0x11:
              v46 = Size;
              break;
            case 0x12:
              v46 = _mm_xor_ps(v35, (__m128)(unsigned int)_xmm);
              break;
            case 0x14:
              v46 = _mm_xor_ps(v9, (__m128)(unsigned int)_xmm);
              break;
            case 0x15:
              v46 = v9;
              break;
            default:
              goto LABEL_37;
          }
          break;
      }
LABEL_37:
      v47 = _mm_unpacklo_ps(_mm_unpacklo_ps(v41, v46), _mm_unpacklo_ps(v44, (__m128)0LL));
      *v5 = v47;
      if ( *((_DWORD *)a2 + 27) )
        goto LABEL_49;
      if ( (v38 & 0x10) != 0 )
      {
        v48 = (__m128)*((unsigned int *)a2 + 24);
        goto LABEL_47;
      }
      if ( (v38 & 0x20) != 0 )
      {
        v48 = (__m128)*((unsigned int *)a2 + 25);
        goto LABEL_47;
      }
      if ( (v38 & 0x41) == 0x41 )
      {
        v48 = (__m128)*((unsigned int *)a2 + 22);
        goto LABEL_47;
      }
      if ( (v38 & 0x42) == 0x42 )
      {
        v48 = (__m128)*((unsigned int *)a2 + 23);
        goto LABEL_47;
      }
      if ( (v38 & 0x80u) != 0 )
      {
        v48 = (__m128)*((unsigned int *)a2 + 20);
        goto LABEL_47;
      }
      if ( (v38 & 1) != 0 )
      {
        v48 = (__m128)*((unsigned int *)a2 + 19);
LABEL_47:
        if ( v48.m128_f32[0] != 1.0 )
          *v5 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v48, v48), _mm_unpacklo_ps(v48, (__m128)0LL)), v47);
        goto LABEL_49;
      }
      if ( (v38 & 2) != 0 )
      {
        v48 = (__m128)*((unsigned int *)a2 + 21);
        goto LABEL_47;
      }
LABEL_49:
      v4 += 3;
      ++v37;
      v49 = _mm_mul_ps(*v5, (__m128)_xmm);
      v50 = _mm_or_ps(_mm_and_ps(DirectX::g_XMNegativeZero, v49), DirectX::g_XMNoFraction);
      v51 = _mm_cmple_ps(_mm_and_ps(DirectX::g_XMAbsMask, v49), DirectX::g_XMNoFraction);
      v52 = _mm_div_ps(
              _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v50, v49), v50), v51), _mm_andnot_ps(v51, v49)),
              (__m128)_xmm);
      v53 = _mm_shuffle_ps(v52, v52, 39);
      v53.m128_f32[0] = v39;
      Ptr_low = (__m128)LODWORD(v61);
      *v5++ = _mm_shuffle_ps(v53, v53, 39);
      Reserved = (__m128)v62;
      if ( v37 >= 17 )
        return 0LL;
    }
  }
  if ( (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioPositionCalc::CalculatePositions");
    v64 = 263;
    v71 = &v64;
    v73 = &v63;
    v72 = 4LL;
    v63 = -2147024809;
    v74 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v56, v57, 5u, &pData);
  }
  return 2147942487LL;
}
