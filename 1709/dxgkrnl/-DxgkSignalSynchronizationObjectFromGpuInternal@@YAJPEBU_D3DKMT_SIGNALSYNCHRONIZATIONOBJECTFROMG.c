/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C00EFF88
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C00EFF70 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C01C2430 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C00CFCFC (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        __int64 a2)
{
  int v2; // r14d
  void **v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rdi
  int v9; // eax
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rax
  PVOID v18; // rcx
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGPROCESS *v23; // [rsp+68h] [rbp-A0h]
  PVOID v24; // [rsp+70h] [rbp-98h]
  void **v25; // [rsp+78h] [rbp-90h]
  void *Src[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v27; // [rsp+90h] [rbp-78h]
  __int128 v28; // [rsp+A0h] [rbp-68h]
  __int128 v29; // [rsp+B0h] [rbp-58h]
  __int128 v30; // [rsp+C0h] [rbp-48h]
  PVOID P; // [rsp+D0h] [rbp-38h] BYREF
  char v32; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v33; // [rsp+E8h] [rbp-20h]

  v2 = a2;
  v3 = (void **)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v12 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v8 = *v12;
      }
    }
  }
  v23 = v8;
  if ( !v8 )
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14);
    v16 = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return v16;
  }
  P = 0LL;
  v33 = 0;
  if ( v2 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (void **)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)v3;
    v27 = *((_OWORD *)v3 + 1);
    v28 = *((_OWORD *)v3 + 2);
    v29 = *((_OWORD *)v3 + 3);
    v30 = *((_OWORD *)v3 + 4);
    if ( !HIDWORD(Src[0]) )
    {
      v17 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v17 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v17 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v17);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
      return 3221225485LL;
    }
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, HIDWORD(Src[0]));
    v18 = P;
    if ( !P )
    {
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
      return 3221225495LL;
    }
    v24 = P;
    v19 = 4LL * v33;
    v20 = Src[1];
    if ( (char *)Src[1] + v19 < Src[1] || (char *)Src[1] + v19 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v18, v20, v19);
    Src[1] = P;
    v3 = Src;
    v25 = Src;
  }
  else if ( !*((_DWORD *)v3 + 1) )
  {
    v21 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v21 + 24) = *(unsigned int *)v3;
    v16 = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_15;
  }
  v22 = *(_DWORD *)v3;
  v9 = SignalSynchronizationObjectInternal(
         *((unsigned int *)v3 + 1),
         (unsigned int *)v3[1],
         0,
         1u,
         &v22,
         (unsigned __int64 *)v3[2],
         0LL,
         0LL,
         v8,
         v2 != 0,
         0);
  if ( v9 < 0 )
  {
    v16 = v9;
LABEL_15:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
    return v16;
  }
  if ( P != &v32 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
