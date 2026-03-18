/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C004C388
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004C420 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004D380 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C004D470 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00A7580 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A7EF0 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall VidMmMapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rsi
  void *v6; // rdi
  struct _VIDMM_LOCAL_ALLOC *v9; // r12
  __int64 v10; // rdx
  int v11; // r15d
  char *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS v17; // ebx
  __int64 CurrentProcess; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+58h] BYREF

  v28 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v9 = a1;
  v10 = *(unsigned int *)(v5 + 76);
  if ( (v10 & 0x100) != 0 && (*(_DWORD *)(v5 + 80) & 0x80u) != 0 )
  {
    v12 = (char *)*((_QWORD *)a1 + 2);
    return &v12[a2];
  }
  if ( (*(_BYTE *)(v5 + 84) & 4) != 0 || (*(_DWORD *)(v5 + 76) & 0x100) != 0 )
  {
    v22 = *(_QWORD *)(v5 + 360);
    v29 = a2;
    if ( (int)MmMapViewInSystemSpaceEx(v22, v5 + 368, &v28, &v29, 0LL) >= 0 )
    {
      v12 = (char *)(*(_QWORD *)(v5 + 368) - v29);
      return &v12[a2];
    }
    _InterlockedIncrement(&dword_1C0040670);
    v25 = WdLogNewEntry5_WdLowResource(v24, v23);
    *(_QWORD *)(v25 + 24) = v5;
    WdLogEvent5_WdLowResource(v25);
    return (char *)MappedBase;
  }
  v11 = **(_DWORD **)(v5 + 504);
  if ( (v11 & 8) == 0 )
  {
    LOBYTE(a1) = (v11 & 0x30) == 0;
    if ( ((unsigned __int8)a1 & (*(_BYTE *)(v5 + 80) >= 0)) == 0 )
    {
      if ( !a5 || (v11 & 0x20) == 0 )
      {
        v12 = (char *)*((_QWORD *)v9 + 2);
        return &v12[a2];
      }
      return (char *)v6;
    }
    if ( (v11 & 0x20000000) != 0 )
    {
      if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
      {
        _InterlockedIncrement(&dword_1C0040670);
        v14 = WdLogNewEntry5_WdLowResource(a1, v10);
        *(_QWORD *)(v14 + 24) = 638LL;
        WdLogEvent5_WdLowResource(v14);
        v17 = -1073741823;
      }
      else
      {
        v26 = 0LL;
        CurrentProcess = PsGetCurrentProcess();
        v17 = MmMapViewOfSection(
                *(_QWORD *)(v5 + 360),
                CurrentProcess,
                &MappedBase,
                0LL,
                *(_QWORD *)(v5 + 8),
                &v26,
                v5 + 8,
                2,
                0,
                ~((_WORD)v11 << 8) & 0x400 | 4u);
        if ( v17 >= 0 )
        {
LABEL_19:
          v12 = (char *)MappedBase;
          *a4 = MappedBase;
          return &v12[a2];
        }
      }
      _InterlockedIncrement(&dword_1C0040670);
      v19 = WdLogNewEntry5_WdLowResource(v16, v15);
      *(_QWORD *)(v19 + 24) = a5;
      WdLogEvent5_WdLowResource(v19);
      if ( !a5 )
      {
        v17 = MmMapViewInSystemSpace(*(PVOID *)(v5 + 360), &MappedBase, (PSIZE_T)(v5 + 8));
        if ( v17 < 0 )
          return (char *)MappedBase;
        *((_BYTE *)v9 + 32) |= 8u;
      }
      if ( v17 >= 0 )
        goto LABEL_19;
    }
    else
    {
      if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        McTemplateK0q((__int64)a1, (__int64)&EventProfilerEnter, a3, 8002);
        a3 = v28;
      }
      v6 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*((_QWORD *)v9 + 1)
                                                                                                  + 24LL)
                                                                                    + 56LL))(
                     *(_QWORD *)(*((_QWORD *)v9 + 1) + 24LL),
                     *((_QWORD *)v9 + 3),
                     a2,
                     a3,
                     a5);
      MappedBase = v6;
      if ( (qword_1C0040010 & 2) == 0 || ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (char *)v6;
      McTemplateK0q(v20, (__int64)&EventProfilerExit, v21, 8002);
    }
    return (char *)MappedBase;
  }
  if ( !a5 )
  {
    v12 = *(char **)(v5 + 368);
    return &v12[a2];
  }
  return (char *)v6;
}
