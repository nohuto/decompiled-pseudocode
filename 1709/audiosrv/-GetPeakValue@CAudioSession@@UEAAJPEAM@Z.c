/*
 * XREFs of ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x180072040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_g @ 0x18006BA2C (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18007C588 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CAudioSession::GetPeakValue(CAudioSession *this, float *a2)
{
  float *v2; // rbx
  unsigned int v4; // edi
  float v5; // xmm8_4
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  int v8; // esi
  float v9; // xmm7_4
  __int64 v10; // r14
  __int64 v11; // rdx
  float *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  float *v15; // rax
  float v16; // xmm0_4
  float v17; // xmm6_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-50h] BYREF
  char v20; // [rsp+28h] [rbp-48h]
  LPCRITICAL_SECTION v21; // [rsp+30h] [rbp-40h] BYREF
  char v22; // [rsp+38h] [rbp-38h]
  void *Block; // [rsp+C0h] [rbp+50h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = 0.0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, 0LL);
  }
  if ( !v2 )
  {
    v4 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetPeakValue", 1390, -2147467261);
    return v4;
  }
  v22 = 0;
  v21 = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&v21);
  v6 = 0LL;
  if ( !*((_QWORD *)this + 13) )
    goto LABEL_36;
  do
  {
    v7 = *((_QWORD *)this + 12);
    v8 = 0;
    v20 = 0;
    v9 = 0.0;
    v10 = *(_QWORD *)(v7 + 8 * v6);
    lpCriticalSection = (LPCRITICAL_SECTION)(v10 + 136);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( *(_QWORD *)(v10 + 192) )
    {
      v11 = *(unsigned int *)(v10 + 88);
      Block = 0LL;
      ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&Block, v11);
      v12 = (float *)Block;
      if ( !Block )
      {
        v8 = -2147024882;
        free(0LL);
        if ( v20 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v20 = 0;
        }
LABEL_32:
        AudSrvTraceLoggingErrorHelper("CAudioStream::GetPeakValue", 1615, v8);
        goto LABEL_34;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(v10 + 192) + 24LL))(
              *(_QWORD *)(v10 + 192),
              Block,
              *(unsigned int *)(v10 + 88));
      v8 = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -2147417848 )
        {
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x26u,
              (__int64)&WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)(v10 + 192));
          v8 = 0;
        }
      }
      else
      {
        if ( *(_DWORD *)(v10 + 88) )
        {
          v14 = *(unsigned int *)(v10 + 88);
          v15 = v12;
          do
          {
            v16 = *v15;
            v15 += 3;
            v9 = fmaxf(v16, v9);
            --v14;
          }
          while ( v14 );
        }
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_g(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x25u,
            (__int64)&WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
            v9);
        }
      }
      free(v12);
    }
    if ( v20 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v20 = 0;
    }
    v17 = fminf(v9, 1.0);
    if ( v17 <= 0.0 )
      v17 = 0.0;
    if ( v8 < 0 )
      goto LABEL_32;
    v5 = fmaxf(v17, v5);
LABEL_34:
    ++v6;
  }
  while ( v6 < *((_QWORD *)this + 13) );
  v2 = a2;
LABEL_36:
  if ( v22 )
    LeaveCriticalSection(v21);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, v5);
  }
  *v2 = v5;
  return v4;
}
