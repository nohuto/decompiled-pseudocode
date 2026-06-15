/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800A4AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     pow @ 0x18006188A (pow.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800A1DE4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVolumeSoftware::UpdateMasterVolumeLevel(CVolumeSoftware *this)
{
  int v2; // edi
  float *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  float v6; // xmm1_4
  int v7; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-18h] BYREF
  char v10; // [rsp+50h] [rbp-10h]
  void *Block; // [rsp+90h] [rbp+30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 256);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 31) )
  {
    Block = 0LL;
    ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, *((unsigned int *)this + 31));
    v3 = (float *)Block;
    if ( !Block )
    {
      v2 = -2147024882;
      free(0LL);
      Block = 0LL;
LABEL_11:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::UpdateMasterVolumeLevel", 2049, v2);
      goto LABEL_19;
    }
    v4 = 0LL;
    v5 = *((unsigned int *)this + 31);
    if ( (_DWORD)v5 )
    {
      do
      {
        if ( (unsigned __int64)(unsigned int)v4 >= *((_QWORD *)this + 12) )
          ATL::AtlThrowImpl(-2147024809);
        v6 = pow(10.0, *(float *)(*((_QWORD *)this + 11) + 56LL * (unsigned int)v4 + 4) / 20.0);
        v3[v4] = v6;
        v4 = (unsigned int)(v4 + 1);
        v5 = *((unsigned int *)this + 31);
      }
      while ( (unsigned int)v4 < (unsigned int)v5 );
    }
    v12 = 50000LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, float *, _QWORD, int, __int64 *))(**((_QWORD **)this + 31) + 32LL))(
           *((_QWORD *)this + 31),
           v5,
           v3,
           0LL,
           1,
           &v12);
    v2 = v7;
    if ( v7 == -2147417848 || v7 == -2147023174 )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 248));
      v2 = 0;
    }
    free(v3);
    Block = 0LL;
    if ( v2 < 0 )
      goto LABEL_11;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, this);
  }
  *((_BYTE *)this + 300) = 1;
  Block = (void *)-10000000LL;
  if ( ThreadPool )
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, void **, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 38),
      &Block,
      0LL,
      0);
LABEL_19:
  if ( v10 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v10 = 0;
  }
  return (unsigned int)v2;
}
