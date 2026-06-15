/*
 * XREFs of ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x180095D58
 * Callers:
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x18008C760 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_g @ 0x180087868 (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180095948 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetPeakValue(CAudioStream *this, float *a2)
{
  int v4; // edi
  float v5; // xmm6_4
  int v7; // eax
  float *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  float v11; // xmm6_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  void *Block; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_QWORD *)this + 24) )
  {
LABEL_24:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    v11 = fminf(v5, 1.0);
    if ( v11 <= 0.0 )
      v11 = 0.0;
    *a2 = v11;
    if ( v4 >= 0 )
      return (unsigned int)v4;
    goto LABEL_29;
  }
  Block = 0LL;
  ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 23));
  if ( Block )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
           *((_QWORD *)this + 24),
           Block,
           *((unsigned int *)this + 23));
    v4 = v7;
    if ( v7 < 0 )
    {
      if ( v7 == -2147417848 )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids);
        }
        v10 = *((_QWORD *)this + 24);
        if ( v10 )
        {
          *((_QWORD *)this + 24) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v4 = 0;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 23) )
      {
        v8 = (float *)Block;
        v9 = *((unsigned int *)this + 23);
        do
        {
          v5 = fmaxf(*v8, v5);
          v8 += 3;
          --v9;
        }
        while ( v9 );
      }
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_g(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x26u,
          (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids,
          v5);
      }
    }
    free(Block);
    goto LABEL_24;
  }
  v4 = -2147024882;
  free(0LL);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_29:
  AudSrvTraceLoggingErrorHelper("CAudioStream::GetPeakValue", 1671, v4);
  return (unsigned int)v4;
}
