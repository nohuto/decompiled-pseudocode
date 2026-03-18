/*
 * XREFs of ?DxgkSignalSynchronizationObjectInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C009B9D0
 * Callers:
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C009B9C0 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1C01A7F40 (DxgkSignalSynchronizationObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  ULONG64 v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *v12; // r14
  int *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  unsigned int v16; // r15d
  _BYTE *PoolWithTag; // r9
  const unsigned int *v18; // r9
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // r8
  PVOID v22; // rcx
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rax
  int *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // [rsp+70h] [rbp-248h] BYREF
  unsigned int v38; // [rsp+74h] [rbp-244h]
  unsigned int v39[33]; // [rsp+78h] [rbp-240h] BYREF
  unsigned int v40; // [rsp+FCh] [rbp-1BCh]
  _DWORD v41[64]; // [rsp+100h] [rbp-1B8h]
  void *v42; // [rsp+200h] [rbp-B8h] BYREF
  PVOID P; // [rsp+240h] [rbp-78h] BYREF
  _BYTE v44[64]; // [rsp+248h] [rbp-70h] BYREF
  int v45; // [rsp+288h] [rbp-30h]

  v4 = (ULONG64)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2044);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v12 = *ThreadProperty;
    }
  }
  if ( v12 )
  {
    if ( !a2 )
    {
      v13 = &v37;
      v14 = 3LL;
      do
      {
        *(_OWORD *)v13 = *(_OWORD *)v4;
        *((_OWORD *)v13 + 1) = *(_OWORD *)(v4 + 16);
        *((_OWORD *)v13 + 2) = *(_OWORD *)(v4 + 32);
        *((_OWORD *)v13 + 3) = *(_OWORD *)(v4 + 48);
        *((_OWORD *)v13 + 4) = *(_OWORD *)(v4 + 64);
        *((_OWORD *)v13 + 5) = *(_OWORD *)(v4 + 80);
        *((_OWORD *)v13 + 6) = *(_OWORD *)(v4 + 96);
        v13 += 32;
        *((_OWORD *)v13 - 1) = *(_OWORD *)(v4 + 112);
        v4 += 128LL;
        --v14;
      }
      while ( v14 );
      *(_OWORD *)v13 = *(_OWORD *)v4;
      *((_OWORD *)v13 + 1) = *(_OWORD *)(v4 + 16);
      *((_OWORD *)v13 + 2) = *(_OWORD *)(v4 + 32);
      *((_OWORD *)v13 + 3) = *(_OWORD *)(v4 + 48);
      *((_OWORD *)v13 + 4) = *(_OWORD *)(v4 + 64);
      LODWORD(v4) = v40;
      LODWORD(v15) = v38;
LABEL_9:
      P = 0LL;
      v45 = 0;
      v16 = v4 + 1;
      if ( (unsigned int)(v4 + 1) > 0x10 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v16 < 4 )
        {
LABEL_38:
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v33, &EventProfilerExit, v34, 2044);
          return 3221225495LL;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v16, 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = v44;
        P = v44;
      }
      v45 = v4 + 1;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4LL * v16);
        v18 = (const unsigned int *)P;
        if ( P )
        {
          *(_DWORD *)P = v37;
          v19 = 0LL;
          if ( (_DWORD)v4 )
          {
            do
            {
              v35 = (unsigned int)(v19 + 1);
              v18[v35] = v41[v19];
              v19 = v35;
            }
            while ( (unsigned int)v35 < (unsigned int)v4 );
          }
          v20 = SignalSynchronizationObjectInternal(
                  v15,
                  v39,
                  (struct _D3DDDICB_SIGNALFLAGS)v39[32],
                  v16,
                  v18,
                  0LL,
                  (unsigned __int64)v42,
                  &v42,
                  v12,
                  a2 != 0,
                  0);
          if ( v20 < 0 )
          {
            PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(qword_1C006E790, &EventProfilerExit, v36, 2044);
            return (unsigned int)v20;
          }
          else
          {
            v22 = P;
            if ( P != v44 && P )
              ExFreePoolWithTag(P, 0);
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q((__int64)v22, &EventProfilerExit, v21, 2044);
            return 0LL;
          }
        }
      }
      goto LABEL_38;
    }
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v30 = &v37;
    v31 = 3LL;
    do
    {
      *(_OWORD *)v30 = *(_OWORD *)v4;
      *((_OWORD *)v30 + 1) = *(_OWORD *)(v4 + 16);
      *((_OWORD *)v30 + 2) = *(_OWORD *)(v4 + 32);
      *((_OWORD *)v30 + 3) = *(_OWORD *)(v4 + 48);
      *((_OWORD *)v30 + 4) = *(_OWORD *)(v4 + 64);
      *((_OWORD *)v30 + 5) = *(_OWORD *)(v4 + 80);
      *((_OWORD *)v30 + 6) = *(_OWORD *)(v4 + 96);
      v30 += 32;
      *((_OWORD *)v30 - 1) = *(_OWORD *)(v4 + 112);
      v4 += 128LL;
      --v31;
    }
    while ( v31 );
    *(_OWORD *)v30 = *(_OWORD *)v4;
    *((_OWORD *)v30 + 1) = *(_OWORD *)(v4 + 16);
    *((_OWORD *)v30 + 2) = *(_OWORD *)(v4 + 32);
    *((_OWORD *)v30 + 3) = *(_OWORD *)(v4 + 48);
    *((_OWORD *)v30 + 4) = *(_OWORD *)(v4 + 64);
    v4 = v40;
    if ( v40 > 0x40 )
    {
      v29 = WdLogNewEntry5_WdWarning(128LL, 0LL, v10, v11);
      *(_QWORD *)(v29 + 24) = v4;
      WdLogEvent5_WdWarning(v29);
    }
    else
    {
      v15 = v38;
      if ( v38 <= 0x20 )
        goto LABEL_9;
      v32 = WdLogNewEntry5_WdError(128LL, 0LL);
      *(_QWORD *)(v32 + 24) = v15;
      WdLogEvent5_WdError(v32);
    }
    v28 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v25 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    v27 = qword_1C006E790;
    v28 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v27, &EventProfilerExit, v26, 2044);
  return 3221225485LL;
}
