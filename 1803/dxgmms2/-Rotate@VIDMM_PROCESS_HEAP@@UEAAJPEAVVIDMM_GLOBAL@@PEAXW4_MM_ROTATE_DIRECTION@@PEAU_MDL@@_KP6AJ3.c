/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B9B50
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0016180 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00161A4 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C0056870 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        enum _MM_ROTATE_DIRECTION a4,
        PMDL NewMdl,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION a7,
        PVOID a8,
        char a9)
{
  char v9; // di
  __int64 v10; // r15
  ULONG_PTR v11; // rsi
  __int64 v12; // r13
  NTSTATUS v14; // r14d
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  char *v28; // r12
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  SIZE_T v35; // r14
  HANDLE v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // bl
  struct _MDL *v40; // rbx
  ULONG_PTR v41; // rsi
  PVOID Context; // r15
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  PVOID v52; // r13
  int v53; // r15d
  NTSTATUS v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  NTSTATUS (__stdcall *v59)(PMDL, PMDL, PVOID); // rbx
  __int64 v60; // rbx
  struct _MDL *v61; // r13
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  SIZE_T v66; // [rsp+30h] [rbp-48h]
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v68; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER v69; // [rsp+48h] [rbp-30h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-28h] BYREF
  int v71; // [rsp+58h] [rbp-20h] BYREF
  __int64 v72; // [rsp+60h] [rbp-18h]
  int v73; // [rsp+C0h] [rbp+48h]
  ULONG_PTR v75; // [rsp+D0h] [rbp+58h] BYREF
  enum _MM_ROTATE_DIRECTION v76; // [rsp+D8h] [rbp+60h]

  v76 = a4;
  v75 = a3;
  v9 = 0;
  v10 = a4;
  v11 = a3;
  v72 = 0LL;
  v12 = a2;
  v71 = 8005;
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, (__int64)&EventProfilerEnter, a3, 8005);
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v14 = 0;
  v15 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess(v17, v16, v18, v19) != v15 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, v22);
    v24[3] = 270LL;
    v24[4] = 30LL;
    v24[5] = 0LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v25 = WdLogNewEntry5_WdTrace(v21);
    *(_QWORD *)(v25 + 24) = v11;
    *(_QWORD *)(v25 + 32) = v10;
  }
  v26 = *(_QWORD *)(v11 + 8);
  v27 = *(_DWORD *)v11 & 1;
  if ( (*(_DWORD *)v11 & 1) != 0 )
  {
    v28 = *(char **)(v11 + 8);
    v29 = (*(_DWORD *)(v11 + 20) >> 23) & 1;
  }
  else
  {
    v28 = (char *)(*(_QWORD *)(v11 + 16) + *(_QWORD *)(v26 + 32));
    if ( (*(_DWORD *)(v26 + 64) & 1) != 0 )
      goto LABEL_18;
    v29 = 0;
  }
  if ( v29 )
  {
LABEL_18:
    v73 = 0;
    if ( (unsigned int)v10 <= 1 )
    {
      v35 = Size;
      v66 = Size;
      if ( !(_DWORD)v27 && !*(_QWORD *)(v26 + 56) && !*(_QWORD *)(v11 + 32) )
      {
        v36 = MmSecureVirtualMemory(v28, Size, 4u);
        *(_QWORD *)(v11 + 32) = v36;
        if ( !v36 )
        {
          _InterlockedIncrement(&dword_1C004764C);
          v38 = WdLogNewEntry5_WdLowResource(v37);
          *(_QWORD *)(v38 + 24) = 1551LL;
          WdLogEvent5_WdLowResource(v38);
          v14 = -1073741801;
          goto LABEL_58;
        }
      }
      if ( *(_DWORD *)(v12 + 40680) != -1 )
        (*(void (__fastcall **)(_QWORD))(v12 + 40584))(*(_QWORD *)(v12 + 40648));
      v73 = 1;
    }
    else
    {
      v35 = *(_QWORD *)(v11 + 64);
      v66 = v35;
    }
    v39 = a9;
    if ( (_DWORD)v10 == 2 )
    {
      v40 = NewMdl;
      v41 = v35;
      Context = a8;
      CopyFunction = a7;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        NumberOfBytes = v41;
        v14 = MmRotatePhysicalView(v28, &NumberOfBytes, v40, MmToRegularMemory, CopyFunction, Context);
        if ( v14 != 1073741849 )
          break;
        v48 = WdLogNewEntry5_WdWarning(v45, v44);
        WdLogEvent5_WdWarning(v48);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v49, (__int64)&EventPerformanceWarning, v50, 12);
        v28 += NumberOfBytes;
        v41 -= NumberOfBytes;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v11 = v75;
    }
    else
    {
      if ( (_DWORD)v10 != 3 )
      {
        v75 = v35;
        v14 = MmRotatePhysicalView(v28, &v75, NewMdl, (MM_ROTATE_DIRECTION)v10, a7, a8);
        if ( v14 >= 0 )
          goto LABEL_62;
        if ( (v39 & 2) != 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v11 + 80), 0);
          *(_QWORD *)(v11 + 80) = 0LL;
        }
