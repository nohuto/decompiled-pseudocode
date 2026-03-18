/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K@Z @ 0x1C008D830
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpu@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00338C0 (-VmBusWaitForSyncObjectFromGpu@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C008AD20 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C008D810 (DxgkWaitForSynchronizationObjectFromGpu.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C008D658 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        bool a2,
        __int64 a3,
        const unsigned __int64 *a4)
{
  bool v5; // r12
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v7; // rbx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rsi
  unsigned int v14; // edi
  _BYTE *PoolWithTag; // rbx
  unsigned int *ObjectHandleArray; // rbx
  size_t v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // ebx
  __int64 v25; // r8
  PVOID v26; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __m128i Src; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v34[2]; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v36[16]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v37; // [rsp+C8h] [rbp-40h]

  v5 = a3;
  v7 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2043);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v13 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v13 = *ThreadProperty;
    }
  }
  if ( v13 )
  {
    P = 0LL;
    v37 = 0;
    if ( !a2 )
    {
      Src = *(__m128i *)&v7->hContext;
      *(_OWORD *)v34 = *(_OWORD *)&v7->MonitoredFenceValueArray;
      ObjectHandleArray = (unsigned int *)v7->ObjectHandleArray;
LABEL_28:
      if ( !a4 )
        a4 = (const unsigned __int64 *)v34[0];
      v24 = WaitForSynchronizationObjectFromGpu(
              Src.m128i_u32[1],
              ObjectHandleArray,
              a4,
              v34[0],
              Src.m128i_u32[0],
              v13,
              a2,
              0,
              v5);
      if ( v24 < 0 )
      {
        PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&P);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v31, &EventProfilerExit, v32, 2043);
        return (unsigned int)v24;
      }
      else
      {
        v26 = P;
        if ( P != v36 && P )
          ExFreePoolWithTag(P, 0);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q((__int64)v26, &EventProfilerExit, v25, 2043);
        return 0LL;
      }
    }
    if ( (unsigned __int64)v7 >= MmUserProbeAddress )
      v7 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    Src = *(__m128i *)&v7->hContext;
    *(_OWORD *)v34 = *(_OWORD *)&v7->MonitoredFenceValueArray;
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v7->hContext, 4));
    if ( v14 )
    {
      if ( v14 > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 4 )
        {
LABEL_22:
          PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&P);
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v22, &EventProfilerExit, v23, 2043);
          return 3221225495LL;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v14, 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = v36;
        P = v36;
      }
      v37 = v14;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4LL * v14);
        ObjectHandleArray = (unsigned int *)P;
        if ( P )
        {
          v17 = 4LL * v37;
          if ( v17 + Src.m128i_i64[1] < Src.m128i_i64[1] || v17 + Src.m128i_i64[1] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(ObjectHandleArray, (const void *)Src.m128i_i64[1], v17);
          goto LABEL_28;
        }
      }
      goto LABEL_22;
    }
    v18 = WdLogNewEntry5_WdError(MmUserProbeAddress, v11);
    *(_QWORD *)(v18 + 24) = Src.m128i_u32[0];
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&P);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v19, &EventProfilerExit, v20, 2043);
    return 3221225485LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v28 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v29, &EventProfilerExit, v30, 2043);
    return 3221225485LL;
  }
}
