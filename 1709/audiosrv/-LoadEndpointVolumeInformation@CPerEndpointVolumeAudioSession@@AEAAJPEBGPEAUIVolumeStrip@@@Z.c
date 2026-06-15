/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x180072CE8
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800726A8 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18002D9E4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_dg @ 0x18006B9E8 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x18006BA2C (WPP_SF_g.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180076070 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        CPerEndpointVolumeAudioSession *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip *a3)
{
  __int64 v3; // rax
  LPCRITICAL_SECTION v5; // rbx
  __int64 (__fastcall *v6)(struct IVolumeStrip *, const unsigned __int16 **); // rax
  int v8; // edi
  __int64 i; // r14
  float v11; // xmm0_4
  void *v12; // rcx
  unsigned __int64 v13; // rcx
  SIZE_T v14; // rax
  _DWORD *v15; // rax
  _DWORD *v16; // r8
  __int64 v17; // rdx
  float v18; // xmm6_4
  unsigned int v19; // eax
  float v20; // xmm0_4
  float v21; // xmm0_4
  __int64 v22; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-20h] BYREF
  char v24; // [rsp+38h] [rbp-18h]
  const unsigned __int16 *v25; // [rsp+88h] [rbp+38h] BYREF
  int v26; // [rsp+90h] [rbp+40h] BYREF
  float v27; // [rsp+98h] [rbp+48h] BYREF

  v25 = a2;
  v3 = *(_QWORD *)a3;
  LODWORD(v25) = 0;
  v26 = 0;
  v5 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IVolumeStrip *, const unsigned __int16 **))(v3 + 48);
  lpCriticalSection = 0LL;
  v8 = v6(a3, &v25);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, int *))(*(_QWORD *)a3 + 152LL))(a3, &v26);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = CAudioSession::SetMute(this, v26, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, float *))(*(_QWORD *)a3 + 80LL))(a3, &v27);
  if ( v8 < 0 )
    goto LABEL_7;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&lpCriticalSection, (unsigned int)v25);
  v5 = lpCriticalSection;
  if ( !lpCriticalSection )
  {
    v8 = -2147024882;
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation", 2212, v8);
    goto LABEL_8;
  }
  for ( i = 0LL; (unsigned int)i < (unsigned int)v25; i = (unsigned int)(i + 1) )
  {
    v8 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, __int64))(*(_QWORD *)a3 + 112LL))(
           a3,
           (unsigned int)i,
           (__int64)v5 + 4 * i);
    if ( v8 < 0 )
      goto LABEL_7;
  }
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 864);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v11 = v27;
  *((float *)this + 226) = v27;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x30u, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, v11);
  }
  v12 = (void *)*((_QWORD *)this + 128);
  *((_DWORD *)this + 254) = (_DWORD)v25;
  operator delete(v12);
  v13 = *((unsigned int *)this + 254);
  *((_QWORD *)this + 128) = 0LL;
  v14 = 4 * v13;
  if ( !is_mul_ok(v13, 4uLL) )
    v14 = -1LL;
  v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 128) = v15;
  v16 = v15;
  if ( !v15 )
  {
    v8 = -2147024882;
    if ( v24 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_7;
  }
  v17 = 0LL;
  v18 = 0.0;
  if ( *((_DWORD *)this + 254) )
  {
    do
    {
      v16[v17] = *((_DWORD *)&v5->DebugInfo + v17);
      v16 = (_DWORD *)*((_QWORD *)this + 128);
      v19 = *((_DWORD *)this + 254);
      v20 = *(float *)&v16[v17];
      v17 = (unsigned int)(v17 + 1);
      v21 = fmaxf(v20, v18);
      v18 = v21;
    }
    while ( (unsigned int)v17 < v19 );
    if ( v21 > 0.0 )
    {
      v22 = 0LL;
      if ( v19 )
      {
        do
        {
          *(float *)(*((_QWORD *)this + 128) + 4 * v22) = *(float *)(*((_QWORD *)this + 128) + 4 * v22) / v21;
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x31u,
              (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
              v22);
          }
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < *((_DWORD *)this + 254) );
      }
    }
  }
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_8:
  free(v5);
  return (unsigned int)v8;
}
