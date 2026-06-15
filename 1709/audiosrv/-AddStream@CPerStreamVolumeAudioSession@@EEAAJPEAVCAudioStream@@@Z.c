/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D140
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800198A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x18001A83C (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x18001ACAC (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001B064 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002D5A0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x18002D6B0 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18002D9E4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Reallocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180074F74 (-Reallocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(const void **this, struct CAudioStream *a2)
{
  float *v3; // rbx
  int CurrentPolicyGain; // edi
  float v6; // xmm6_4
  bool v7; // r12
  float PolicyVolumeForStream; // xmm0_4
  _BOOL8 v9; // rdx
  __int64 (__fastcall *v10)(CPerStreamVolumeAudioStream *__hidden, bool, bool); // rax
  int v11; // eax
  void *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 (__usercall *v15)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool); // rax
  int v16; // eax
  unsigned __int64 v18; // rax
  void *v19; // rax
  unsigned int i; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-28h] BYREF
  char v25; // [rsp+48h] [rbp-20h]
  bool v26; // [rsp+B0h] [rbp+48h] BYREF
  float v27; // [rsp+B8h] [rbp+50h] BYREF
  void *Block; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v29; // [rsp+C8h] [rbp+60h] BYREF

  *((_QWORD *)a2 + 8) = this;
  v27 = FLOAT_1_0;
  v3 = 0LL;
  Block = 0LL;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(
                        (CAudioSession *)this,
                        0LL,
                        &v26,
                        (struct SessionPolicyGains *)&v27,
                        &v29);
  if ( CurrentPolicyGain )
    goto LABEL_23;
  v25 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 108);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((float *)this + 226);
  v7 = *((_DWORD *)this + 227) != 0;
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a2);
  }
  PolicyVolumeForStream = CAudioSession::GetPolicyVolumeForStream(
                            (CAudioSession *)this,
                            (struct SessionPolicyGains *)&v27,
                            a2);
  CurrentPolicyGain = CAudioStream::SetPolicyVolume(a2, v26, PolicyVolumeForStream, v29, 0);
  if ( CurrentPolicyGain < 0 )
    goto LABEL_23;
  LOBYTE(v9) = v7;
  v10 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, bool, bool))(*(_QWORD *)a2 + 104LL);
  v11 = v10 == CPerStreamVolumeAudioStream::SetSessionMute
      ? CPerStreamVolumeAudioStream::SetSessionMute(a2, v7, 0)
      : v10(a2, v9, 0);
  CurrentPolicyGain = v11;
  if ( v11 < 0 )
    goto LABEL_23;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 108);
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 254));
  v3 = (float *)Block;
  if ( !Block )
    goto LABEL_27;
  memcpy_0(Block, this[128], 4LL * *((unsigned int *)this + 254));
  v12 = (void *)this[128];
  if ( !v12 || (v13 = *((unsigned int *)a2 + 21), *((_DWORD *)this + 254) < (unsigned int)v13) )
  {
    operator delete(v12);
    this[128] = 0LL;
    v18 = 4LL * *((unsigned int *)a2 + 21);
    if ( !is_mul_ok(*((unsigned int *)a2 + 21), 4uLL) )
      v18 = -1LL;
    v19 = operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
    this[128] = v19;
    if ( v19 )
    {
      for ( i = 0; i < *((_DWORD *)this + 254); *((float *)this[128] + v21) = v3[v21] )
        v21 = i++;
      while ( i < *((_DWORD *)a2 + 21) )
      {
        v22 = i++;
        *((_DWORD *)this[128] + v22) = 1065353216;
      }
      v23 = *((_DWORD *)a2 + 21);
      *((_DWORD *)this + 254) = v23;
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Reallocate(&Block, v23);
      v3 = (float *)Block;
      if ( Block )
      {
        memcpy_0(Block, this[128], 4LL * *((unsigned int *)this + 254));
        goto LABEL_13;
      }
    }
LABEL_27:
    CurrentPolicyGain = -2147024882;
    if ( v25 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_23;
  }
LABEL_13:
  v14 = *((_DWORD *)this + 254);
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  v15 = *(__int64 (__usercall **)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool))(*(_QWORD *)a2 + 96LL);
  if ( v15 == CPerStreamVolumeAudioStream::SetSessionVolume )
    v16 = CPerStreamVolumeAudioStream::SetSessionVolume(a2, v6, v14, v3, 0LL, 1);
  else
    v16 = ((__int64 (__fastcall *)(struct CAudioStream *, __int64, _QWORD, float *))v15)(a2, v13, v14, v3);
  CurrentPolicyGain = v16;
  if ( v16 >= 0 )
  {
    CurrentPolicyGain = CAudioSession::AddStream((CAudioSession *)this, a2);
    goto LABEL_19;
  }
LABEL_23:
  *((_QWORD *)a2 + 8) = 0LL;
LABEL_19:
  if ( CurrentPolicyGain < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::AddStream", 0xC8Du, CurrentPolicyGain);
  free(v3);
  return (unsigned int)CurrentPolicyGain;
}
