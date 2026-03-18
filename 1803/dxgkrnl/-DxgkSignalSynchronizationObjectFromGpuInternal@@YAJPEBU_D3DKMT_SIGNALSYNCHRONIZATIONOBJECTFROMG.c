/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00D11E0
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C00D11C0 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C01101F0 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00D1544 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00D159C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2,
        __int64 a3)
{
  void **v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rbx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID v15; // rcx
  size_t v16; // r8
  const void *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-C0h]
  unsigned int v35; // [rsp+70h] [rbp-B8h] BYREF
  struct DXGPROCESS *v36; // [rsp+78h] [rbp-B0h]
  void **v37; // [rsp+80h] [rbp-A8h]
  void *Src[2]; // [rsp+90h] [rbp-98h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-88h]
  __int128 v40; // [rsp+B0h] [rbp-78h]
  __int128 v41; // [rsp+C0h] [rbp-68h]
  __int128 v42; // [rsp+D0h] [rbp-58h]
  PVOID P; // [rsp+E0h] [rbp-48h] BYREF
  char v44; // [rsp+E8h] [rbp-40h] BYREF
  unsigned int v45; // [rsp+F8h] [rbp-30h]

  v4 = (void **)a1;
  v34 = 0LL;
  v33 = 2190;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2190);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2190);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v24 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v10 = *v24;
      }
    }
  }
  v36 = v10;
  if ( !v10 )
  {
    v25 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v25 + 24) = PsGetCurrentProcess(v27, v26);
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v33);
    return 3221225485LL;
  }
  P = 0LL;
  v45 = 0;
  if ( !a2 )
  {
    if ( *((_DWORD *)v4 + 1) )
    {
LABEL_7:
      v35 = *(_DWORD *)v4;
      v11 = SignalSynchronizationObjectInternal(
              *((_DWORD *)v4 + 1),
              (const unsigned int *)v4[1],
              0,
              1u,
              &v35,
              (const unsigned __int64 *)v4[2],
              0LL,
              0LL,
              v10,
              a2 != 0,
              0);
      if ( v11 < 0 )
      {
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v31, &EventProfilerExit, v32, v33);
        return (unsigned int)v11;
      }
      else
      {
        if ( P != &v44 && P )
          ExFreePoolWithTag(P, 0);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v12, &EventProfilerExit, v13, v33);
        return 0LL;
      }
    }
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = *(unsigned int *)v4;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
    goto LABEL_36;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v4;
  v39 = *((_OWORD *)v4 + 1);
  v40 = *((_OWORD *)v4 + 2);
  v41 = *((_OWORD *)v4 + 3);
  v42 = *((_OWORD *)v4 + 4);
  if ( HIDWORD(Src[0]) )
  {
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P);
    v15 = P;
    if ( P )
    {
      v16 = 4LL * v45;
      v17 = Src[1];
      if ( (char *)Src[1] + v16 < Src[1] || (char *)Src[1] + v16 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, v17, v16);
      Src[1] = P;
      v4 = Src;
      v37 = Src;
      goto LABEL_7;
    }
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v33);
    return 3221225495LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v18 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&P);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v33);
    return 3221225485LL;
  }
}
