/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067F38
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064540 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064A6C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064AF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C0068134 (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0068D24 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00691D0 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C006D5DC (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3,
        struct _MDL *a4,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID a7,
        int a8,
        ULONG_PTR a9)
{
  NTSTATUS v9; // r15d
  __int64 v10; // r13
  struct _MDL *v11; // rdi
  VIDMM_RECYCLE_MULTIRANGE *QuadPart; // rsi
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v14; // rcx
  PVOID v15; // r10
  ULONG_PTR v16; // rbx
  void *Context; // r12
  __int64 v18; // rdx
  void *v19; // rcx
  __int64 v20; // r8
  struct _EPROCESS *v21; // rax
  bool v23; // zf
  HANDLE v24; // rax
  __int64 v25; // rcx
  void *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  void *v32; // r12
  struct _VIDMM_GLOBAL_ALLOC *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  PVOID v40; // rdi
  NTSTATUS (__stdcall *v41)(PMDL, PMDL, PVOID); // r13
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rbx
  unsigned int v45; // ecx
  __int64 v46; // r8
  __int64 *v47; // rdx
  __int64 v48; // r13
  __int64 v49; // rcx
  PHYSICAL_ADDRESS v50; // rdi
  SIZE_T v51; // rsi
  PHYSICAL_ADDRESS v52; // rbx
  SIZE_T v53; // r12
  void *v54; // rcx
  _QWORD *v55; // rax
  __int64 CurrentProcess; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *v60; // rax
  ULONG_PTR NumberOfBytes; // [rsp+30h] [rbp-38h] BYREF
  SIZE_T v62; // [rsp+38h] [rbp-30h]
  union _LARGE_INTEGER v63; // [rsp+40h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp-20h] BYREF
  ULONG_PTR v65; // [rsp+50h] [rbp-18h] BYREF
  union _LARGE_INTEGER v66; // [rsp+58h] [rbp-10h] BYREF
  union _LARGE_INTEGER v67; // [rsp+B0h] [rbp+48h] BYREF
  PVOID VirtualAddress; // [rsp+B8h] [rbp+50h]
  int v69; // [rsp+C0h] [rbp+58h]
  PMDL NewMdl; // [rsp+C8h] [rbp+60h]

  NewMdl = a4;
  v69 = a3;
  VirtualAddress = a2;
  v67.QuadPart = (LONGLONG)this;
  v9 = 0;
  v10 = (int)a3;
  v11 = a4;
  QuadPart = this;
  if ( *((_DWORD *)this + 54) == 4 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v27[7] = 0LL;
    v27[3] = 270LL;
    v27[4] = 52LL;
    v27[5] = 11LL;
    v27[6] = v10;
    WdLogEvent5_WdCriticalError(v27);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)QuadPart + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(this, i);
      v9 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i);
      if ( v9 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28);
        v30[3] = i;
        v30[4] = QuadPart;
        v30[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)QuadPart + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v30);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)QuadPart + 10) + 32LL) + 8LL),
          i);
        return (unsigned int)v9;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)QuadPart + 9) )
      break;
  }
  VirtualAddress = (PVOID)*((_QWORD *)QuadPart + 6);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD(QuadPart) )
  {
    if ( (int)v10 >= 0 )
    {
      if ( (int)v10 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v10 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(v14);
        v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v58, v57, v59);
        v60[3] = 270LL;
        v60[4] = 1LL;
        v60[5] = CurrentProcess;
        v60[6] = QuadPart;
        v60[7] = v10;
        WdLogEvent5_WdCriticalError(v60);
      }
    }
    return (unsigned int)v9;
  }
  if ( (unsigned int)v10 > 1 )
  {
    v16 = *((_QWORD *)QuadPart + 17);
    v62 = v16;
    goto LABEL_9;
  }
  v23 = *((_QWORD *)QuadPart + 24) == 0LL;
  v16 = Size;
  v62 = Size;
  if ( !v23 )
  {
LABEL_9:
    if ( (_DWORD)v10 == 2 )
    {
      v32 = a7;
      v33 = (struct _VIDMM_GLOBAL_ALLOC *)v16;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        a9 = (ULONG_PTR)v33;
        v9 = MmRotatePhysicalView(v15, &a9, NewMdl, MmToRegularMemory, CopyFunction, v32);
        if ( v9 != 1073741849 )
          break;
        v34 = WdLogNewEntry5_WdWarning(v19, v18);
        WdLogEvent5_WdWarning(v34);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v35, &EventPerformanceWarning, v36, 12);
        v33 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)v33 - a9);
        VirtualAddress = (char *)VirtualAddress + a9;
        KeDelayExecutionThread(0, 0, &Interval);
        v15 = VirtualAddress;
      }
      v11 = NewMdl;
    }
    else if ( (_DWORD)v10 == 3 )
    {
      Context = a7;
      v63.QuadPart = -10000LL;
      NumberOfBytes = v16;
      while ( 1 )
      {
        v9 = MmRotatePhysicalView(v15, &NumberOfBytes, v11, MmToRegularMemoryNoCopy, CopyFunction, Context);
        if ( v9 != 1073741849 || !a8 )
          break;
        v37 = WdLogNewEntry5_WdWarning(v19, v18);
        WdLogEvent5_WdWarning(v37);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v38, &EventPerformanceWarning, v39, 12);
        v40 = VirtualAddress;
        v41 = CopyFunction;
        while ( MmRotatePhysicalView(v40, &NumberOfBytes, *((PMDL *)QuadPart + 18), MmToFrameBufferNoCopy, v41, Context) < 0 )
          KeDelayExecutionThread(0, 0, &v63);
        KeDelayExecutionThread(0, 0, &v63);
        LODWORD(v10) = v69;
        v15 = v40;
        v11 = NewMdl;
      }
    }
    else
    {
      v65 = v16;
      v9 = MmRotatePhysicalView(v15, &v65, v11, (MM_ROTATE_DIRECTION)v10, CopyFunction, a7);
    }
    if ( v9 < 0 )
    {
      if ( v9 == -1073741558 && (unsigned int)(v10 - 2) <= 1 )
      {
        v42 = *((_QWORD *)QuadPart + 18);
        if ( v42 )
        {
          v43 = 1LL;
          v44 = *(_QWORD *)(v42 + 48);
          v45 = *(_DWORD *)(v42 + 40) >> 12;
          v46 = v44;
          if ( v45 > 1 )
          {
            v47 = (__int64 *)(v42 + 56);
            NumberOfBytes = v42 + 56;
            v48 = v45 - 1;
            do
            {
              v49 = *v47;
              if ( *v47 == v46 + 1 )
              {
                ++v43;
              }
              else
              {
                v50.QuadPart = v44 << 12;
                v44 = *v47;
                v65 = v43 << 12;
                v43 = 1LL;
                if ( MmIsIoSpaceActive(v50, v65) )
                {
                  v51 = v65;
                  do
                  {
                    v66.QuadPart = -10000LL;
                    KeDelayExecutionThread(0, 0, &v66);
                  }
                  while ( MmIsIoSpaceActive(v50, v51) );
                }
                v47 = (__int64 *)NumberOfBytes;
                v49 = v44;
              }
              ++v47;
              v46 = v49;
              NumberOfBytes = (ULONG_PTR)v47;
              --v48;
            }
            while ( v48 );
            QuadPart = (VIDMM_RECYCLE_MULTIRANGE *)v67.QuadPart;
            LODWORD(v10) = v69;
          }
          v52.QuadPart = v44 << 12;
          v53 = v43 << 12;
          while ( MmIsIoSpaceActive(v52, v53) )
          {
            v67.QuadPart = -10000LL;
            KeDelayExecutionThread(0, 0, &v67);
          }
          v54 = (void *)*((_QWORD *)QuadPart + 18);
          *((_BYTE *)QuadPart + 130) = 0;
          ExFreePoolWithTag(v54, 0);
          *((_QWORD *)QuadPart + 18) = 0LL;
          v16 = v62;
        }
        else
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v20);
          v55[7] = 0LL;
          v55[3] = 270LL;
          v55[4] = 4LL;
          v55[5] = QuadPart;
          v55[6] = -1073741558LL;
          WdLogEvent5_WdCriticalError(v55);
        }
      }
    }
    else
    {
      if ( (unsigned int)v10 <= 1 )
      {
        *((_BYTE *)QuadPart + 130) = 1;
        *((_QWORD *)QuadPart + 17) = v16;
        *((_QWORD *)QuadPart + 18) = v11;
LABEL_16:
        v21 = (struct _EPROCESS *)PsGetCurrentProcess(v19);
        VIDMM_GLOBAL::RecordRotation(v21, VirtualAddress, v16, NewMdl, (enum _MM_ROTATE_DIRECTION)v10, v9);
        return (unsigned int)v9;
      }
      v26 = (void *)*((_QWORD *)QuadPart + 18);
      *((_BYTE *)QuadPart + 130) = 0;
      ExFreePoolWithTag(v26, 0);
      *((_QWORD *)QuadPart + 18) = 0LL;
    }
    v19 = (void *)*((_QWORD *)QuadPart + 24);
    if ( v19 )
    {
      MmUnsecureVirtualMemory(v19);
      *((_QWORD *)QuadPart + 24) = 0LL;
    }
    goto LABEL_16;
  }
  v24 = MmSecureVirtualMemory(v15, Size, 4u);
  *((_QWORD *)QuadPart + 24) = v24;
  if ( v24 )
  {
    v15 = VirtualAddress;
    goto LABEL_9;
  }
  _InterlockedAdd(&dword_1C003C63C, 1u);
  v31 = WdLogNewEntry5_WdLowResource(v25);
  *(_QWORD *)(v31 + 24) = 2991LL;
  WdLogEvent5_WdLowResource(v31);
  return 3221225495LL;
}
