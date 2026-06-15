/*
 * XREFs of ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x180016950
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013F60 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18001D7F0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x1800ADE90 (WPP_SF_dg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::SetSessionVolume(
        CPerStreamVolumeAudioStream *this,
        float a2,
        unsigned int a3,
        float *const a4,
        __int64 a5,
        bool a6)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rax
  float v14; // xmm0_4
  __int64 (__fastcall *v15)(CAudioStream *__hidden); // rax
  int v16; // eax
  float v18; // xmm6_4
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  float v22; // xmm0_4

  v7 = 0;
  v8 = 0LL;
  if ( *((_DWORD *)this + 22) )
  {
    v10 = *((_QWORD *)this + 69);
    do
    {
      *(float *)(v10 + 4 * v8) = a2;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *((_DWORD *)this + 22) );
  }
  v11 = *((_DWORD *)this + 22);
  if ( a3 < v11 )
  {
    v18 = 0.0;
    if ( a3 )
    {
      v19 = a3;
      do
      {
        v18 = fmaxf(v18, *a4++);
        --v19;
      }
      while ( v19 );
    }
    v20 = 0LL;
    if ( v11 )
    {
      do
      {
        v21 = *((_QWORD *)this + 69);
        v22 = v18 * *(float *)(v21 + 4 * v20);
        *(float *)(v21 + 4 * v20) = v22;
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            55LL,
            &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
            (unsigned int)v20,
            v22);
        }
        v20 = (unsigned int)(v20 + 1);
      }
      while ( (unsigned int)v20 < *((_DWORD *)this + 22) );
    }
  }
  else
  {
    v12 = 0LL;
    if ( v11 )
    {
      do
      {
        v13 = *((_QWORD *)this + 69);
        v14 = a4[v12] * *(float *)(v13 + 4 * v12);
        *(float *)(v13 + 4 * v12) = v14;
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            54LL,
            &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
            (unsigned int)v12,
            v14);
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *((_DWORD *)this + 22) );
    }
  }
  *((_QWORD *)this + 70) = a5;
  if ( a6 )
  {
    v15 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this + 128LL);
    if ( v15 == CAudioStream::RecalculateVolume )
      v16 = CAudioStream::RecalculateVolume(this);
    else
      v16 = v15(this);
    v7 = v16;
    if ( v16 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::SetSessionVolume", 0x9A9u, v16);
  }
  return v7;
}
