/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K@Z @ 0x1C00E8F90
 * Callers:
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C00E8F50 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C00E8F70 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A4D0 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C00E9300 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        _BOOL8 a2,
        __int64 a3,
        const unsigned __int64 *a4)
{
  bool v5; // r12
  bool v6; // r15
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v7; // rbx
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *v12; // rsi
  unsigned int v13; // edi
  _BYTE *PoolWithTag; // rbx
  unsigned int *ObjectHandleArray; // rbx
  size_t v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // ebx
  __int64 v24; // r8
  PVOID v25; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __m128i Src; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v36[2]; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v38[16]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v39; // [rsp+C8h] [rbp-40h]

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2043);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v27 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v12 = *v27;
      }
    }
  }
  if ( v12 )
  {
    P = 0LL;
    v39 = 0;
    if ( !v6 )
    {
      Src = *(__m128i *)&v7->hContext;
      *(_OWORD *)v36 = *(_OWORD *)&v7->MonitoredFenceValueArray;
      ObjectHandleArray = (unsigned int *)v7->ObjectHandleArray;
LABEL_28:
      if ( !a4 )
        a4 = (const unsigned __int64 *)v36[0];
      v23 = WaitForSynchronizationObjectFromGpu(
              Src.m128i_u32[1],
              ObjectHandleArray,
              a4,
              v36[0],
              Src.m128i_u32[0],
              v12,
              v6,
              0,
              v5);
      if ( v23 < 0 )
      {
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v33, &EventProfilerExit, v34, 2043);
        return (unsigned int)v23;
      }
      else
      {
        v25 = P;
        if ( P != v38 && P )
          ExFreePoolWithTag(P, 0);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q((__int64)v25, &EventProfilerExit, v24, 2043);
        return 0LL;
      }
    }
    if ( (unsigned __int64)v7 >= MmUserProbeAddress )
      v7 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    Src = *(__m128i *)&v7->hContext;
    *(_OWORD *)v36 = *(_OWORD *)&v7->MonitoredFenceValueArray;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v7->hContext, 4));
    if ( v13 )
    {
      if ( v13 > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 4 )
        {
LABEL_22:
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v21, &EventProfilerExit, v22, 2043);
          return 3221225495LL;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v13, 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = v38;
        P = v38;
      }
      v39 = v13;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4LL * v13);
        ObjectHandleArray = (unsigned int *)P;
        if ( P )
        {
          v16 = 4LL * v39;
          if ( v16 + Src.m128i_i64[1] < Src.m128i_i64[1] || v16 + Src.m128i_i64[1] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(ObjectHandleArray, (const void *)Src.m128i_i64[1], v16);
          goto LABEL_28;
        }
      }
      goto LABEL_22;
    }
    v17 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v17 + 24) = Src.m128i_u32[0];
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, 2043);
    return 3221225485LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v28 + 24) = PsGetCurrentProcess(v30, v29);
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v31, &EventProfilerExit, v32, 2043);
    return 3221225485LL;
  }
}
