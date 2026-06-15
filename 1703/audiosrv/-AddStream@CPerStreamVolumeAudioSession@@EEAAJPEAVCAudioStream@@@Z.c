/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18001D7F0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015200 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180015FB0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x180016930 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x180016950 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x180019DF0 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180019E70 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Reallocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18008ED14 (-Reallocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(const void **this, struct CAudioStream *a2)
{
  float *v3; // rbx
  float v5; // xmm6_4
  int CurrentPolicyGain; // edi
  float v7; // xmm7_4
  unsigned __int8 v8; // r12
  CAudioStream *v9; // rcx
  _BOOL8 (__fastcall *v10)(CAudioStream *); // rax
  BOOL IsCaptureStream; // eax
  CAudioStream *v12; // rcx
  _BOOL8 (__fastcall *v13)(CAudioStream *); // rax
  BOOL v14; // eax
  float v15; // xmm6_4
  __int64 (__fastcall *v16)(CPerStreamVolumeAudioStream *, char, char); // rax
  int v17; // eax
  size_t v18; // rcx
  unsigned __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // rdx
  void *v22; // rcx
  unsigned int v23; // edi
  __int64 (__fastcall *v24)(CPerStreamVolumeAudioStream *, float, unsigned int, float *const, __int64, bool); // rax
  int v25; // eax
  unsigned __int64 v27; // rax
  void *v28; // rax
  __int64 i; // r8
  unsigned int v30; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v32; // [rsp+50h] [rbp-21h]
  __int128 v33; // [rsp+58h] [rbp-19h] BYREF
  float v34; // [rsp+68h] [rbp-9h]
  float v35; // [rsp+6Ch] [rbp-5h]
  void *v36; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v37; // [rsp+E0h] [rbp+6Fh] BYREF

  v3 = 0LL;
  v5 = FLOAT_1_0;
  *((_QWORD *)a2 + 8) = this;
  v33 = _xmm;
  v34 = 1.0;
  v35 = 1.0;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(
                        (CAudioSession *)this,
                        0LL,
                        (bool *)&v36,
                        (struct SessionPolicyGains *)&v33,
                        &v37);
  if ( CurrentPolicyGain )
    goto LABEL_64;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 110);
  v32 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((float *)this + 230);
  v8 = *((_DWORD *)this + 231) != 0;
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 67LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, a2);
  }
  v9 = (struct CAudioStream *)((char *)a2 + 8);
  v10 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*((_QWORD *)a2 + 1) + 56LL);
  if ( v10 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(v9);
  else
    IsCaptureStream = v10(v9);
  if ( !IsCaptureStream )
    v5 = *((float *)&v33 + 2);
  v12 = (struct CAudioStream *)((char *)a2 + 8);
  v13 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*((_QWORD *)a2 + 1) + 56LL);
  if ( v13 == CAudioStream::IsCaptureStream )
    v14 = CAudioStream::IsCaptureStream(v12);
  else
    v14 = v13(v12);
  if ( !v14 && !*((_BYTE *)a2 + 42) )
    v5 = v5 * *(float *)&v33;
  v15 = v5 * *((float *)&v33 + 1);
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 72LL))(
         g_PolicyManager,
         *((unsigned int *)a2 + 134)) )
  {
    v15 = v15 * *((float *)&v33 + 3);
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 112LL))(
          g_PolicyManager,
          *((unsigned int *)a2 + 134)) )
    v15 = v15 * v34;
  if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 168LL))(
         g_PolicyManager,
         *((unsigned int *)a2 + 134)) )
  {
    v15 = v15 * v35;
  }
  CurrentPolicyGain = CAudioStream::SetPolicyVolume(a2, (char)v36, v15, v37, 0);
  if ( CurrentPolicyGain < 0 )
    goto LABEL_64;
  v16 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, char, char))(*(_QWORD *)a2 + 112LL);
  v17 = v16 == CPerStreamVolumeAudioStream::SetSessionMute
      ? CPerStreamVolumeAudioStream::SetSessionMute(a2, v8, 0)
      : v16(a2, v8, 0);
  CurrentPolicyGain = v17;
  if ( v17 < 0 )
    goto LABEL_64;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 110);
  v32 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v18 = *((unsigned int *)this + 258);
  if ( *((_DWORD *)this + 258) )
  {
    if ( v18 == 2 )
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v19 = 0xFFFFFFFFFFFFFFFFuLL / v18;
    if ( v19 < 4 )
    {
LABEL_62:
      CurrentPolicyGain = -2147024882;
      if ( !v32 )
        goto LABEL_64;
      goto LABEL_63;
    }
    v18 *= 4LL;
  }
  v20 = malloc(v18);
  v36 = v20;
  v3 = (float *)v20;
  if ( !v20 )
    goto LABEL_62;
  memcpy_0(v20, this[130], 4LL * *((unsigned int *)this + 258));
  v22 = (void *)this[130];
  if ( !v22 || *((_DWORD *)this + 258) < *((_DWORD *)a2 + 22) )
  {
    operator delete(v22);
    this[130] = 0LL;
    v27 = 4LL * *((unsigned int *)a2 + 22);
    if ( !is_mul_ok(*((unsigned int *)a2 + 22), 4uLL) )
      v27 = -1LL;
    v28 = operator new[](v27, (const struct std::nothrow_t *)&std::nothrow);
    this[130] = v28;
    if ( v28 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 258); i = (unsigned int)(i + 1) )
        *((float *)this[130] + i) = v3[i];
      for ( ; (unsigned int)i < *((_DWORD *)a2 + 22); i = (unsigned int)(i + 1) )
        *((_DWORD *)this[130] + i) = 1065353216;
      v30 = *((_DWORD *)a2 + 22);
      *((_DWORD *)this + 258) = v30;
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Reallocate(&v36, v30);
      v3 = (float *)v36;
      if ( v36 )
      {
        memcpy_0(v36, this[130], 4LL * *((unsigned int *)this + 258));
        goto LABEL_35;
      }
      CurrentPolicyGain = -2147024882;
      if ( !v32 )
        goto LABEL_64;
    }
    else
    {
      CurrentPolicyGain = -2147024882;
      if ( !v32 )
        goto LABEL_64;
    }
LABEL_63:
    LeaveCriticalSection(lpCriticalSection);
    goto LABEL_64;
  }
LABEL_35:
  v23 = *((_DWORD *)this + 258);
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  v24 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, float, unsigned int, float *const, __int64, bool))(*(_QWORD *)a2 + 104LL);
  if ( v24 == CPerStreamVolumeAudioStream::SetSessionVolume )
    v25 = CPerStreamVolumeAudioStream::SetSessionVolume(a2, v7, v23, v3, 0LL, 1);
  else
    v25 = ((__int64 (__fastcall *)(struct CAudioStream *, __int64, _QWORD, float *))v24)(a2, v21, v23, v3);
  CurrentPolicyGain = v25;
  if ( v25 >= 0 )
  {
    CurrentPolicyGain = CAudioSession::AddStream((CAudioSession *)this, a2);
    goto LABEL_41;
  }
LABEL_64:
  *((_QWORD *)a2 + 8) = 0LL;
LABEL_41:
  if ( CurrentPolicyGain < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::AddStream", 0xCBFu, CurrentPolicyGain);
  free(v3);
  return (unsigned int)CurrentPolicyGain;
}
