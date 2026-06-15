/*
 * XREFs of ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18002D6D0
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001B730 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x18006BA64 (WPP_SF_qdg.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::CalculateAPOVolume(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2,
        float *const a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v6; // r14
  unsigned int v9; // ebx
  float *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  bool v14; // al
  unsigned int v15; // ebp
  float *v16; // rsi
  float v17; // xmm0_4

  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids, this);
  }
  v9 = 0;
  if ( (_DWORD)v6 == *((_DWORD *)this + 21) )
  {
    if ( (_DWORD)v6 )
    {
      v10 = a3;
      v11 = *((_QWORD *)this + 14) - (_QWORD)a3;
      v12 = v6;
      do
      {
        *v10 = *(float *)((char *)v10 + v11) * *((float *)this + 23);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
    v13 = *((_QWORD *)this + 13);
    if ( *((_BYTE *)this + 96) || (v14 = 0, *((_BYTE *)this + 568)) )
      v14 = 1;
    *a4 = v14;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids, this, v14);
    }
    v15 = 0;
    if ( v13 < *((_QWORD *)this + 70) )
      v13 = *((_QWORD *)this + 70);
    *a5 = v13;
    if ( (_DWORD)v6 )
    {
      v16 = a3;
      do
      {
        v17 = *(float *)((char *)v16 - (char *)a3 + *((_QWORD *)this + 69)) * *v16;
        *v16 = v17;
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_qdg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            52LL,
            &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
            this,
            v15,
            v17);
        }
        ++v15;
        ++v16;
      }
      while ( v15 < (unsigned int)v6 );
    }
  }
  else
  {
    v9 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::CalculateAPOVolume", 0x778u, -2147024809);
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::CalculateAPOVolume", 0x8D7u, -2147024809);
  }
  return v9;
}
