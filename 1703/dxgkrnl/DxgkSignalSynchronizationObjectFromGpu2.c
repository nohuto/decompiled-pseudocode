/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00D2AD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C008D658 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // r14
  ULONG64 v10; // rcx
  unsigned int v11; // r15d
  _BYTE *PoolWithTag; // rdi
  PVOID v13; // rdi
  size_t v14; // r8
  _BYTE *v15; // rbx
  PVOID v16; // rbx
  size_t v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // ebx
  __int64 v27; // r8
  PVOID v28; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  void *Src[2]; // [rsp+70h] [rbp-F8h]
  struct _D3DDDICB_SIGNALFLAGS v37[4]; // [rsp+80h] [rbp-E8h]
  void *v38[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-C8h]
  __int128 v40; // [rsp+B0h] [rbp-B8h]
  __int128 v41; // [rsp+C0h] [rbp-A8h]
  PVOID v42; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v43[16]; // [rsp+D8h] [rbp-90h] BYREF
  unsigned int v44; // [rsp+E8h] [rbp-80h]
  PVOID P; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v46[64]; // [rsp+F8h] [rbp-70h] BYREF
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // [rsp+138h] [rbp-30h]

  v3 = (_OWORD *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2044);
  CurrentProcess = PsGetCurrentProcess(a1);
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
  if ( !v9 )
  {
    v30 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v30 + 24) = PsGetCurrentProcess(v31);
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v32, &EventProfilerExit, v33, 2044);
    return 3221225485LL;
  }
  v42 = 0LL;
  v44 = 0;
  P = 0LL;
  Value = 0;
  v10 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Src = *v3;
  *(_OWORD *)&v37[0].0 = v3[1];
  *(_OWORD *)v38 = v3[2];
  v39 = v3[3];
  v40 = v3[4];
  v41 = v3[5];
  v11 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( v11 )
  {
    if ( v11 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 4 )
        goto LABEL_26;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v11, 0x4B677844u);
      v42 = PoolWithTag;
    }
    else
    {
      PoolWithTag = v43;
      v42 = v43;
    }
    v44 = v11;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v11);
      v13 = v42;
      if ( v42 )
      {
        v14 = 4LL * v44;
        if ( (char *)Src[1] + v14 < Src[1] || (char *)Src[1] + v14 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, Src[1], v14);
        goto LABEL_15;
      }
    }
LABEL_26:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
    PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&v42);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v18, &EventProfilerExit, v19, 2044);
    return 3221225495LL;
  }
  v13 = Src[1];
LABEL_15:
  if ( v37[1].Value )
  {
    if ( v37[1].Value > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v37[1].Value < 4 )
      {
LABEL_37:
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
        PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&v42);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v24, &EventProfilerExit, v25, 2044);
        return 3221225495LL;
      }
      v15 = ExAllocatePoolWithTag(PagedPool, 4LL * v37[1].Value, 0x4B677844u);
      P = v15;
    }
    else
    {
      v15 = v46;
      P = v46;
    }
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)v37[1].Value;
    if ( v15 )
    {
      memset(v15, 0, 4LL * v37[1].Value);
      v16 = P;
      if ( P )
      {
        v17 = 4LL * *(unsigned int *)&Value;
        if ( v17 + *(_QWORD *)&v37[2].0 < *(_QWORD *)&v37[2].0 || v17 + *(_QWORD *)&v37[2].0 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, *(const void **)&v37[2].0, v17);
        v26 = SignalSynchronizationObjectInternal(
                v11,
                (const unsigned int *)v13,
                v37[0],
                v37[1].Value,
                (const unsigned int *)v16,
                (const unsigned __int64 *)v38[0],
                (unsigned __int64)v38[0],
                v38,
                v9,
                1,
                0);
        if ( v26 < 0 )
        {
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
          PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&v42);
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v34, &EventProfilerExit, v35, 2044);
          return (unsigned int)v26;
        }
        else
        {
          if ( P != v46 && P )
            ExFreePoolWithTag(P, 0);
          v28 = v42;
          if ( v42 != v43 && v42 )
            ExFreePoolWithTag(v42, 0);
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q((__int64)v28, &EventProfilerExit, v27, 2044);
          return 0LL;
        }
      }
    }
    goto LABEL_37;
  }
  v21 = WdLogNewEntry5_WdError(v10, v7);
  *(_QWORD *)(v21 + 24) = 795LL;
  WdLogEvent5_WdError(v21);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(&v42);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 2044);
  return 3221225485LL;
}
