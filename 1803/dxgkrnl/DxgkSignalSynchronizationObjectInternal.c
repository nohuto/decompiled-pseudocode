/*
 * XREFs of DxgkSignalSynchronizationObjectInternal @ 0x1C00D20B8
 * Callers:
 *     ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1C004B1B0 (-AddSignalToContext@CAdapter@@UEAAJII_K@Z.c)
 *     DxgkSignalSynchronizationObject @ 0x1C00D2080 (DxgkSignalSynchronizationObject.c)
 *     ?DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00D20A0 (-DxgkCddSignalSynchronizationObject@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectInternal(__int64 a1, int a2, __int64 a3)
{
  _OWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGPROCESS *v11; // r14
  int *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r12
  unsigned int v16; // r13d
  _DWORD *PoolWithTag; // rbx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  int *v22; // rax
  __int64 v23; // rdx
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  int v37; // [rsp+60h] [rbp-278h] BYREF
  __int64 v38; // [rsp+68h] [rbp-270h]
  int v39; // [rsp+70h] [rbp-268h]
  struct DXGPROCESS *v40; // [rsp+78h] [rbp-260h]
  int v41; // [rsp+80h] [rbp-258h] BYREF
  unsigned int v42; // [rsp+84h] [rbp-254h]
  unsigned int v43[33]; // [rsp+88h] [rbp-250h] BYREF
  unsigned int v44; // [rsp+10Ch] [rbp-1CCh]
  _BYTE Src[256]; // [rsp+110h] [rbp-1C8h] BYREF
  void *v46; // [rsp+210h] [rbp-C8h] BYREF
  PVOID P; // [rsp+250h] [rbp-88h] BYREF
  unsigned int v48[16]; // [rsp+258h] [rbp-80h] BYREF
  int v49; // [rsp+298h] [rbp-40h]

  v39 = a2;
  v4 = (_OWORD *)a1;
  v38 = 0LL;
  v37 = 2044;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2044);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2044);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v25 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v25;
      }
    }
  }
  v40 = v11;
  if ( !v11 )
  {
    v26 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v26 + 24) = PsGetCurrentProcess(v28, v27);
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v33 = (qword_1C0079010 & 2) == 0;
    goto LABEL_34;
  }
  if ( !a2 )
  {
    v12 = &v41;
    v13 = 3LL;
    do
    {
      *(_OWORD *)v12 = *v4;
      *((_OWORD *)v12 + 1) = v4[1];
      *((_OWORD *)v12 + 2) = v4[2];
      *((_OWORD *)v12 + 3) = v4[3];
      *((_OWORD *)v12 + 4) = v4[4];
      *((_OWORD *)v12 + 5) = v4[5];
      *((_OWORD *)v12 + 6) = v4[6];
      v12 += 32;
      *((_OWORD *)v12 - 1) = v4[7];
      v4 += 8;
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v12 = *v4;
    *((_OWORD *)v12 + 1) = v4[1];
    *((_OWORD *)v12 + 2) = v4[2];
    *((_OWORD *)v12 + 3) = v4[3];
    *((_OWORD *)v12 + 4) = v4[4];
    LODWORD(v14) = v44;
    LODWORD(v15) = v42;
LABEL_9:
    P = 0LL;
    v49 = 0;
    v16 = v14 + 1;
    if ( (unsigned int)(v14 + 1) > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v16 < 4 )
      {
LABEL_40:
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v34, &EventProfilerExit, v35, v37);
        return 3221225495LL;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v16, 0x4B677844u);
      P = PoolWithTag;
    }
    else
    {
      PoolWithTag = v48;
      P = v48;
    }
    v49 = v14 + 1;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v16);
      PoolWithTag = P;
    }
    if ( PoolWithTag )
    {
      *PoolWithTag = v41;
      if ( (_DWORD)v14 )
        memmove(PoolWithTag + 1, Src, 4LL * (unsigned int)v14);
      v18 = SignalSynchronizationObjectInternal(
              v15,
              v43,
              (struct _D3DDDICB_SIGNALFLAGS)v43[32],
              v16,
              PoolWithTag,
              0LL,
              (unsigned __int64)v46,
              &v46,
              v11,
              v39 != 0,
              0);
      if ( v18 < 0 )
      {
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&P);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(qword_1C0079010, &EventProfilerExit, v36, v37);
        return (unsigned int)v18;
      }
      else
      {
        if ( P != v48 && P )
          ExFreePoolWithTag(P, 0);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v19, &EventProfilerExit, v20, v37);
        return 0LL;
      }
    }
    goto LABEL_40;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  v22 = &v41;
  v23 = 3LL;
  do
  {
    *(_OWORD *)v22 = *v4;
    *((_OWORD *)v22 + 1) = v4[1];
    *((_OWORD *)v22 + 2) = v4[2];
    *((_OWORD *)v22 + 3) = v4[3];
    *((_OWORD *)v22 + 4) = v4[4];
    *((_OWORD *)v22 + 5) = v4[5];
    *((_OWORD *)v22 + 6) = v4[6];
    v22 += 32;
    *((_OWORD *)v22 - 1) = v4[7];
    v4 += 8;
    --v23;
  }
  while ( v23 );
  *(_OWORD *)v22 = *v4;
  *((_OWORD *)v22 + 1) = v4[1];
  *((_OWORD *)v22 + 2) = v4[2];
  *((_OWORD *)v22 + 3) = v4[3];
  *((_OWORD *)v22 + 4) = v4[4];
  v14 = v44;
  if ( v44 > 0x40 )
  {
    v29 = WdLogNewEntry5_WdWarning(128LL, 0LL, v10);
    *(_QWORD *)(v29 + 24) = v14;
    WdLogEvent5_WdWarning(v29);
    goto LABEL_33;
  }
  v15 = v42;
  if ( v42 <= 0x20 )
    goto LABEL_9;
  v30 = WdLogNewEntry5_WdError(128LL);
  *(_QWORD *)(v30 + 24) = v15;
  WdLogEvent5_WdError(v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  v33 = (qword_1C0079010 & 2) == 0;
LABEL_34:
  if ( !v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v37);
  return 3221225485LL;
}
