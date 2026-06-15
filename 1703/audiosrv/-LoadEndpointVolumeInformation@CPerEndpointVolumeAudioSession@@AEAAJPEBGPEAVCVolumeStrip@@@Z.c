/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x18008D518
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x18008CB88 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180026BB4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_g @ 0x180087868 (WPP_SF_g.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x18008FAE0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     WPP_SF_dg @ 0x1800ADE90 (WPP_SF_dg.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        CPerEndpointVolumeAudioSession *this,
        const unsigned __int16 *a2,
        struct CVolumeStrip *a3)
{
  __int64 v3; // rax
  LPCRITICAL_SECTION v5; // rbx
  __int64 (__fastcall *v6)(struct CVolumeStrip *, const unsigned __int16 **); // rax
  int v8; // edi
  __int64 i; // r15
  float v11; // xmm0_4
  void *v12; // rcx
  unsigned __int64 v13; // rcx
  SIZE_T v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // r8
  __int64 v17; // rdx
  float v18; // xmm6_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  __int64 j; // r14
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+38h] [rbp-18h]
  const unsigned __int16 *v24; // [rsp+88h] [rbp+38h] BYREF
  int v25; // [rsp+90h] [rbp+40h] BYREF
  float v26; // [rsp+98h] [rbp+48h] BYREF

  v24 = a2;
  v3 = *(_QWORD *)a3;
  LODWORD(v24) = 0;
  v25 = 0;
  v5 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct CVolumeStrip *, const unsigned __int16 **))(v3 + 88);
  lpCriticalSection = 0LL;
  v8 = v6(a3, &v24);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = (*(__int64 (__fastcall **)(struct CVolumeStrip *, int *))(*(_QWORD *)a3 + 192LL))(a3, &v25);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = CAudioSession::SetMute(this, v25, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = (*(__int64 (__fastcall **)(struct CVolumeStrip *, float *))(*(_QWORD *)a3 + 120LL))(a3, &v26);
  if ( v8 < 0 )
    goto LABEL_7;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&lpCriticalSection, (unsigned int)v24);
  v5 = lpCriticalSection;
  if ( !lpCriticalSection )
  {
    v8 = -2147024882;
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation", 2294, v8);
    goto LABEL_8;
  }
  for ( i = 0LL; (unsigned int)i < (unsigned int)v24; i = (unsigned int)(i + 1) )
  {
    v8 = (*(__int64 (__fastcall **)(struct CVolumeStrip *, _QWORD, __int64))(*(_QWORD *)a3 + 152LL))(
           a3,
           (unsigned int)i,
           (__int64)v5 + 4 * i);
    if ( v8 < 0 )
      goto LABEL_7;
  }
  v23 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 880);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v11 = v26;
  *((float *)this + 230) = v26;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids, v11);
  }
  v12 = (void *)*((_QWORD *)this + 130);
  *((_DWORD *)this + 258) = (_DWORD)v24;
  operator delete(v12);
  v13 = *((unsigned int *)this + 258);
  *((_QWORD *)this + 130) = 0LL;
  v14 = 4 * v13;
  if ( !is_mul_ok(v13, 4uLL) )
    v14 = -1LL;
  v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 130) = v15;
  v16 = v15;
  if ( !v15 )
  {
    v8 = -2147024882;
    if ( v23 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_7;
  }
  v17 = 0LL;
  v18 = 0.0;
  if ( *((_DWORD *)this + 258) )
  {
    do
    {
      v16[v17] = *((_DWORD *)&v5->DebugInfo + v17);
      v16 = (_DWORD *)*((_QWORD *)this + 130);
      v19 = *(float *)&v16[v17];
      v17 = (unsigned int)(v17 + 1);
      v20 = fmaxf(v19, v18);
      v18 = v20;
    }
    while ( (unsigned int)v17 < *((_DWORD *)this + 258) );
    if ( v20 > 0.0 )
    {
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 258); j = (unsigned int)(j + 1) )
      {
        *(float *)(*((_QWORD *)this + 130) + 4 * j) = *(float *)(*((_QWORD *)this + 130) + 4 * j) / v20;
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            52LL,
            &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
            (unsigned int)j,
            *(float *)(*((_QWORD *)this + 130) + 4 * j));
        }
      }
    }
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_8:
  free(v5);
  return (unsigned int)v8;
}
