/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800B5518
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800A9810 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_g @ 0x1800A5030 (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800B54B8 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  float *v3; // r15
  int v6; // edi
  __int64 v8; // r14
  int v9; // eax
  float *v10; // rax
  float v11; // xmm0_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  void *Block; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  v6 = 0;
  if ( !a3 )
    return 2147500035LL;
  if ( a2 != *((_DWORD *)this + 24) )
    return 2147942487LL;
  v8 = a2;
  if ( a2 )
    memset_0(a3, 0, 4LL * a2);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 136);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_QWORD *)this + 24) )
  {
LABEL_28:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_31;
  }
  Block = 0LL;
  ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 24));
  if ( Block )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
           *((_QWORD *)this + 24),
           Block,
           *((unsigned int *)this + 24));
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147417848 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, (__int64)&WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids);
        }
        Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 192));
        v6 = 0;
      }
    }
    else
    {
      if ( a2 )
      {
        v10 = (float *)Block;
        do
        {
          v11 = fminf(*v10, 1.0);
          if ( v11 <= 0.0 )
            v11 = 0.0;
          *v3 = v11;
          v10 += 3;
          ++v3;
          --v8;
        }
        while ( v8 );
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_g(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x26u,
          (__int64)&WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
          0.0);
      }
    }
    free(Block);
    goto LABEL_28;
  }
  v6 = -2147024882;
  free(0LL);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_31:
  AudSrvTraceLoggingErrorHelper("CAudioStream::GetChannelPeakValues", 1784, v6);
  return (unsigned int)v6;
}
