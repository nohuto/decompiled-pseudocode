/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C009B7A0
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C009B790 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C01A85B0 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C008D60C (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C008D658 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rdi
  int v10; // eax
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rax
  PVOID v16; // rcx
  size_t v17; // r8
  const void *v18; // rdx
  __int64 v19; // rax
  unsigned int hContext; // [rsp+60h] [rbp-B8h] BYREF
  struct DXGPROCESS *v21; // [rsp+68h] [rbp-B0h]
  void **v22; // [rsp+70h] [rbp-A8h]
  PVOID v23; // [rsp+78h] [rbp-A0h]
  PVOID v24; // [rsp+80h] [rbp-98h]
  void *Src[2]; // [rsp+90h] [rbp-88h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-78h]
  __int128 v27; // [rsp+B0h] [rbp-68h]
  __int128 v28; // [rsp+C0h] [rbp-58h]
  __int128 v29; // [rsp+D0h] [rbp-48h]
  PVOID P; // [rsp+E0h] [rbp-38h] BYREF
  char v31; // [rsp+E8h] [rbp-30h] BYREF
  unsigned int v32; // [rsp+F8h] [rbp-20h]

  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v9 = *ThreadProperty;
    }
  }
  v21 = v9;
  if ( !v9 )
  {
    v13 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess();
    v14 = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return v14;
  }
  P = 0LL;
  v32 = 0;
  v22 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)&a1->hContext;
    v26 = *(_OWORD *)&a1->MonitoredFenceValueArray;
    v27 = *(_OWORD *)&a1->Reserved[2];
    v28 = *(_OWORD *)&a1->Reserved[4];
    v29 = *(_OWORD *)&a1->Reserved[6];
    if ( !HIDWORD(Src[0]) )
    {
      v15 = WdLogNewEntry5_WdError(v8, 0LL);
      *(_QWORD *)(v15 + 24) = LODWORD(Src[0]);
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v15);
      PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&P);
      return 3221225485LL;
    }
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, HIDWORD(Src[0]));
    v16 = P;
    v23 = P;
    if ( !P )
    {
      PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&P);
      return 3221225495LL;
    }
    v24 = P;
    v17 = 4LL * v32;
    v18 = Src[1];
    if ( (char *)Src[1] + v17 < Src[1] || (char *)Src[1] + v17 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v16, v18, v17);
    Src[1] = P;
    a1 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *)Src;
    v22 = Src;
  }
  else if ( !a1->ObjectCount )
  {
    v19 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v19 + 24) = a1->hContext;
    v14 = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_15;
  }
  hContext = a1->hContext;
  v10 = SignalSynchronizationObjectInternal(
          a1->ObjectCount,
          a1->ObjectHandleArray,
          0,
          1u,
          &hContext,
          a1->MonitoredFenceValueArray,
          0LL,
          0LL,
          v9,
          a2 != 0,
          0);
  if ( v10 < 0 )
  {
    v14 = v10;
LABEL_15:
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&P);
    return v14;
  }
  if ( P != &v31 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
