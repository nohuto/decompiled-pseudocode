/*
 * XREFs of ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x180016A50
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800878A0 (WPP_SF_qdg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::CalculateAPOVolume(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2,
        unsigned __int64 a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  float *v12; // r8
  float *v13; // r9
  __m128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  float v19; // xmm0_4
  __int64 v20; // rdi
  bool v21; // al
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // r14
  float v25; // xmm0_4

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids, this);
  }
  if ( a2 == *((_DWORD *)this + 22) )
  {
    v9 = 0LL;
    if ( a2 )
    {
      if ( a2 >= 8 )
      {
        v10 = *((_QWORD *)this + 14);
        v11 = a2 - 1;
        v12 = (float *)((char *)this + 96);
        v13 = (float *)(a3 + 4 * v11);
        v14 = _mm_shuffle_ps((__m128)*((unsigned int *)this + 24), (__m128)*((unsigned int *)this + 24), 0);
        if ( (a3 > v10 + 4 * v11 || (unsigned __int64)v13 < v10) && (a3 > (unsigned __int64)v12 || v13 < v12) )
        {
          do
          {
            v15 = (unsigned int)(v9 + 4);
            *(__m128 *)(a3 + 4 * v9) = _mm_mul_ps(*(__m128 *)(v10 + 4 * v9), v14);
            v9 = (unsigned int)(v9 + 8);
            *(__m128 *)(a3 + 4 * v15) = _mm_mul_ps(*(__m128 *)(v10 + 4 * v15), v14);
          }
          while ( (unsigned int)v9 < (a2 & 0xFFFFFFF8) );
        }
      }
      if ( (unsigned int)v9 < a2 )
      {
        v16 = *((_QWORD *)this + 14);
        v17 = 4 * v9;
        v18 = a2 - (unsigned int)v9;
        do
        {
          v19 = *(float *)(v17 + v16);
          v17 += 4LL;
          *(float *)(v17 + a3 - 4) = v19 * *((float *)this + 24);
          --v18;
        }
        while ( v18 );
      }
    }
    v20 = *((_QWORD *)this + 13);
    v21 = *((_BYTE *)this + 100) || *((_BYTE *)this + 568);
    *a4 = v21;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_c45047042f6d344739c91af1a021533b_Traceguids, this, v21);
    }
    v22 = *((_QWORD *)this + 70);
    if ( v20 >= v22 )
      v22 = v20;
    v23 = 0;
    *a5 = v22;
    if ( a2 )
    {
      v24 = -(__int64)a3;
      do
      {
        v25 = *(float *)(v24 + a3 + *((_QWORD *)this + 69)) * *(float *)a3;
        *(float *)a3 = v25;
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_qdg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            53LL,
            &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
            this,
            v23,
            v25);
        }
        ++v23;
        a3 += 4LL;
      }
      while ( v23 < a2 );
    }
    return 0LL;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::CalculateAPOVolume", 0x7D8u, -2147024809);
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::CalculateAPOVolume", 0x95Eu, -2147024809);
    return 2147942487LL;
  }
}
