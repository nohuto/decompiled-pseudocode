/*
 * XREFs of ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800A9810
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800A1DE4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     WPP_SF_dd @ 0x1800A4FEC (WPP_SF_dd.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800B5518 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x1800B5850 (-GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall CAudioSession::GetChannelsPeakValues(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  int MeteringChannelCount; // edi
  unsigned __int64 v7; // r14
  CAudioStream **v8; // rax
  float *v9; // rbx
  CAudioStream **v10; // rax
  float *v11; // rax
  __int64 v12; // r8
  float v13; // xmm0_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v16; // [rsp+38h] [rbp-8h]
  unsigned int v17; // [rsp+80h] [rbp+40h] BYREF
  void *Block; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, 0LL);
  }
  if ( !a3 )
  {
    MeteringChannelCount = -2147467261;
    goto LABEL_33;
  }
  if ( (_DWORD)v4 )
    memset_0(a3, 0, 4 * v4);
  MeteringChannelCount = (*(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)this + 392LL))(
                           this,
                           &v17);
  if ( MeteringChannelCount < 0 )
    goto LABEL_33;
  if ( (_DWORD)v4 != v17 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        v4);
    }
    MeteringChannelCount = -2147024809;
    goto LABEL_33;
  }
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    while ( 1 )
    {
      Block = 0LL;
      v8 = (CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                              (_QWORD *)this + 12,
                              v7);
      MeteringChannelCount = CAudioStream::GetMeteringChannelCount(*v8, &v17);
      if ( MeteringChannelCount < 0 )
      {
        free(0LL);
        goto LABEL_30;
      }
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, v17);
      v9 = (float *)Block;
      if ( !Block )
        break;
      v10 = (CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                               (_QWORD *)this + 12,
                               v7);
      if ( CAudioStream::GetChannelPeakValues(*v10, v17, v9) >= 0 && v17 )
      {
        v11 = a3;
        v12 = v17;
        do
        {
          v13 = *(float *)((char *)v11 + (char *)v9 - (char *)a3);
          if ( v13 > *v11 )
            *v11 = v13;
          ++v11;
          --v12;
        }
        while ( v12 );
      }
      free(v9);
      if ( ++v7 >= *((_QWORD *)this + 13) )
        goto LABEL_30;
    }
    MeteringChannelCount = -2147024882;
    free(0LL);
    if ( v16 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_33;
  }
LABEL_30:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  if ( MeteringChannelCount < 0 )
LABEL_33:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelsPeakValues", 1477, MeteringChannelCount);
  return (unsigned int)MeteringChannelCount;
}
