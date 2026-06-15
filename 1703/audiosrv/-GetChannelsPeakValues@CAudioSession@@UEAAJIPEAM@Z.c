/*
 * XREFs of ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x18008BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180026BB4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dd @ 0x180090690 (WPP_SF_dd.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800959A8 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x180095CF8 (-GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall CAudioSession::GetChannelsPeakValues(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  int MeteringChannelCount; // edi
  unsigned __int64 v7; // r14
  _BYTE *v8; // rbx
  float *v9; // rax
  __int64 v10; // r8
  float v11; // xmm0_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v14; // [rsp+38h] [rbp-8h]
  unsigned int v15; // [rsp+80h] [rbp+40h] BYREF
  void *Block; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x23u, (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids, 0LL);
  }
  if ( !a3 )
  {
    MeteringChannelCount = -2147467261;
    goto LABEL_31;
  }
  if ( (_DWORD)v4 )
    memset(a3, 0, 4 * v4);
  MeteringChannelCount = (*(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)this + 392LL))(
                           this,
                           &v15);
  if ( MeteringChannelCount < 0 )
    goto LABEL_31;
  if ( (_DWORD)v4 != v15 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        36LL,
        &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        (unsigned int)v4,
        v15);
    }
    MeteringChannelCount = -2147024809;
    goto LABEL_31;
  }
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    while ( 1 )
    {
      Block = 0LL;
      if ( v7 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      MeteringChannelCount = CAudioStream::GetMeteringChannelCount(
                               *(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v7),
                               &v15);
      if ( MeteringChannelCount < 0 )
      {
        free(0LL);
        goto LABEL_28;
      }
      ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, v15);
      v8 = Block;
      if ( !Block )
        break;
      if ( v7 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      if ( CAudioStream::GetChannelPeakValues(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * v7), v15, (float *)Block) >= 0
        && v15 )
      {
        v9 = a3;
        v10 = v15;
        do
        {
          v11 = *(float *)((char *)v9 + v8 - (_BYTE *)a3);
          if ( v11 > *v9 )
            *v9 = v11;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
      free(v8);
      if ( ++v7 >= *((_QWORD *)this + 13) )
        goto LABEL_28;
    }
    MeteringChannelCount = -2147024882;
    free(0LL);
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_31;
  }
LABEL_28:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  if ( MeteringChannelCount < 0 )
LABEL_31:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelsPeakValues", 1575, MeteringChannelCount);
  return (unsigned int)MeteringChannelCount;
}
