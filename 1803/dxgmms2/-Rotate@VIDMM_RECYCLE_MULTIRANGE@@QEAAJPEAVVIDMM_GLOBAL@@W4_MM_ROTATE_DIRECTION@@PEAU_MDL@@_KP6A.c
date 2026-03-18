/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006FB6C
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D300 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C0056870 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D968 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D9EC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C006FDB0 (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00718B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        __int64 a2,
        __int64 a3,
        struct _MDL *a4,
        SIZE_T Size,
        NTSTATUS (__stdcall *CopyFunction)(PMDL DestinationMdl, PMDL SourceMdl, PVOID Context),
        PVOID Context,
        unsigned int a8)
{
  char v8; // r15
  __int64 v9; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v10; // r14
  NTSTATUS v11; // r12d
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // r10
  ULONG_PTR v18; // r12
  char v19; // si
  int v20; // ebx
  struct _MDL *v21; // rcx
  __int64 v22; // rbx
  struct _EPROCESS *v23; // rax
  HANDLE v25; // rax
  __int64 v26; // rcx
  NTSTATUS v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rax
  ULONG_PTR v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  unsigned int v43; // edx
  __int64 v44; // r9
  __int64 *QuadPart; // r8
  __int64 v46; // rsi
  __int64 v47; // rdx
  PHYSICAL_ADDRESS v48; // rdi
  union _LARGE_INTEGER v49; // r14
  PHYSICAL_ADDRESS v50; // rbx
  SIZE_T v51; // r13
  _QWORD *v52; // rax
  __int64 CurrentProcess; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  _QWORD *v57; // rax
  ULONG_PTR v58; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER v59; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v60; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER v61; // [rsp+48h] [rbp-30h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR NumberOfBytes; // [rsp+58h] [rbp-20h] BYREF
  union _LARGE_INTEGER v64; // [rsp+60h] [rbp-18h] BYREF
  char *VirtualAddress; // [rsp+C8h] [rbp+50h]
  int v67; // [rsp+D0h] [rbp+58h]
  unsigned __int64 v69; // [rsp+100h] [rbp+88h]

  v67 = a3;
  v8 = 0;
  v9 = (int)a3;
  v10 = a1;
  v11 = 0;
  if ( *((_DWORD *)a1 + 54) == 4 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v28[3] = 270LL;
    v28[4] = 52LL;
    v28[5] = 11LL;
    v28[6] = v9;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v10 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(a1, i);
      v11 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i);
      if ( v11 < 0 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29);
        v31[3] = i;
        v31[4] = v10;
        v31[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v31);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)v10 + 10) + 32LL) + 8LL),
          i);
        return (unsigned int)v11;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)v10 + 9) )
      break;
  }
  VirtualAddress = (char *)*((_QWORD *)v10 + 6);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD(v10) )
  {
    if ( (int)v9 >= 0 )
    {
      if ( (int)v9 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v9 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(v14, v13, v15, v16);
        v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v54, v56);
        v57[3] = 270LL;
        v57[4] = 1LL;
        v57[5] = CurrentProcess;
        v57[6] = v10;
        v57[7] = v9;
        WdLogEvent5_WdCriticalError(v57);
      }
    }
    return (unsigned int)v11;
  }
  if ( (unsigned int)v9 > 1 )
  {
    v18 = *((_QWORD *)v10 + 17);
    v69 = v18;
    goto LABEL_9;
  }
  v18 = Size;
  v69 = Size;
  if ( *((_QWORD *)v10 + 24) )
  {
LABEL_9:
    v19 = a8;
    if ( (_DWORD)v9 == 2 )
    {
      Interval.QuadPart = -10000LL;
      v33 = v18;
      while ( 1 )
      {
        v58 = v33;
        v11 = MmRotatePhysicalView(v17, &v58, a4, MmToRegularMemory, CopyFunction, Context);
        if ( v11 != 1073741849 )
          break;
        v34 = WdLogNewEntry5_WdWarning(v21, v13);
        WdLogEvent5_WdWarning(v34);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v35, (__int64)&EventPerformanceWarning, v36, 12);
        v33 -= v58;
        VirtualAddress += v58;
        KeDelayExecutionThread(0, 0, &Interval);
        v17 = VirtualAddress;
      }
    }
    else if ( (_DWORD)v9 == 3 )
    {
      v59.QuadPart = -10000LL;
      v60 = v18;
      while ( 1 )
      {
        v27 = MmRotatePhysicalView(v17, &v60, a4, MmToRegularMemoryNoCopy, CopyFunction, Context);
        v11 = v27;
        if ( (a8 & 1) == 0 || v27 != 1073741849 )
          break;
        v37 = WdLogNewEntry5_WdWarning(v21, v13);
        WdLogEvent5_WdWarning(v37);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v38, (__int64)&EventPerformanceWarning, v39, 12);
        while ( MmRotatePhysicalView(
                  VirtualAddress,
                  &v60,
                  *((PMDL *)v10 + 18),
                  MmToFrameBufferNoCopy,
                  CopyFunction,
                  Context) < 0 )
          KeDelayExecutionThread(0, 0, &v59);
        KeDelayExecutionThread(0, 0, &v59);
        v19 = a8;
        v17 = VirtualAddress;
        LODWORD(v9) = v67;
      }
    }
    else
    {
      v20 = (a8 >> 1) & 1;
      if ( v20 )
      {
        v21 = (struct _MDL *)*((_QWORD *)v10 + 18);
        a4 = v21;
      }
      else
      {
        v21 = a4;
      }
      NumberOfBytes = v18;
      if ( g_bInjectRotateFailure )
      {
        v11 = -1073741823;
      }
      else
      {
        v11 = MmRotatePhysicalView(v17, &NumberOfBytes, v21, (MM_ROTATE_DIRECTION)v9, CopyFunction, Context);
        if ( v11 >= 0 )
          goto LABEL_15;
      }
      if ( v20 )
      {
        ExFreePoolWithTag(*((PVOID *)v10 + 18), 0);
        *((_QWORD *)v10 + 18) = 0LL;
      }
    }
    if ( v11 < 0 )
    {
      if ( v11 == -1073741558 && (unsigned int)(v9 - 2) <= 1 )
      {
        v40 = *((_QWORD *)v10 + 18);
        if ( v40 )
        {
          v41 = 1LL;
          v42 = *(_QWORD *)(v40 + 48);
          v43 = *(_DWORD *)(v40 + 40) >> 12;
          v44 = v42;
          if ( v43 > 1 )
          {
            QuadPart = (__int64 *)(v40 + 56);
            v59.QuadPart = v40 + 56;
            v46 = v43 - 1;
            do
            {
              v47 = *QuadPart;
              if ( *QuadPart == v44 + 1 )
              {
                ++v41;
              }
              else
              {
                v48.QuadPart = v42 << 12;
                v64.QuadPart = v41 << 12;
                v42 = v47;
                if ( MmIsIoSpaceActive(v48, v41 << 12) )
                {
                  v49 = v64;
                  do
                  {
                    v64.QuadPart = -10000LL;
                    KeDelayExecutionThread(0, 0, &v64);
                  }
                  while ( MmIsIoSpaceActive(v48, v49.QuadPart) );
                }
                QuadPart = (__int64 *)v59.QuadPart;
                v47 = v42;
                v41 = 1LL;
              }
              ++QuadPart;
              v44 = v47;
              v59.QuadPart = (LONGLONG)QuadPart;
              --v46;
            }
            while ( v46 );
            v19 = a8;
            v10 = a1;
            LODWORD(v9) = v67;
          }
          v60 = v41 << 12;
          v50.QuadPart = v42 << 12;
          if ( MmIsIoSpaceActive(v50, v41 << 12) )
          {
            v51 = v60;
            do
            {
              v61.QuadPart = -10000LL;
              KeDelayExecutionThread(0, 0, &v61);
            }
            while ( MmIsIoSpaceActive(v50, v51) );
          }
          if ( (v19 & 2) == 0 )
          {
            ExFreePoolWithTag(*((PVOID *)v10 + 18), 0);
            *((_QWORD *)v10 + 18) = 0LL;
          }
          *((_BYTE *)v10 + 130) = 0;
        }
        else
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v13, v15);
          v52[3] = 270LL;
          v52[4] = 4LL;
          v52[5] = v10;
          v52[6] = -1073741558LL;
          v52[7] = 0LL;
          WdLogEvent5_WdCriticalError(v52);
        }
      }
      v21 = (struct _MDL *)*((_QWORD *)v10 + 24);
      if ( v21 )
      {
        MmUnsecureVirtualMemory(v21);
        *((_QWORD *)v10 + 24) = 0LL;
      }
      v22 = v69;
      goto LABEL_21;
    }
