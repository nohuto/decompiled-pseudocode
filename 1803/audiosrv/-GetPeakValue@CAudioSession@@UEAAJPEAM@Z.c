/*
 * XREFs of ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800AA0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_g @ 0x1800A5030 (WPP_SF_g.c)
 *     ?Allocate@?$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800B54B8 (-Allocate@-$CHeapPtr@UAUDIO_METER_DATA@@VCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CAudioSession::GetPeakValue(CAudioSession *this, float *a2)
{
  float *v2; // rbx
  unsigned int v4; // edi
  float v5; // xmm8_4
  unsigned __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rax
  int v9; // esi
  float v10; // xmm7_4
  __int64 v11; // r14
  __int64 v12; // rdx
  float *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  float *v16; // rax
  float v17; // xmm0_4
  float v18; // xmm6_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-50h] BYREF
  char v21; // [rsp+28h] [rbp-48h]
  LPCRITICAL_SECTION v22; // [rsp+30h] [rbp-40h] BYREF
  char v23; // [rsp+38h] [rbp-38h]
  void *Block; // [rsp+C0h] [rbp+50h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = 0.0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, 0LL);
  }
  if ( !v2 )
  {
    v4 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetPeakValue", 1328, -2147467261);
    return v4;
  }
  v23 = 0;
  v22 = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&v22);
  v6 = 0LL;
  if ( !*((_QWORD *)this + 13) )
    goto LABEL_37;
  v7 = (_QWORD *)((char *)this + 96);
  do
  {
    v8 = ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v7, v6);
    v21 = 0;
    v9 = 0;
    v10 = 0.0;
    v11 = *(_QWORD *)v8;
    lpCriticalSection = (LPCRITICAL_SECTION)(*(_QWORD *)v8 + 136LL);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( *(_QWORD *)(v11 + 192) )
    {
      v12 = *(unsigned int *)(v11 + 96);
      Block = 0LL;
      ATL::CHeapPtr<AUDIO_METER_DATA,ATL::CCRTAllocator>::Allocate(&Block, v12);
      v13 = (float *)Block;
      if ( !Block )
      {
        v9 = -2147024882;
        free(0LL);
        if ( v21 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v21 = 0;
        }
LABEL_33:
        AudSrvTraceLoggingErrorHelper("CAudioStream::GetPeakValue", 1681, v9);
        goto LABEL_35;
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(v11 + 192) + 24LL))(
              *(_QWORD *)(v11 + 192),
              Block,
              *(unsigned int *)(v11 + 96));
      v9 = v14;
      if ( v14 < 0 )
      {
        if ( v14 == -2147417848 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x24u,
              (__int64)&WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids);
          }
          Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(v11 + 192));
          v9 = 0;
        }
      }
      else
      {
        if ( *(_DWORD *)(v11 + 96) )
        {
          v15 = *(unsigned int *)(v11 + 96);
          v16 = v13;
          do
          {
            v17 = *v16;
            v16 += 3;
            v10 = fmaxf(v17, v10);
            --v15;
          }
          while ( v15 );
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_g(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x23u,
            (__int64)&WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
            v10);
        }
      }
      free(v13);
    }
    if ( v21 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v21 = 0;
    }
    v18 = fminf(v10, 1.0);
    if ( v18 <= 0.0 )
      v18 = 0.0;
    if ( v9 < 0 )
      goto LABEL_33;
    v5 = fmaxf(v18, v5);
LABEL_35:
    ++v6;
    v7 = (_QWORD *)((char *)this + 96);
  }
  while ( v6 < *((_QWORD *)this + 13) );
  v2 = a2;
LABEL_37:
  if ( v23 )
    LeaveCriticalSection(v22);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, v5);
  }
  *v2 = v5;
  return v4;
}
