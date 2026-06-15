/*
 * XREFs of ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x18007C608
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x180071630 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_g @ 0x18006BA2C (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18007C588 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::GetChannelPeakValues(CAudioStream *this, unsigned int a2, float *a3)
{
  float *v3; // r14
  __int64 v4; // rsi
  int v6; // edi
  int v8; // eax
  float *v9; // rax
  __int64 v10; // rcx
  float v11; // xmm0_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  void *Block; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !a3 )
    return 2147500035LL;
  if ( a2 != *((_DWORD *)this + 22) )
    return 2147942487LL;
  if ( a2 )
    memset(a3, 0, 4LL * a2);
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
  ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 22));
  if ( Block )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
           *((_QWORD *)this + 24),
           Block,
           *((unsigned int *)this + 22));
    v6 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -2147417848 )
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 24);
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
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_g(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x28u,
          (__int64)&WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
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
  AudSrvTraceLoggingErrorHelper("CAudioStream::GetChannelPeakValues", 1718, v6);
  return (unsigned int)v6;
}
