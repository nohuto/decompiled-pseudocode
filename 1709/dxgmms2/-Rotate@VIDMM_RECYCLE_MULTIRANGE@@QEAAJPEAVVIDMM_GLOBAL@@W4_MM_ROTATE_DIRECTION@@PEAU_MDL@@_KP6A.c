/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BA90
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067E70 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00684B0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068534 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C006BCC4 (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C006C9B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00731F0 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 VIDMM_RECYCLE_MULTIRANGE::Rotate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _MDL *a4,
        SIZE_T Size,
        NTSTATUS (__stdcall *CopyFunction)(PMDL DestinationMdl, PMDL SourceMdl, PVOID Context),
        PVOID Context,
        char a8,
        ...)
{
  NTSTATUS v8; // r15d
  __int64 v9; // r13
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // r10
  ULONG_PTR v17; // rdi
  char v18; // si
  struct _MDL *v19; // rcx
  struct _EPROCESS *v20; // rax
  HANDLE v22; // rax
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  ULONG_PTR v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  unsigned int v39; // edx
  __int64 v40; // r9
  __int64 *QuadPart; // r8
  __int64 v42; // rsi
  __int64 v43; // rdx
  PHYSICAL_ADDRESS v44; // rdi
  union _LARGE_INTEGER v45; // r13
  PHYSICAL_ADDRESS v46; // rbx
  SIZE_T v47; // rdi
  _QWORD *v48; // rax
  __int64 CurrentProcess; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  _QWORD *v53; // rax
  union _LARGE_INTEGER v54; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR v55; // [rsp+38h] [rbp-30h] BYREF
  union _LARGE_INTEGER v56; // [rsp+40h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp-20h] BYREF
  ULONG_PTR NumberOfBytes; // [rsp+50h] [rbp-18h] BYREF
  union _LARGE_INTEGER v59; // [rsp+58h] [rbp-10h] BYREF
  ULONG_PTR v60; // [rsp+B0h] [rbp+48h]
  char *VirtualAddress; // [rsp+B8h] [rbp+50h]
  int v62; // [rsp+C0h] [rbp+58h]
  ULONG_PTR v64; // [rsp+F0h] [rbp+88h] BYREF
  va_list va; // [rsp+F0h] [rbp+88h]
  va_list va1; // [rsp+F8h] [rbp+90h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v64 = va_arg(va1, _QWORD);
  v62 = a3;
  v8 = 0;
  v9 = (int)a3;
  if ( *(_DWORD *)(a1 + 216) == 4 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v25[7] = 0LL;
    v25[3] = 270LL;
    v25[4] = 52LL;
    v25[5] = 11LL;
    v25[6] = v9;
    WdLogEvent5_WdCriticalError(v25);
  }
  for ( i = *(struct VIDMM_RECYCLE_RANGE **)(a1 + 64); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce((VIDMM_RECYCLE_HEAP_MGR *)a1, i);
      v8 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i);
      if ( v8 < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v26);
        v27[3] = i;
        v27[4] = a1;
        v27[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v27);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) + 8LL),
          i);
        return (unsigned int)v8;
      }
    }
    if ( i == *(struct VIDMM_RECYCLE_RANGE **)(a1 + 72) )
      break;
  }
  VirtualAddress = *(char **)(a1 + 48);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((VIDMM_RECYCLE_MULTIRANGE *)a1) )
  {
    if ( (int)v9 >= 0 )
    {
      if ( (int)v9 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v9 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
        v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50, v52);
        v53[3] = 270LL;
        v53[4] = 1LL;
        v53[5] = CurrentProcess;
        v53[6] = a1;
        v53[7] = v9;
        WdLogEvent5_WdCriticalError(v53);
      }
    }
    return (unsigned int)v8;
  }
  if ( (unsigned int)v9 > 1 )
  {
    v17 = *(_QWORD *)(a1 + 136);
    v60 = v17;
    goto LABEL_9;
  }
  v17 = Size;
  v60 = Size;
  if ( *(_QWORD *)(a1 + 192) )
  {
LABEL_9:
    v18 = a8;
    if ( (_DWORD)v9 == 2 )
    {
      Interval.QuadPart = -10000LL;
      v29 = v17;
      while ( 1 )
      {
        v64 = v29;
        v8 = MmRotatePhysicalView(v16, (PSIZE_T)va, a4, MmToRegularMemory, CopyFunction, Context);
        if ( v8 != 1073741849 )
          break;
        v30 = WdLogNewEntry5_WdWarning(v19);
        WdLogEvent5_WdWarning(v30);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v31, (__int64)&EventPerformanceWarning, v32, 12);
        v29 -= v64;
        VirtualAddress += v64;
        KeDelayExecutionThread(0, 0, &Interval);
        v16 = VirtualAddress;
      }
    }
    else if ( (_DWORD)v9 == 3 )
    {
      v54.QuadPart = -10000LL;
      v55 = v17;
      while ( 1 )
      {
        v24 = MmRotatePhysicalView(v16, &v55, a4, MmToRegularMemoryNoCopy, CopyFunction, Context);
        v8 = v24;
        if ( (a8 & 1) == 0 || v24 != 1073741849 )
          break;
        v33 = WdLogNewEntry5_WdWarning(v19);
        WdLogEvent5_WdWarning(v33);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v34, (__int64)&EventPerformanceWarning, v35, 12);
        while ( MmRotatePhysicalView(
                  VirtualAddress,
                  &v55,
                  *(PMDL *)(a1 + 144),
                  MmToFrameBufferNoCopy,
                  CopyFunction,
                  Context) < 0 )
          KeDelayExecutionThread(0, 0, &v54);
        KeDelayExecutionThread(0, 0, &v54);
        LODWORD(v9) = v62;
        v16 = VirtualAddress;
        v17 = v60;
      }
    }
    else
    {
      if ( (a8 & 2) != 0 )
      {
        v19 = *(struct _MDL **)(a1 + 144);
        a4 = v19;
      }
      else
      {
        v19 = a4;
      }
      NumberOfBytes = v17;
      if ( g_bInjectRotateFailure )
      {
        v8 = -1073741823;
      }
      else
      {
        v8 = MmRotatePhysicalView(v16, &NumberOfBytes, v19, (MM_ROTATE_DIRECTION)v9, CopyFunction, Context);
        if ( v8 >= 0 )
          goto LABEL_15;
      }
      if ( (a8 & 2) != 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 144), 0);
        *(_QWORD *)(a1 + 144) = 0LL;
      }
    }
    if ( v8 < 0 )
    {
      if ( v8 == -1073741558 && (unsigned int)(v9 - 2) <= 1 )
      {
        v36 = *(_QWORD *)(a1 + 144);
        if ( v36 )
        {
          v37 = 1LL;
          v38 = *(_QWORD *)(v36 + 48);
          v39 = *(_DWORD *)(v36 + 40) >> 12;
          v40 = v38;
          if ( v39 > 1 )
          {
            QuadPart = (__int64 *)(v36 + 56);
            v54.QuadPart = v36 + 56;
            v42 = v39 - 1;
            do
            {
              v43 = *QuadPart;
              if ( *QuadPart == v40 + 1 )
              {
                ++v37;
              }
              else
              {
                v44.QuadPart = v38 << 12;
                v59.QuadPart = v37 << 12;
                v38 = v43;
                if ( MmIsIoSpaceActive(v44, v37 << 12) )
                {
                  v45 = v59;
                  do
                  {
                    v59.QuadPart = -10000LL;
                    KeDelayExecutionThread(0, 0, &v59);
                  }
                  while ( MmIsIoSpaceActive(v44, v45.QuadPart) );
                }
                QuadPart = (__int64 *)v54.QuadPart;
                v43 = v38;
                v37 = 1LL;
              }
              ++QuadPart;
              v40 = v43;
              v54.QuadPart = (LONGLONG)QuadPart;
              --v42;
            }
            while ( v42 );
            v18 = a8;
            LODWORD(v9) = v62;
          }
          v55 = v37 << 12;
          v46.QuadPart = v38 << 12;
          if ( MmIsIoSpaceActive(v46, v37 << 12) )
          {
            v47 = v55;
            do
            {
              v56.QuadPart = -10000LL;
              KeDelayExecutionThread(0, 0, &v56);
            }
            while ( MmIsIoSpaceActive(v46, v47) );
          }
          if ( (v18 & 2) == 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(a1 + 144), 0);
            *(_QWORD *)(a1 + 144) = 0LL;
          }
          v17 = v60;
          *(_BYTE *)(a1 + 130) = 0;
        }
        else
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v12, v14);
          v48[7] = 0LL;
          v48[3] = 270LL;
          v48[4] = 4LL;
          v48[5] = a1;
          v48[6] = -1073741558LL;
          WdLogEvent5_WdCriticalError(v48);
        }
      }
      v19 = *(struct _MDL **)(a1 + 192);
      if ( v19 )
      {
        MmUnsecureVirtualMemory(v19);
        *(_QWORD *)(a1 + 192) = 0LL;
      }
      goto LABEL_20;
    }
