/*
 * XREFs of ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002B7F0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035930 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_dg @ 0x1800D3DD4 (WPP_SF_dg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::SetSessionVolume(
        CPerStreamVolumeAudioStream *this,
        float a2,
        unsigned int a3,
        float *const a4,
        __int64 a5,
        bool a6)
{
  unsigned int v7; // esi
  __int64 v8; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  float v14; // xmm0_4
  int v15; // eax
  float v17; // xmm6_4
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  float v21; // xmm0_4

  v7 = 0;
  v8 = 0LL;
  v10 = *((_DWORD *)this + 23);
  if ( v10 )
  {
    v11 = *((_QWORD *)this + 81);
    do
    {
      *(float *)(v11 + 4 * v8) = a2;
      v8 = (unsigned int)(v8 + 1);
      v10 = *((_DWORD *)this + 23);
    }
    while ( (unsigned int)v8 < v10 );
  }
  if ( a3 < v10 )
  {
    v17 = 0.0;
    if ( a3 )
    {
      v18 = a3;
      do
      {
        v17 = fmaxf(v17, *a4++);
        --v18;
      }
      while ( v18 );
      v10 = *((_DWORD *)this + 23);
    }
    v19 = 0LL;
    if ( v10 )
    {
      do
      {
        v20 = *((_QWORD *)this + 81);
        v21 = v17 * *(float *)(v20 + 4 * v19);
        *(float *)(v20 + 4 * v19) = v21;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            47LL,
            &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
            (unsigned int)v19,
            v21);
        }
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < *((_DWORD *)this + 23) );
    }
  }
  else
  {
    v12 = 0LL;
    if ( v10 )
    {
      do
      {
        v13 = *((_QWORD *)this + 81);
        v14 = a4[v12] * *(float *)(v13 + 4 * v12);
        *(float *)(v13 + 4 * v12) = v14;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            46LL,
            &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
            (unsigned int)v12,
            v14);
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *((_DWORD *)this + 23) );
    }
  }
  *((_QWORD *)this + 82) = a5;
  if ( a6 )
  {
    v15 = CAudioStream::RecalculateVolume(this, 0, 0LL);
    v7 = v15;
    if ( v15 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::SetSessionVolume", 0x959u, v15);
  }
  return v7;
}