LABEL_15:
    if ( (unsigned int)v9 <= 1 )
    {
      v22 = v69;
      v8 = 1;
      *((_QWORD *)v10 + 17) = v69;
      *((_QWORD *)v10 + 18) = a4;
    }
    else
    {
      if ( (v19 & 2) == 0 )
      {
        ExFreePoolWithTag(*((PVOID *)v10 + 18), 0);
        v21 = (struct _MDL *)*((_QWORD *)v10 + 24);
        *((_QWORD *)v10 + 18) = 0LL;
        if ( v21 )
        {
          MmUnsecureVirtualMemory(v21);
          *((_QWORD *)v10 + 24) = 0LL;
        }
      }
      v22 = v69;
    }
    *((_BYTE *)v10 + 130) = v8;
LABEL_21:
    v23 = (struct _EPROCESS *)PsGetCurrentProcess(v21, v13, v15, v16);
    VIDMM_GLOBAL::RecordRotation(v23, VirtualAddress, v22, a4, (enum _MM_ROTATE_DIRECTION)v9, v11);
    return (unsigned int)v11;
  }
  v25 = MmSecureVirtualMemory(v17, Size, 4u);
  *((_QWORD *)v10 + 24) = v25;
  if ( v25 )
  {
    v17 = VirtualAddress;
    goto LABEL_9;
  }
  _InterlockedAdd(&dword_1C004764C, 1u);
  v32 = WdLogNewEntry5_WdLowResource(v26);
  *(_QWORD *)(v32 + 24) = 3239LL;
  WdLogEvent5_WdLowResource(v32);
  return 3221225495LL;
}
