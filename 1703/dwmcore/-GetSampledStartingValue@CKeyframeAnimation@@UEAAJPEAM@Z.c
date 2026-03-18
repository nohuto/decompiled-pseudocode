/*
 * XREFs of ?GetSampledStartingValue@CKeyframeAnimation@@UEAAJPEAM@Z @ 0x180030200
 * Callers:
 *     ?GetValue@StartingValueInput@Animations@Components@@UEAAJPEAVValue@23@@Z @ 0x1800293A0 (-GetValue@StartingValueInput@Animations@Components@@UEAAJPEAVValue@23@@Z.c)
 * Callees:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180030084 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::GetSampledStartingValue(CKeyframeAnimation *this, float *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  int v6; // eax
  __m128 v7; // xmm2
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 5);
  if ( *(_DWORD *)v2
    || (v6 = CKeyframeAnimation::SampleStartingValue((CKeyframeAnimation *)((char *)this - 224)), v4 = v6, v6 >= 0) )
  {
    switch ( *(_DWORD *)v2 )
    {
      case 0x12:
        *a2 = *(float *)(v2 + 8);
        break;
      case 0x23:
        *(_QWORD *)a2 = *(_QWORD *)(v2 + 8);
        break;
      case 0x34:
        v8 = *(_DWORD *)(v2 + 16);
        v9 = *(_QWORD *)(v2 + 8);
        *(_DWORD *)a2 = v9;
        *((_DWORD *)a2 + 2) = v8;
        a2[1] = *((float *)&v9 + 1);
        break;
      default:
        if ( *(_DWORD *)v2 != 69 && (unsigned int)(*(_DWORD *)v2 - 70) > 1 )
        {
          v4 = -2147467259;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x6E5u);
          return v4;
        }
        v7 = (__m128)_mm_loadu_si128((const __m128i *)(v2 + 8));
        *a2 = v7.m128_f32[0];
        *((_DWORD *)a2 + 3) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
        *((_DWORD *)a2 + 1) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
        *((_DWORD *)a2 + 2) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
        break;
    }
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x6A9u);
  }
  return v4;
}
