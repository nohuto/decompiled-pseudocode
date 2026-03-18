/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00F40D0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C00D159C (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // r14
  ULONG64 v10; // rcx
  unsigned int v11; // r15d
  _BYTE *PoolWithTag; // rdi
  PVOID v13; // rdi
  size_t v14; // r8
  const void *v15; // rdx
  __int64 Value; // rsi
  _BYTE *v17; // rbx
  PVOID v18; // rbx
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // [rsp+60h] [rbp-118h] BYREF
  __int64 v42; // [rsp+68h] [rbp-110h]
  struct DXGPROCESS *v43; // [rsp+70h] [rbp-108h]
  void *Src[2]; // [rsp+80h] [rbp-F8h]
  struct _D3DDDICB_SIGNALFLAGS v45[4]; // [rsp+90h] [rbp-E8h]
  void *v46[2]; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-C8h]
  __int128 v48; // [rsp+C0h] [rbp-B8h]
  __int128 v49; // [rsp+D0h] [rbp-A8h]
  PVOID v50; // [rsp+E0h] [rbp-98h] BYREF
  _BYTE v51[16]; // [rsp+E8h] [rbp-90h] BYREF
  unsigned int v52; // [rsp+F8h] [rbp-80h]
  PVOID P; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v54[64]; // [rsp+108h] [rbp-70h] BYREF
  unsigned int v55; // [rsp+148h] [rbp-30h]

  v3 = (_OWORD *)a1;
  v42 = 0LL;
  v41 = 2191;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2191);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2191);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v33 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v33;
      }
    }
  }
  v43 = v9;
  if ( !v9 )
  {
    v34 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v34 + 24) = PsGetCurrentProcess(v36, v35);
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v37, &EventProfilerExit, v38, v41);
    return 3221225485LL;
  }
  v50 = 0LL;
  v52 = 0;
  P = 0LL;
  v55 = 0;
  v10 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Src = *v3;
  *(_OWORD *)&v45[0].0 = v3[1];
  *(_OWORD *)v46 = v3[2];
  v47 = v3[3];
  v48 = v3[4];
  v49 = v3[5];
  v11 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( v11 )
  {
    if ( v11 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 4 )
        goto LABEL_26;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v11, 0x4B677844u);
      v50 = PoolWithTag;
    }
    else
    {
      PoolWithTag = v51;
      v50 = v51;
    }
    v52 = v11;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v11);
      v13 = v50;
      if ( v50 )
      {
        v14 = 4LL * v52;
        v15 = Src[1];
        if ( (char *)Src[1] + v14 < Src[1] || (char *)Src[1] + v14 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, v15, v14);
        Src[1] = v13;
        goto LABEL_15;
      }
    }
LABEL_26:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v41);
    return 3221225495LL;
  }
  v13 = Src[1];
LABEL_15:
  Value = v45[1].Value;
  if ( v45[1].Value )
  {
    if ( v45[1].Value > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v45[1].Value < 4 )
      {
LABEL_37:
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&v50);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v27, &EventProfilerExit, v28, v41);
        return 3221225495LL;
      }
      v17 = ExAllocatePoolWithTag(PagedPool, 4LL * v45[1].Value, 0x4B677844u);
      P = v17;
    }
    else
    {
      v17 = v54;
      P = v54;
    }
    v55 = Value;
    if ( v17 )
    {
      memset(v17, 0, 4 * Value);
      v18 = P;
      if ( P )
      {
        v19 = 4LL * v55;
        v20 = *(const void **)&v45[2].0;
        if ( v19 + *(_QWORD *)&v45[2].0 < *(_QWORD *)&v45[2].0 || v19 + *(_QWORD *)&v45[2].0 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v18, v20, v19);
        *(_QWORD *)&v45[2].0 = v18;
        v29 = SignalSynchronizationObjectInternal(
                v11,
                (const unsigned int *)v13,
                v45[0],
                Value,
                (const unsigned int *)v18,
                (const unsigned __int64 *)v46[0],
                (unsigned __int64)v46[0],
                v46,
                v9,
                1,
                0);
        if ( v29 < 0 )
        {
          PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
          PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&v50);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v39, &EventProfilerExit, v40, v41);
          return (unsigned int)v29;
        }
        else
        {
          if ( P != v54 && P )
            ExFreePoolWithTag(P, 0);
          if ( v50 != v51 && v50 )
            ExFreePoolWithTag(v50, 0);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v30, &EventProfilerExit, v31, v41);
          return 0LL;
        }
      }
    }
    goto LABEL_37;
  }
  v24 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v24 + 24) = 893LL;
  WdLogEvent5_WdError(v24);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
  PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>(&v50);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v41);
  return 3221225485LL;
}
