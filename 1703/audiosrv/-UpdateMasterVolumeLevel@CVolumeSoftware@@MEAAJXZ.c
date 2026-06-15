/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180087390
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180026BB4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     pow @ 0x180049B90 (pow.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeSoftware::UpdateMasterVolumeLevel(CVolumeSoftware *this)
{
  int v2; // esi
  float *v3; // rbx
  __int64 i; // rsi
  float v5; // xmm1_4
  int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v9; // [rsp+50h] [rbp-10h]
  void *Block; // [rsp+90h] [rbp+30h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 248);
  v9 = 0;
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
LABEL_13:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::UpdateMasterVolumeLevel", 1881, v2);
      goto LABEL_20;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned __int64)(unsigned int)i >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v5 = pow(10.0, *(float *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)i + 4) / 20.0);
      v3[i] = v5;
    }
    v11 = 50000LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, _QWORD, int, __int64 *))(**((_QWORD **)this + 30) + 32LL))(
           *((_QWORD *)this + 30),
           *((unsigned int *)this + 29),
           v3,
           0LL,
           1,
           &v11);
    v2 = v6;
    if ( v6 == -2147417848 || v6 == -2147023174 )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 240));
      v2 = 0;
    }
    free(v3);
    Block = 0LL;
    if ( v2 < 0 )
      goto LABEL_13;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x36u,
      (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
      this);
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
LABEL_20:
  if ( v9 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
  return (unsigned int)v2;
}
