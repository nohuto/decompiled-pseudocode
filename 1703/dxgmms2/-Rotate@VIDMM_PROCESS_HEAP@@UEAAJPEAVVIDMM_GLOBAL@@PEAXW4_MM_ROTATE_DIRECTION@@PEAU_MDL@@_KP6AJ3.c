/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8C20
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C006D5DC (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_GLOBAL *a2,
        signed __int64 a3,
        enum _MM_ROTATE_DIRECTION a4,
        PMDL NewMdl,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION a7,
        PVOID a8,
        int a9)
{
  ULONG_PTR v9; // rdi
  __int64 v10; // r14
  struct VIDMM_GLOBAL *v11; // r15
  NTSTATUS v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  char *v21; // rbx
  int v22; // eax
  __int64 CurrentProcess; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  SIZE_T v28; // r12
  HANDLE v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  struct _MDL *v32; // r13
  PVOID Context; // r14
  ULONG_PTR v34; // rdi
  NTSTATUS (__stdcall *CopyFunction)(PMDL, PMDL, PVOID); // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  PVOID v41; // r14
  NTSTATUS (__stdcall *v42)(PMDL, PMDL, PVOID); // r15
  NTSTATUS v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  void *v48; // rcx
  struct _EPROCESS *v49; // rax
  ULONG_PTR NumberOfBytes; // [rsp+30h] [rbp-28h] BYREF
  union _LARGE_INTEGER v52; // [rsp+38h] [rbp-20h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR v54[2]; // [rsp+48h] [rbp-10h] BYREF
  int v55; // [rsp+A0h] [rbp+48h]
  ULONG_PTR v57; // [rsp+B0h] [rbp+58h] BYREF
  enum _MM_ROTATE_DIRECTION v58; // [rsp+B8h] [rbp+60h]

  v58 = a4;
  v57 = a3;
  v9 = a3;
  v10 = a4;
  v11 = a2;
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 8005);
  v13 = 0;
  v14 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this) != v14 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
    v18[3] = 270LL;
    v18[4] = 30LL;
    v18[5] = 0LL;
    v18[6] = 0LL;
    v18[7] = 0LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v19 = WdLogNewEntry5_WdTrace(v16);
    *(_QWORD *)(v19 + 24) = v9;
    *(_QWORD *)(v19 + 32) = v10;
  }
  v20 = *(_QWORD *)(v9 + 8);
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v21 = *(char **)(v9 + 8);
    v22 = (*(_DWORD *)(v9 + 20) >> 23) & 1;
  }
  else
  {
    v21 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v20 + 32));
    if ( (*(_DWORD *)(v20 + 64) & 1) != 0 )
      goto LABEL_18;
    v22 = 0;
  }
  if ( !v22 )
  {
    if ( (int)v10 >= 0 )
    {
      if ( (int)v10 <= 1 )
      {
        v13 = -1073741823;
      }
      else if ( (int)v10 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(v20);
        v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
        v27[3] = 270LL;
        v27[4] = 1LL;
        v27[5] = CurrentProcess;
        v27[6] = v9;
        v27[7] = v10;
        WdLogEvent5_WdCriticalError(v27);
      }
    }
    goto LABEL_57;
  }
LABEL_18:
  v55 = 0;
  if ( (unsigned int)v10 <= 1 )
  {
    v28 = Size;
    if ( (*(_DWORD *)v9 & 1) == 0 && !*(_QWORD *)(v20 + 56) && !*(_QWORD *)(v9 + 32) )
    {
      v29 = MmSecureVirtualMemory(v21, Size, 4u);
      *(_QWORD *)(v9 + 32) = v29;
      if ( !v29 )
      {
        _InterlockedIncrement(&dword_1C003C63C);
        v31 = WdLogNewEntry5_WdLowResource(v30);
        *(_QWORD *)(v31 + 24) = 1550LL;
        WdLogEvent5_WdLowResource(v31);
        v13 = -1073741801;
        goto LABEL_57;
      }
    }
    if ( *((_DWORD *)v11 + 10033) != -1 )
      (*((void (__fastcall **)(_QWORD))v11 + 5001))(*((_QWORD *)v11 + 5009));
    v55 = 1;
  }
  else
  {
    v28 = *(_QWORD *)(v9 + 64);
  }
  v32 = NewMdl;
  if ( (_DWORD)v10 == 2 )
  {
    Context = a8;
    v34 = v28;
    CopyFunction = a7;
    Interval.QuadPart = -10000LL;
    while ( 1 )
    {
      NumberOfBytes = v34;
      v13 = MmRotatePhysicalView(v21, &NumberOfBytes, v32, MmToRegularMemory, CopyFunction, Context);
      if ( v13 != 1073741849 )
        break;
      v38 = WdLogNewEntry5_WdWarning(v37, v36);
      WdLogEvent5_WdWarning(v38);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v39, &EventPerformanceWarning, v40, 12);
      v21 += NumberOfBytes;
      v34 -= NumberOfBytes;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v9 = v57;
LABEL_36:
    v11 = a2;
    LODWORD(v10) = v58;
    if ( *((_DWORD *)a2 + 10033) != -1 )
      (*((void (__fastcall **)(_QWORD))a2 + 5003))(*((_QWORD *)a2 + 5009));
    goto LABEL_49;
  }
  if ( (_DWORD)v10 == 3 )
  {
    v41 = a8;
    v42 = a7;
    v52.QuadPart = -10000LL;
    v57 = v28;
    while ( 1 )
    {
      v43 = MmRotatePhysicalView(v21, &v57, v32, MmToRegularMemoryNoCopy, v42, v41);
      v13 = v43;
      if ( !a9 || v43 != 1073741849 )
        break;
      v45 = WdLogNewEntry5_WdWarning(v37, v44);
      WdLogEvent5_WdWarning(v45);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v46, &EventPerformanceWarning, v47, 12);
      while ( MmRotatePhysicalView(v21, &v57, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, v42, v41) < 0 )
        KeDelayExecutionThread(0, 0, &v52);
      KeDelayExecutionThread(0, 0, &v52);
    }
    goto LABEL_36;
  }
  v54[0] = v28;
  v13 = MmRotatePhysicalView(v21, v54, NewMdl, (MM_ROTATE_DIRECTION)v10, a7, a8);
LABEL_49:
  if ( v13 < 0 )
  {
    if ( v55 && *((_DWORD *)v11 + 10033) != -1 )
      (*((void (__fastcall **)(_QWORD))v11 + 5003))(*((_QWORD *)v11 + 5009));
  }
  else if ( (unsigned int)v10 <= 1 )
  {
    *(_BYTE *)(v9 + 72) = 1;
    *(_QWORD *)(v9 + 64) = v28;
    *(_QWORD *)(v9 + 80) = v32;
  }
  else
  {
    v48 = *(void **)(v9 + 80);
    *(_BYTE *)(v9 + 72) = 0;
    ExFreePoolWithTag(v48, 0);
    *(_QWORD *)(v9 + 80) = 0LL;
  }
  v49 = (struct _EPROCESS *)PsGetCurrentProcess(v37);
  VIDMM_GLOBAL::RecordRotation(v49, v21, v28, v32, (enum _MM_ROTATE_DIRECTION)v10, v13);
LABEL_57:
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v20, &EventProfilerExit, v17, 8005);
  return (unsigned int)v13;
}
