/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x18006B510
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009B80 (--1-$ComPtr@U-$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Wi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18002D9E4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     pow @ 0x180033A60 (pow.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005BB90 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::UpdateMasterVolumeLevel(CVolumeSoftware *this)
{
  int v2; // edi
  float *v3; // rbx
  __int64 i; // r15
  __int64 v5; // rax
  float v6; // xmm1_4
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v10; // [rsp+50h] [rbp-10h]
  void *Block; // [rsp+90h] [rbp+30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 248);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 30) )
  {
    Block = 0LL;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 29));
    v3 = (float *)Block;
    if ( !Block )
    {
      v2 = -2147024882;
      free(0LL);
      Block = 0LL;
LABEL_10:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::UpdateMasterVolumeLevel", 1881, v2);
      goto LABEL_17;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
    {
      v5 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
             (_QWORD *)this + 10,
             (unsigned int)i);
      v6 = pow(10.0, *(float *)(v5 + 4) / 20.0);
      v3[i] = v6;
    }
    v12 = 50000LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD, int, __int64 *))(**((_QWORD **)this + 30) + 32LL))(
           *((_QWORD *)this + 30),
           *((unsigned int *)this + 29),
           v3,
           0LL,
           1,
           &v12);
    v2 = v7;
    if ( v7 == -2147417848 || v7 == -2147023174 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>((_QWORD *)this + 30);
      v2 = 0;
    }
    free(v3);
    Block = 0LL;
    if ( v2 < 0 )
      goto LABEL_10;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, this);
  }
  *((_BYTE *)this + 292) = 1;
  Block = (void *)-10000000LL;
  if ( ThreadPool )
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, void **, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 37),
      &Block,
      0LL,
      0);
LABEL_17:
  if ( v10 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v10 = 0;
  }
  return (unsigned int)v2;
}