LABEL_52:
        if ( v14 < 0 )
        {
          if ( v73 )
          {
            v51 = *(unsigned int *)(v12 + 40680);
            if ( (_DWORD)v51 != -1 )
              (*(void (__fastcall **)(_QWORD))(v12 + 40600))(*(_QWORD *)(v12 + 40648));
          }
          v60 = v66;
          v61 = NewMdl;
LABEL_57:
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v45, v51, v46, v47);
          VIDMM_GLOBAL::RecordRotation(CurrentProcess, v28, v60, v61, (enum _MM_ROTATE_DIRECTION)v10, v14);
          goto LABEL_58;
        }
LABEL_62:
        if ( (unsigned int)v10 <= 1 )
        {
          v60 = v66;
          v9 = 1;
          v61 = NewMdl;
          *(_QWORD *)(v11 + 64) = v66;
          *(_QWORD *)(v11 + 80) = v61;
        }
        else
        {
          if ( (v39 & 2) == 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v11 + 80), 0);
            *(_QWORD *)(v11 + 80) = 0LL;
          }
          v60 = v66;
          v61 = NewMdl;
        }
        *(_BYTE *)(v11 + 72) = v9;
        goto LABEL_57;
      }
      v52 = a8;
      v69.QuadPart = -10000LL;
      v53 = a9 & 1;
      v68 = v35;
      while ( 1 )
      {
        v54 = MmRotatePhysicalView(v28, &v68, NewMdl, MmToRegularMemoryNoCopy, a7, v52);
        v14 = v54;
        if ( !v53 || v54 != 1073741849 )
          break;
        v56 = WdLogNewEntry5_WdWarning(v45, v55);
        WdLogEvent5_WdWarning(v56);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v57, (__int64)&EventPerformanceWarning, v58, 12);
        v59 = a7;
        while ( MmRotatePhysicalView(v28, &v68, *(PMDL *)(v11 + 80), MmToFrameBufferNoCopy, v59, v52) < 0 )
          KeDelayExecutionThread(0, 0, &v69);
        KeDelayExecutionThread(0, 0, &v69);
      }
    }
    v12 = a2;
    v39 = a9;
    LODWORD(v10) = v76;
    v51 = *(unsigned int *)(a2 + 40680);
    if ( (_DWORD)v51 != -1 )
      (*(void (__fastcall **)(_QWORD))(a2 + 40600))(*(_QWORD *)(a2 + 40648));
    goto LABEL_52;
  }
  if ( (int)v10 >= 0 )
  {
    if ( (int)v10 <= 1 )
    {
      v14 = -1073741823;
    }
    else if ( (int)v10 <= 3 )
    {
      v30 = PsGetCurrentProcess(v26, v27, v22, v23);
      v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v31, v33);
      v34[3] = 270LL;
      v34[4] = 1LL;
      v34[5] = v30;
      v34[6] = v11;
      v34[7] = v10;
      WdLogEvent5_WdCriticalError(v34);
    }
  }
LABEL_58:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71);
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v63, (__int64)&EventProfilerExit, v64, v71);
  return (unsigned int)v14;
}
