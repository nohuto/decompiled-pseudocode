/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B1270
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00731F0 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        PMDL NewMdl,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION a7,
        PVOID a8,
        char a9)
{
  ULONG_PTR v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r15
  NTSTATUS v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  char *v23; // r12
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  SIZE_T v30; // r13
  HANDLE v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  char v35; // bl
  struct _MDL *v36; // rbx
  ULONG_PTR v37; // rdi
  PVOID Context; // r14
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r15
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  PVOID v47; // r15
  int v48; // r14d
  NTSTATUS v49; // eax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  NTSTATUS (__stdcall *v53)(PMDL, PMDL, PVOID); // rbx
  struct _EPROCESS *CurrentProcess; // rax
  ULONG_PTR NumberOfBytes; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v57; // [rsp+38h] [rbp-20h] BYREF
  union _LARGE_INTEGER v58; // [rsp+40h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp-10h] BYREF
  int v60; // [rsp+A0h] [rbp+48h]
  ULONG_PTR v62; // [rsp+B0h] [rbp+58h] BYREF
  enum _MM_ROTATE_DIRECTION v63; // [rsp+B8h] [rbp+60h]

  v63 = (int)a4;
  v62 = a3;
  v9 = a3;
  v10 = (int)a4;
  v11 = a2;
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, (__int64)&EventProfilerEnter, a3, 8005);
  v13 = 0;
  v14 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != v14 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
    v19[3] = 270LL;
    v19[4] = 30LL;
    v19[5] = 0LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v20 = WdLogNewEntry5_WdTrace(v16);
    *(_QWORD *)(v20 + 24) = v9;
    *(_QWORD *)(v20 + 32) = v10;
  }
  v21 = *(_QWORD *)(v9 + 8);
  v22 = *(_DWORD *)v9 & 1;
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v23 = *(char **)(v9 + 8);
    v24 = (*(_DWORD *)(v9 + 20) >> 23) & 1;
  }
  else
  {
    v23 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v21 + 32));
    if ( (*(_DWORD *)(v21 + 64) & 1) != 0 )
      goto LABEL_18;
    v24 = 0;
  }
  if ( v24 )
  {
LABEL_18:
    v60 = 0;
    if ( (unsigned int)v10 <= 1 )
    {
      v30 = Size;
      if ( !(_DWORD)v22 && !*(_QWORD *)(v21 + 56) && !*(_QWORD *)(v9 + 32) )
      {
        v31 = MmSecureVirtualMemory(v23, Size, 4u);
        *(_QWORD *)(v9 + 32) = v31;
        if ( !v31 )
        {
          _InterlockedIncrement(&dword_1C004064C);
          v34 = WdLogNewEntry5_WdLowResource(v33, v32);
          *(_QWORD *)(v34 + 24) = 1550LL;
          WdLogEvent5_WdLowResource(v34);
          v13 = -1073741801;
          goto LABEL_62;
        }
      }
      if ( *(_DWORD *)(v11 + 40132) != -1 )
        (*(void (__fastcall **)(_QWORD))(v11 + 40008))(*(_QWORD *)(v11 + 40072));
      v60 = 1;
    }
    else
    {
      v30 = *(_QWORD *)(v9 + 64);
    }
    v35 = a9;
    if ( (_DWORD)v10 == 2 )
    {
      v36 = NewMdl;
      v37 = v30;
      Context = a8;
      CopyFunction = a7;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        NumberOfBytes = v37;
        v13 = MmRotatePhysicalView(v23, &NumberOfBytes, v36, MmToRegularMemory, CopyFunction, Context);
        if ( v13 != 1073741849 )
          break;
        v43 = WdLogNewEntry5_WdWarning(v40);
        WdLogEvent5_WdWarning(v43);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v44, (__int64)&EventPerformanceWarning, v45, 12);
        v23 += NumberOfBytes;
        v37 -= NumberOfBytes;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v9 = v62;
    }
    else
    {
      if ( (_DWORD)v10 != 3 )
      {
        v62 = v30;
        v13 = MmRotatePhysicalView(v23, &v62, NewMdl, (MM_ROTATE_DIRECTION)v10, a7, a8);
        if ( v13 >= 0 )
          goto LABEL_56;
        if ( (v35 & 2) != 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
          *(_QWORD *)(v9 + 80) = 0LL;
        }
LABEL_52:
        if ( v13 < 0 )
        {
          if ( v60 )
          {
            v46 = *(unsigned int *)(v11 + 40132);
            if ( (_DWORD)v46 != -1 )
              (*(void (__fastcall **)(_QWORD))(v11 + 40024))(*(_QWORD *)(v11 + 40072));
          }
LABEL_61:
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v40, v46, v41, v42);
          VIDMM_GLOBAL::RecordRotation(CurrentProcess, v23, v30, NewMdl, (enum _MM_ROTATE_DIRECTION)v10, v13);
          goto LABEL_62;
        }
LABEL_56:
        if ( (unsigned int)v10 <= 1 )
        {
          *(_QWORD *)(v9 + 80) = NewMdl;
          *(_BYTE *)(v9 + 72) = 1;
          *(_QWORD *)(v9 + 64) = v30;
        }
        else
        {
          if ( (v35 & 2) == 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
            *(_QWORD *)(v9 + 80) = 0LL;
          }
          *(_BYTE *)(v9 + 72) = 0;
        }
        goto LABEL_61;
      }
      v47 = a8;
      v58.QuadPart = -10000LL;
      v48 = a9 & 1;
      v57 = v30;
      while ( 1 )
      {
        v49 = MmRotatePhysicalView(v23, &v57, NewMdl, MmToRegularMemoryNoCopy, a7, v47);
        v13 = v49;
        if ( !v48 || v49 != 1073741849 )
          break;
        v50 = WdLogNewEntry5_WdWarning(v40);
        WdLogEvent5_WdWarning(v50);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v51, (__int64)&EventPerformanceWarning, v52, 12);
        v53 = a7;
        while ( MmRotatePhysicalView(v23, &v57, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v53, v47) < 0 )
          KeDelayExecutionThread(0, 0, &v58);
        KeDelayExecutionThread(0, 0, &v58);
      }
    }
    v11 = a2;
    v35 = a9;
    LODWORD(v10) = v63;
    v46 = *(unsigned int *)(a2 + 40132);
    if ( (_DWORD)v46 != -1 )
      (*(void (__fastcall **)(_QWORD))(a2 + 40024))(*(_QWORD *)(a2 + 40072));
    goto LABEL_52;
  }
  if ( (int)v10 >= 0 )
  {
    if ( (int)v10 <= 1 )
    {
      v13 = -1073741823;
    }
    else if ( (int)v10 <= 3 )
    {
      v25 = PsGetCurrentProcess(v21, v22, v17, v18);
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
      v29[3] = 270LL;
      v29[4] = 1LL;
      v29[5] = v25;
      v29[6] = v9;
      v29[7] = v10;
      WdLogEvent5_WdCriticalError(v29);
    }
  }
LABEL_62:
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, (__int64)&EventProfilerExit, v17, 8005);
  return (unsigned int)v13;
}
