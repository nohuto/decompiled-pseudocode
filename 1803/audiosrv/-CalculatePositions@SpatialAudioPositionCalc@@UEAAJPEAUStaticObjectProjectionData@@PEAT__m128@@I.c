/*
 * XREFs of ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x18005CFA0
 * Callers:
 *     ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18004C710 (-AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?ComputeCubicProjectOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x18005D4DC (-ComputeCubicProjectOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PE.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x180104414 (-ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets.c)
 */

__int64 __fastcall SpatialAudioPositionCalc::CalculatePositions(
        SpatialAudioPositionCalc *this,
        struct StaticObjectProjectionData *a2,
        const GUID *a3,
        const GUID *a4)
{
  _BYTE *v4; // rbx
  GUID *v5; // rsi
  __m128 v7; // xmm10
  __int64 v8; // r9
  __m128 v9; // xmm13
  __m128 v10; // xmm11
  __m128 v11; // xmm14
  __m128 v12; // xmm9
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm4
  __m128 Size; // xmm5
  __m128 Ptr_low; // xmm15
  int v18; // edx
  float v19; // xmm7_4
  int v20; // eax
  __m128 Reserved; // xmm3
  __m128 v22; // xmm3
  int v23; // eax
  __m128 v24; // xmm2
  int v25; // eax
  __m128 v26; // xmm0
  __m128 v27; // xmm3
  __m128 v28; // xmm5
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  __m128 v31; // xmm1
  __m128 v32; // xmm2
  __m128 v33; // xmm3
  __m128 v34; // xmm2
  __m128 v35; // xmm3
  __m128 v36; // xmm3
  __m128 v38; // xmm2
  int v39; // [rsp+38h] [rbp-D0h] BYREF
  int v40; // [rsp+3Ch] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v42; // [rsp+58h] [rbp-B0h]
  unsigned int v43; // [rsp+5Ch] [rbp-ACh]
  unsigned int v44; // [rsp+60h] [rbp-A8h]
  unsigned int v45; // [rsp+64h] [rbp-A4h]
  const char *v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  int *v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h]
  int *v50; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h]

  v4 = (char *)this + 88;
  v5 = (GUID *)a3;
  if ( a2 && a3 && (_DWORD)a4 == 272 )
  {
    if ( *((_DWORD *)a2 + 27) )
      SpatialAudioPositionCalc::ComputeRadialProjectionOffsets(this, (struct SpatialAudioProjectionOffsets *)&pData, a2);
    else
      SpatialAudioPositionCalc::ComputeCubicProjectOffsets(this, (struct SpatialAudioProjectionOffsets *)&pData, a2);
    v7 = (__m128)(unsigned int)v48;
    v8 = 0LL;
    v9 = (__m128)HIDWORD(v47);
    v10 = (__m128)(unsigned int)v47;
    v11 = (__m128)HIDWORD(v46);
    v12 = (__m128)(unsigned int)v46;
    v13 = (__m128)v45;
    v14 = (__m128)v44;
    v15 = (__m128)v42;
    Size = (__m128)pData.Size;
    Ptr_low = (__m128)LODWORD(pData.Ptr);
    while ( 1 )
    {
      v18 = dword_1801448D0[v8];
      v19 = FLOAT_1_0;
      if ( (v18 & 0x10) != 0 )
      {
        v19 = *((float *)a2 + 17);
      }
      else if ( (v18 & 0x20) != 0 )
      {
        v19 = *((float *)a2 + 18);
      }
      else if ( (v18 & 0x41) == 0x41 )
      {
        v19 = *((float *)a2 + 15);
      }
      else if ( (v18 & 0x42) == 0x42 )
      {
        v19 = *((float *)a2 + 16);
      }
      else if ( (v18 & 0x80u) != 0 )
      {
        v19 = *((float *)a2 + 13);
      }
      else if ( (v18 & 1) != 0 )
      {
        v19 = *((float *)a2 + 12);
      }
      else if ( (v18 & 2) != 0 )
      {
        v19 = *((float *)a2 + 14);
      }
      v20 = (unsigned __int8)*v4;
      Reserved = 0LL;
      if ( !*v4 )
        goto LABEL_25;
      switch ( v20 )
      {
        case 12:
          v22 = v11;
          break;
        case 13:
          Reserved = v11;
          goto LABEL_25;
        case 15:
          Reserved = v9;
          goto LABEL_25;
        case 14:
          v22 = v9;
          break;
        default:
          switch ( *v4 )
          {
            case 1:
              v22 = Size;
              goto LABEL_24;
            case 2:
              Reserved = Size;
              break;
            case 3:
              v22 = Ptr_low;
              goto LABEL_24;
            case 4:
              Reserved = Ptr_low;
              break;
            case 5:
              Reserved = (__m128)pData.Reserved;
              break;
            case 6:
              v22 = (__m128)v43;
              goto LABEL_24;
            case 7:
              v22 = v15;
              goto LABEL_24;
            case 8:
              Reserved = v15;
              break;
            case 9:
              v22 = v14;
              goto LABEL_24;
            case 0xA:
              Reserved = v14;
              break;
            case 0xB:
              Reserved = v13;
              break;
            case 0x10:
              v22 = v10;
              goto LABEL_24;
            case 0x11:
              Reserved = v10;
              break;
            case 0x12:
              v22 = v7;
              goto LABEL_24;
            case 0x13:
              Reserved = v7;
              break;
            case 0x14:
              v22 = v12;
              goto LABEL_24;
            case 0x15:
              Reserved = v12;
              break;
            default:
              goto LABEL_25;
          }
          goto LABEL_25;
      }
LABEL_24:
      Reserved = _mm_xor_ps(v22, (__m128)(unsigned int)_xmm);
LABEL_25:
      v23 = (unsigned __int8)v4[1];
      v24 = 0LL;
      if ( v4[1] )
      {
        if ( v23 == 20 )
        {
          v38 = v12;
LABEL_54:
          v24 = _mm_xor_ps(v38, (__m128)(unsigned int)_xmm);
        }
        else if ( v23 == 21 )
        {
          v24 = v12;
        }
        else
        {
          switch ( v4[1] )
          {
            case 1:
              v38 = Size;
              goto LABEL_54;
            case 2:
              v24 = Size;
              break;
            case 3:
              v38 = Ptr_low;
              goto LABEL_54;
            case 4:
              v24 = Ptr_low;
              break;
            case 5:
              v24 = (__m128)pData.Reserved;
              break;
            case 6:
              v38 = (__m128)v43;
              goto LABEL_54;
            case 7:
              v38 = v15;
              goto LABEL_54;
            case 8:
              v24 = v15;
              break;
            case 9:
              v38 = v14;
              goto LABEL_54;
            case 0xA:
              v24 = v14;
              break;
            case 0xB:
              v24 = v13;
              break;
            case 0xC:
              v38 = v11;
              goto LABEL_54;
            case 0xD:
              v24 = v11;
              break;
            case 0xE:
              v38 = v9;
              goto LABEL_54;
            case 0xF:
              v24 = v9;
              break;
            case 0x10:
              v38 = v10;
              goto LABEL_54;
            case 0x11:
              v24 = v10;
              break;
            case 0x12:
              v38 = v7;
              goto LABEL_54;
            case 0x13:
              v24 = v7;
              break;
            default:
              break;
          }
        }
      }
      v25 = (unsigned __int8)v4[2];
      v26 = 0LL;
      switch ( v25 )
      {
        case 19:
          v26 = v7;
          break;
        case 16:
          v26 = _mm_xor_ps(v10, (__m128)(unsigned int)_xmm);
          break;
        case 5:
          v26 = (__m128)pData.Reserved;
          break;
        case 11:
          v26 = (__m128)v45;
          break;
        case 6:
          v26 = _mm_xor_ps((__m128)v43, (__m128)(unsigned int)_xmm);
          break;
        default:
          switch ( v4[2] )
          {
            case 1:
              v26 = _mm_xor_ps(Size, (__m128)(unsigned int)_xmm);
              break;
            case 2:
              v26 = Size;
              break;
            case 3:
              v26 = _mm_xor_ps(Ptr_low, (__m128)(unsigned int)_xmm);
              break;
            case 4:
              v26 = Ptr_low;
              break;
            case 7:
              v26 = _mm_xor_ps(v15, (__m128)(unsigned int)_xmm);
              break;
            case 8:
              v26 = v15;
              break;
            case 9:
              v26 = _mm_xor_ps(v14, (__m128)(unsigned int)_xmm);
              break;
            case 0xA:
              v26 = v14;
              break;
            case 0xC:
              v26 = _mm_xor_ps(v11, (__m128)(unsigned int)_xmm);
              break;
            case 0xD:
              v26 = v11;
              break;
            case 0xE:
              v26 = _mm_xor_ps(v9, (__m128)(unsigned int)_xmm);
              break;
            case 0xF:
              v26 = v9;
              break;
            case 0x11:
              v26 = v10;
              break;
            case 0x12:
              v26 = _mm_xor_ps(v7, (__m128)(unsigned int)_xmm);
              break;
            case 0x14:
              v26 = _mm_xor_ps(v12, (__m128)(unsigned int)_xmm);
              break;
            case 0x15:
              v26 = v12;
              break;
            default:
              goto LABEL_37;
          }
          break;
      }
LABEL_37:
      v27 = _mm_unpacklo_ps(_mm_unpacklo_ps(Reserved, v26), _mm_unpacklo_ps(v24, (__m128)0LL));
      *v5 = (GUID)v27;
      v28 = v27;
      if ( !*((_DWORD *)a2 + 27) )
      {
        v29 = (__m128)LODWORD(FLOAT_1_0);
        if ( (v18 & 0x10) != 0 )
        {
          v29 = (__m128)*((unsigned int *)a2 + 24);
        }
        else if ( (v18 & 0x20) != 0 )
        {
          v29 = (__m128)*((unsigned int *)a2 + 25);
        }
        else if ( (v18 & 0x41) == 0x41 )
        {
          v29 = (__m128)*((unsigned int *)a2 + 22);
        }
        else if ( (v18 & 0x42) == 0x42 )
        {
          v29 = (__m128)*((unsigned int *)a2 + 23);
        }
        else if ( (v18 & 0x80u) != 0 )
        {
          v29 = (__m128)*((unsigned int *)a2 + 20);
        }
        else if ( (v18 & 1) != 0 )
        {
          v29 = (__m128)*((unsigned int *)a2 + 19);
        }
        else if ( (v18 & 2) != 0 )
        {
          v29 = (__m128)*((unsigned int *)a2 + 21);
        }
        v28 = v27;
        if ( v29.m128_f32[0] != 1.0 )
        {
          v28 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v29, v29), _mm_unpacklo_ps(v29, (__m128)0LL)), v27);
          *v5 = (GUID)v28;
        }
        v15 = (__m128)v42;
      }
      v4 += 3;
      v30 = _mm_mul_ps(v28, (__m128)_xmm);
      ++v8;
      v31 = _mm_or_ps(_mm_and_ps(v30, DirectX::g_XMNegativeZero), DirectX::g_XMNoFraction);
      v32 = _mm_cmple_ps(_mm_and_ps(v30, DirectX::g_XMAbsMask), DirectX::g_XMNoFraction);
      v13 = (__m128)v45;
      v33 = _mm_and_ps(_mm_sub_ps(_mm_add_ps(v31, v30), v31), v32);
      v34 = _mm_andnot_ps(v32, v30);
      Size = (__m128)pData.Size;
      v35 = _mm_div_ps(_mm_xor_ps(v33, v34), (__m128)_xmm);
      v36 = _mm_shuffle_ps(v35, v35, 39);
      v36.m128_f32[0] = v19;
      v14 = (__m128)v44;
      *(__m128 *)v5++ = _mm_shuffle_ps(v36, v36, 39);
      if ( v8 >= 17 )
        return 0LL;
    }
  }
  if ( (unsigned int)dword_1801883B0 > 2 )
  {
    v47 = 45LL;
    v46 = "SpatialAudioPositionCalc::CalculatePositions";
    v39 = 263;
    v48 = &v39;
    v49 = 4LL;
    v40 = -2147024809;
    v50 = &v40;
    v51 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, a3, a4, 5u, &pData);
  }
  return 2147942487LL;
}
