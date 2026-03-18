/*
 * XREFs of ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00F04D8
 * Callers:
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00F04C0 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1C01C1CC0 (DxgkSignalSynchronizationObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // r12d
  const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *v10; // r15
  int *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r13
  unsigned int v15; // r12d
  _BYTE *PoolWithTag; // rbx
  unsigned int *v17; // rbx
  int v18; // ebx
  __int64 v19; // r8
  PVOID v20; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  int *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  int v37; // [rsp+60h] [rbp-258h]
  int v38; // [rsp+70h] [rbp-248h] BYREF
  unsigned int v39; // [rsp+74h] [rbp-244h]
  unsigned int v40[33]; // [rsp+78h] [rbp-240h] BYREF
  unsigned int v41; // [rsp+FCh] [rbp-1BCh]
  _BYTE Src[256]; // [rsp+100h] [rbp-1B8h] BYREF
  void *v43; // [rsp+200h] [rbp-B8h] BYREF
  PVOID P; // [rsp+240h] [rbp-78h] BYREF
  _BYTE v45[64]; // [rsp+248h] [rbp-70h] BYREF
  int v46; // [rsp+288h] [rbp-30h]

  v3 = a2;
  v37 = a2;
  v4 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2044);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v23 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v10 = *v23;
      }
    }
  }
  if ( v10 )
  {
    if ( !v3 )
    {
      v11 = &v38;
      v12 = 3LL;
      do
      {
        *(_OWORD *)v11 = *(_OWORD *)&v4->hContext;
        *((_OWORD *)v11 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
        *((_OWORD *)v11 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
        *((_OWORD *)v11 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
        *((_OWORD *)v11 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
        *((_OWORD *)v11 + 5) = *(_OWORD *)&v4->ObjectHandleArray[18];
        *((_OWORD *)v11 + 6) = *(_OWORD *)&v4->ObjectHandleArray[22];
        v11 += 32;
        *((_OWORD *)v11 - 1) = *(_OWORD *)&v4->ObjectHandleArray[26];
        v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *)((char *)v4 + 128);
        --v12;
      }
      while ( v12 );
      *(_OWORD *)v11 = *(_OWORD *)&v4->hContext;
      *((_OWORD *)v11 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
      *((_OWORD *)v11 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
      *((_OWORD *)v11 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
      *((_OWORD *)v11 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
      LODWORD(v13) = v41;
      LODWORD(v14) = v39;
LABEL_9:
      P = 0LL;
      v46 = 0;
      v15 = v13 + 1;
      if ( (unsigned int)(v13 + 1) > 0x10 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v15 < 4 )
        {
LABEL_38:
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v34, &EventProfilerExit, v35, 2044);
          return 3221225495LL;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v15, 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = v45;
        P = v45;
      }
      v46 = v13 + 1;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4LL * v15);
        v17 = (unsigned int *)P;
        if ( P )
        {
          *(_DWORD *)P = v38;
          if ( (_DWORD)v13 )
            memmove(v17 + 1, Src, 4LL * (unsigned int)v13);
          v18 = SignalSynchronizationObjectInternal(
                  (unsigned int)v14,
                  v40,
                  (struct _D3DDDICB_SIGNALFLAGS)v40[32],
                  v15,
                  v17,
                  0LL,
                  (unsigned __int64)v43,
                  &v43,
                  v10,
                  v37 != 0,
                  0);
          if ( v18 < 0 )
          {
            PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(qword_1C005F010, &EventProfilerExit, v36, 2044);
            return (unsigned int)v18;
          }
          else
          {
            v20 = P;
            if ( P != v45 && P )
              ExFreePoolWithTag(P, 0);
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q((__int64)v20, &EventProfilerExit, v19, 2044);
            return 0LL;
          }
        }
      }
      goto LABEL_38;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v31 = &v38;
    v32 = 3LL;
    do
    {
      *(_OWORD *)v31 = *(_OWORD *)&v4->hContext;
      *((_OWORD *)v31 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
      *((_OWORD *)v31 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
      *((_OWORD *)v31 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
      *((_OWORD *)v31 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
      *((_OWORD *)v31 + 5) = *(_OWORD *)&v4->ObjectHandleArray[18];
      *((_OWORD *)v31 + 6) = *(_OWORD *)&v4->ObjectHandleArray[22];
      v31 += 32;
      *((_OWORD *)v31 - 1) = *(_OWORD *)&v4->ObjectHandleArray[26];
      v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *)((char *)v4 + 128);
      --v32;
    }
    while ( v32 );
    *(_OWORD *)v31 = *(_OWORD *)&v4->hContext;
    *((_OWORD *)v31 + 1) = *(_OWORD *)&v4->ObjectHandleArray[2];
    *((_OWORD *)v31 + 2) = *(_OWORD *)&v4->ObjectHandleArray[6];
    *((_OWORD *)v31 + 3) = *(_OWORD *)&v4->ObjectHandleArray[10];
    *((_OWORD *)v31 + 4) = *(_OWORD *)&v4->ObjectHandleArray[14];
    v13 = v41;
    if ( v41 <= 0x40 )
    {
      v14 = v39;
      if ( v39 <= 0x20 )
        goto LABEL_9;
      v30 = WdLogNewEntry5_WdError(128LL);
      *(_QWORD *)(v30 + 24) = v14;
      WdLogEvent5_WdError(v30);
      v29 = (qword_1C005F010 & 2) == 0;
    }
    else
    {
      v33 = WdLogNewEntry5_WdWarning(128LL, 0LL, v9);
      *(_QWORD *)(v33 + 24) = v13;
      WdLogEvent5_WdWarning(v33);
      v29 = (qword_1C005F010 & 2) == 0;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v24 + 24) = PsGetCurrentProcess(v26, v25);
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    v28 = qword_1C005F010;
    v29 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v27, 2044);
  return 3221225485LL;
}
