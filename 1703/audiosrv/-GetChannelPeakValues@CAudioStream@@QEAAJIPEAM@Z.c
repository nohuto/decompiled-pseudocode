/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800959A8
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x18008BCE0 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_g @ 0x180087868 (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180095948 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  float *v3; // r14
  __int64 v4; // rbp
  int v6; // edi
  int v8; // eax
  float *v9; // rax
  __int64 v10; // rcx
  float v11; // xmm0_4
  __int64 v12; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-18h]
  void *Block; // [rsp+60h] [rbp+18h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !a3 )
    return 2147500035LL;
  if ( a2 != *((_DWORD *)this + 23) )
    return 2147942487LL;
  if ( a2 )
    memset(a3, 0, 4LL * a2);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_QWORD *)this + 24) )
  {
LABEL_30:
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_33;
  }
  Block = 0LL;
  ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 23));
  if ( Block )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
           *((_QWORD *)this + 24),
           Block,
           *((unsigned int *)this + 23));
    v6 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids);
        }
        v12 = *((_QWORD *)this + 24);
        if ( v12 )
        {
          *((_QWORD *)this + 24) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v6 = 0;
      }
    }
    else
    {
      if ( (_DWORD)v4 )
      {
        v9 = (float *)Block;
        v10 = v4;
        do
        {
          v11 = fminf(*v9, 1.0);
          if ( v11 <= 0.0 )
            v11 = 0.0;
          *v3 = v11;
          v9 += 3;
          ++v3;
          --v10;
        }
        while ( v10 );
      }
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_g(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x29u,
          (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids,
          0.0);
      }
    }
    free(Block);
    goto LABEL_30;
  }
  v6 = -2147024882;
  free(0LL);
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_33:
  AudSrvTraceLoggingErrorHelper("CAudioStream::GetChannelPeakValues", 1774, v6);
  return (unsigned int)v6;
}
