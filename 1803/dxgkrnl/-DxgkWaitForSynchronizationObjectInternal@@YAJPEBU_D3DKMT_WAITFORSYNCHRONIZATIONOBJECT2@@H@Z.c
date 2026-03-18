/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00D2728
 * Callers:
 *     DxgkWaitForSynchronizationObject @ 0x1C009CCB0 (DxgkWaitForSynchronizationObject.c)
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00D2710 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00FC0D0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rdi
  D3DKMT_HANDLE *v11; // rbx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  D3DKMT_HANDLE *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v25; // r14
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-118h] BYREF
  __int64 v32; // [rsp+58h] [rbp-110h]
  struct DXGPROCESS *v33; // [rsp+60h] [rbp-108h]
  __int128 v34; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v35; // [rsp+80h] [rbp-E8h]
  __int128 v36; // [rsp+90h] [rbp-D8h]
  __int128 v37; // [rsp+A0h] [rbp-C8h]
  __int128 v38; // [rsp+B0h] [rbp-B8h]
  __int128 v39; // [rsp+C0h] [rbp-A8h]
  __int128 v40; // [rsp+D0h] [rbp-98h]
  __int128 v41; // [rsp+E0h] [rbp-88h]
  __int128 v42; // [rsp+F0h] [rbp-78h] BYREF
  __int128 v43; // [rsp+100h] [rbp-68h]
  __int128 v44; // [rsp+110h] [rbp-58h]
  __int128 v45; // [rsp+120h] [rbp-48h]
  __int64 v46; // [rsp+130h] [rbp-38h]

  v4 = a1;
  v32 = 0LL;
  v31 = 2043;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2043);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2043);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v25 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v10 = *v25;
      }
    }
  }
  v33 = v10;
  if ( v10 )
  {
    if ( !a2 )
    {
      v34 = *(_OWORD *)&v4->hContext;
      v35 = *(_OWORD *)&v4->ObjectHandleArray[2];
      v36 = *(_OWORD *)&v4->ObjectHandleArray[6];
      v37 = *(_OWORD *)&v4->ObjectHandleArray[10];
      v38 = *(_OWORD *)&v4->ObjectHandleArray[14];
      v39 = *(_OWORD *)&v4->ObjectHandleArray[18];
      v40 = *(_OWORD *)&v4->ObjectHandleArray[22];
      v41 = *(_OWORD *)&v4->ObjectHandleArray[26];
      v11 = &v4->ObjectHandleArray[30];
      v42 = *(_OWORD *)v11;
      v43 = *((_OWORD *)v11 + 1);
      v44 = *((_OWORD *)v11 + 2);
      v45 = *((_OWORD *)v11 + 3);
      v46 = *((_QWORD *)v11 + 8);
      goto LABEL_7;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v34 = *(_OWORD *)&v4->hContext;
    v35 = *(_OWORD *)&v4->ObjectHandleArray[2];
    v36 = *(_OWORD *)&v4->ObjectHandleArray[6];
    v37 = *(_OWORD *)&v4->ObjectHandleArray[10];
    v38 = *(_OWORD *)&v4->ObjectHandleArray[14];
    v39 = *(_OWORD *)&v4->ObjectHandleArray[18];
    v40 = *(_OWORD *)&v4->ObjectHandleArray[22];
    v41 = *(_OWORD *)&v4->ObjectHandleArray[26];
    v16 = &v4->ObjectHandleArray[30];
    v42 = *(_OWORD *)v16;
    v43 = *((_OWORD *)v16 + 1);
    v44 = *((_OWORD *)v16 + 2);
    v45 = *((_OWORD *)v16 + 3);
    v46 = *((_QWORD *)v16 + 8);
    v17 = DWORD1(v34);
    if ( DWORD1(v34) )
    {
      if ( DWORD1(v34) <= 0x20 )
      {
LABEL_7:
        v12 = WaitForSynchronizationObjectFromGpu(
                DWORD1(v34),
                (const unsigned int *)&v34 + 2,
                0LL,
                *((unsigned __int64 *)&v42 + 1),
                v34,
                v10,
                a2 != 0,
                0,
                0,
                0);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( v12 < 0 )
        {
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(qword_1C0079010, &EventProfilerExit, v14, v31);
          return (unsigned int)v12;
        }
        else
        {
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v13, &EventProfilerExit, v14, v31);
          return 0LL;
        }
      }
      v21 = (_QWORD *)WdLogNewEntry5_WdError(&v42);
      v21[3] = (unsigned int)v34;
      v21[4] = v17;
      v21[5] = -1073741811LL;
      WdLogEvent5_WdError(v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v22, &EventProfilerExit, v23, v31);
      return 3221225485LL;
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(&v42);
      *(_QWORD *)(v18 + 24) = (unsigned int)v34;
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v19, &EventProfilerExit, v20, v31);
      return 3221225485LL;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v26 + 24) = PsGetCurrentProcess(v28, v27);
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v31);
    return 3221225485LL;
  }
}
