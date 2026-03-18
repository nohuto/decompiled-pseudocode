/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00FBCF0
 * Callers:
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C00D6F30 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C00FBCC0 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01872F0 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00D159C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00FC0D0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        bool a2,
        __int64 a3,
        const unsigned __int64 *a4,
        bool a5)
{
  bool v6; // r12
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rcx
  struct DXGPROCESS *v14; // rsi
  unsigned int v15; // edi
  _BYTE *PoolWithTag; // rbx
  unsigned int *v17; // rbx
  size_t v18; // r8
  const void *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-C0h]
  struct DXGPROCESS *v40; // [rsp+60h] [rbp-B8h]
  void *Src[2]; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v42[2]; // [rsp+80h] [rbp-98h]
  __int128 v43; // [rsp+90h] [rbp-88h]
  __int128 v44; // [rsp+A0h] [rbp-78h]
  __int128 v45; // [rsp+B0h] [rbp-68h]
  PVOID P; // [rsp+C0h] [rbp-58h] BYREF
  _BYTE v47[16]; // [rsp+C8h] [rbp-50h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp-40h]

  v6 = a3;
  v8 = a1;
  v39 = 0LL;
  v38 = 2043;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2043);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2043);
  CurrentProcess = PsGetCurrentProcess(v10, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v30 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v14 = *v30;
      }
    }
  }
  v40 = v14;
  if ( v14 )
  {
    P = 0LL;
    v48 = 0;
    if ( !a2 )
    {
      *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
      *(_OWORD *)v42 = *(_OWORD *)&v8->MonitoredFenceValueArray;
      v17 = (unsigned int *)Src[1];
LABEL_28:
      if ( !a4 )
        a4 = (const unsigned __int64 *)v42[0];
      v26 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(Src[0]),
              v17,
              a4,
              v42[0],
              (unsigned int)Src[0],
              v14,
              a2,
              0,
              v6,
              a5);
      if ( v26 < 0 )
      {
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v36, &EventProfilerExit, v37, v38);
        return (unsigned int)v26;
      }
      else
      {
        if ( P != v47 && P )
          ExFreePoolWithTag(P, 0);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v27, &EventProfilerExit, v28, v38);
        return 0LL;
      }
    }
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
    *(_OWORD *)v42 = *(_OWORD *)&v8->MonitoredFenceValueArray;
    v43 = *(_OWORD *)&v8->Reserved[2];
    v44 = *(_OWORD *)&v8->Reserved[4];
    v45 = *(_OWORD *)&v8->Reserved[6];
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 4));
    if ( v15 )
    {
      if ( v15 > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v15 < 4 )
        {
LABEL_22:
          PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v24, &EventProfilerExit, v25, v38);
          return 3221225495LL;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v15, 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = v47;
        P = v47;
      }
      v48 = v15;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4LL * v15);
        v17 = (unsigned int *)P;
        if ( P )
        {
          v18 = 4LL * v48;
          v19 = Src[1];
          if ( (char *)Src[1] + v18 < Src[1] || (char *)Src[1] + v18 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v17, v19, v18);
          Src[1] = v17;
          goto LABEL_28;
        }
      }
      goto LABEL_22;
    }
    v20 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v20 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v38);
    return 3221225485LL;
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v31 + 24) = PsGetCurrentProcess(v33, v32);
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v34, &EventProfilerExit, v35, v38);
    return 3221225485LL;
  }
}
