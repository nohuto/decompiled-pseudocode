/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C008A560
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  unsigned __int64 v7; // rdx
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // r8
  PVOID v33; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  void *Src[2]; // [rsp+70h] [rbp-F8h]
  struct _D3DDDICB_SIGNALFLAGS v43[4]; // [rsp+80h] [rbp-E8h]
  void *v44[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-C8h]
  __int128 v46; // [rsp+B0h] [rbp-B8h]
  __int128 v47; // [rsp+C0h] [rbp-A8h]
  PVOID v48; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v49[16]; // [rsp+D8h] [rbp-90h] BYREF
  unsigned int v50; // [rsp+E8h] [rbp-80h]
  PVOID P; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v52[64]; // [rsp+F8h] [rbp-70h] BYREF
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // [rsp+138h] [rbp-30h]

  v3 = (_OWORD *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2044);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v35 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v35;
      }
    }
  }
  if ( !v9 )
  {
    v36 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v36 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v37, &EventProfilerExit, v38, 2044);
    return 3221225485LL;
  }
  v48 = 0LL;
  v50 = 0;
  P = 0LL;
  Value = 0;
  v10 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Src = *v3;
  *(_OWORD *)&v43[0].0 = v3[1];
  *(_OWORD *)v44 = v3[2];
  v45 = v3[3];
  v46 = v3[4];
  v47 = v3[5];
  v11 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( v11 )
  {
    if ( v11 > 4 )
    {
      v7 = 0xFFFFFFFFFFFFFFFFuLL % v11;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v11 < 4 )
        goto LABEL_26;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v11, 0x4B677844u);
      v48 = PoolWithTag;
    }
    else
    {
      PoolWithTag = v49;
      v48 = v49;
    }
    v50 = v11;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v11);
      v13 = v48;
      if ( v48 )
      {
        v14 = 4LL * v50;
        if ( (char *)Src[1] + v14 < Src[1] || (char *)Src[1] + v14 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, Src[1], v14);
        goto LABEL_15;
      }
    }
LABEL_26:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v7);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v48, v18);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, 2044);
    return 3221225495LL;
  }
  v13 = Src[1];
LABEL_15:
  if ( v43[1].Value )
  {
    if ( v43[1].Value > 0x10 )
    {
      v7 = 0xFFFFFFFFFFFFFFFFuLL % v43[1].Value;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v43[1].Value < 4 )
      {
LABEL_37:
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v7);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v48, v27);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v28, &EventProfilerExit, v29, 2044);
        return 3221225495LL;
      }
      v15 = ExAllocatePoolWithTag(PagedPool, 4LL * v43[1].Value, 0x4B677844u);
      P = v15;
    }
    else
    {
      v15 = v52;
      P = v52;
    }
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)v43[1].Value;
    if ( v15 )
    {
      memset(v15, 0, 4LL * v43[1].Value);
      v16 = P;
      if ( P )
      {
        v17 = 4LL * *(unsigned int *)&Value;
        if ( v17 + *(_QWORD *)&v43[2].0 < *(_QWORD *)&v43[2].0 || v17 + *(_QWORD *)&v43[2].0 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, *(const void **)&v43[2].0, v17);
        v31 = SignalSynchronizationObjectInternal(
                v11,
                (unsigned int *)v13,
                v43[0],
                v43[1].Value,
                (unsigned int *)v16,
                (unsigned __int64 *)v44[0],
                (unsigned __int64)v44[0],
                v44,
                v9,
                1,
                0);
        if ( v31 < 0 )
        {
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v30);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v48, v39);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v40, &EventProfilerExit, v41, 2044);
          return (unsigned int)v31;
        }
        else
        {
          if ( P != v52 && P )
            ExFreePoolWithTag(P, 0);
          v33 = v48;
          if ( v48 != v49 && v48 )
            ExFreePoolWithTag(v48, 0);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q((__int64)v33, &EventProfilerExit, v32, 2044);
          return 0LL;
        }
      }
    }
    goto LABEL_37;
  }
  v22 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v22 + 24) = 818LL;
  WdLogEvent5_WdError(v22);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v23);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v48, v24);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, 2044);
  return 3221225485LL;
}