LABEL_15:
    if ( (unsigned int)v9 <= 1 )
    {
      *(_QWORD *)(a1 + 144) = a4;
      *(_BYTE *)(a1 + 130) = 1;
      *(_QWORD *)(a1 + 136) = v17;
    }
    else
    {
      if ( (a8 & 2) == 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 144), 0);
        v19 = *(struct _MDL **)(a1 + 192);
        *(_QWORD *)(a1 + 144) = 0LL;
        if ( v19 )
        {
          MmUnsecureVirtualMemory(v19);
          *(_QWORD *)(a1 + 192) = 0LL;
        }
      }
      *(_BYTE *)(a1 + 130) = 0;
    }
LABEL_20:
    v20 = (struct _EPROCESS *)PsGetCurrentProcess(v19, v12, v14, v15);
    VIDMM_GLOBAL::RecordRotation(v20, VirtualAddress, v17, a4, (enum _MM_ROTATE_DIRECTION)v9, v8);
    return (unsigned int)v8;
  }
  v22 = MmSecureVirtualMemory(v16, Size, 4u);
  *(_QWORD *)(a1 + 192) = v22;
  if ( v22 )
  {
    v16 = VirtualAddress;
    goto LABEL_9;
  }
  _InterlockedAdd(&dword_1C004064C, 1u);
  v28 = WdLogNewEntry5_WdLowResource(v23, v12);
  *(_QWORD *)(v28 + 24) = 3056LL;
  WdLogEvent5_WdLowResource(v28);
  return 3221225495LL;
}
