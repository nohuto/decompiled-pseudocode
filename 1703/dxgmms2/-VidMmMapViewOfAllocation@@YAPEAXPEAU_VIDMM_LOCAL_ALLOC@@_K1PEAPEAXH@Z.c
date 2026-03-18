/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0048320
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004843C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00492D0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00493B0 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C009F470 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C009FDE0 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall VidMmMapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, __int64 a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rsi
  void *v6; // rdi
  struct _VIDMM_LOCAL_ALLOC *v9; // r12
  int v10; // r14d
  char *v11; // rdi
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rcx
  NTSTATUS v16; // ebx
  __int64 CurrentProcess; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  v26 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v9 = a1;
  if ( (*(_DWORD *)(v5 + 76) & 0x100) != 0 && (*(_DWORD *)(v5 + 80) & 0x80u) != 0 )
  {
    v11 = (char *)*((_QWORD *)a1 + 2);
    return &v11[a2];
  }
  if ( (*(_BYTE *)(v5 + 84) & 4) != 0 || (*(_DWORD *)(v5 + 76) & 0x100) != 0 )
  {
    v21 = *(_QWORD *)(v5 + 360);
    v27 = a2;
    if ( (int)MmMapViewInSystemSpaceEx(v21, v5 + 368, &v26, &v27, 0LL) >= 0 )
    {
      v11 = (char *)(*(_QWORD *)(v5 + 368) - v27);
      return &v11[a2];
    }
    _InterlockedIncrement(&dword_1C003C660);
    v23 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v23 + 24) = v5;
    WdLogEvent5_WdLowResource(v23);
    return (char *)MappedBase;
  }
  v10 = **(_DWORD **)(v5 + 520);
  if ( (v10 & 8) == 0 )
  {
    LOBYTE(a1) = (v10 & 0x30) == 0;
    if ( ((unsigned __int8)a1 & (*(_BYTE *)(v5 + 80) >= 0)) == 0 )
    {
      if ( !a5 || (v10 & 0x20) == 0 )
      {
        v11 = (char *)*((_QWORD *)v9 + 2);
        return &v11[a2];
      }
      return (char *)v6;
    }
    if ( (v10 & 0x20000000) != 0 )
    {
      v13 = ~((_WORD)v10 << 8) & 0x400 | 4;
      if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
      {
        _InterlockedIncrement(&dword_1C003C660);
        v14 = WdLogNewEntry5_WdLowResource(a1);
        *(_QWORD *)(v14 + 24) = 638LL;
        WdLogEvent5_WdLowResource(v14);
        v16 = -1073741823;
      }
      else
      {
        v24 = 0LL;
        CurrentProcess = PsGetCurrentProcess();
        v16 = MmMapViewOfSection(
                *(_QWORD *)(v5 + 360),
                CurrentProcess,
                &MappedBase,
                0LL,
                *(_QWORD *)(v5 + 8),
                &v24,
                v5 + 8,
                2,
                0,
                v13);
        if ( v16 >= 0 )
        {
LABEL_19:
          v11 = (char *)MappedBase;
          *a4 = MappedBase;
          return &v11[a2];
        }
      }
      _InterlockedIncrement(&dword_1C003C660);
      v18 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v18 + 24) = a5;
      WdLogEvent5_WdLowResource(v18);
      if ( !a5 )
      {
        v16 = MmMapViewInSystemSpace(*(PVOID *)(v5 + 360), &MappedBase, (PSIZE_T)(v5 + 8));
        if ( v16 < 0 )
          return (char *)MappedBase;
        *((_BYTE *)v9 + 32) |= 8u;
      }
      if ( v16 >= 0 )
        goto LABEL_19;
    }
    else
    {
      if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        Template_q((__int64)a1, &EventProfilerEnter, a3, 8002);
        a3 = v26;
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
      if ( (qword_1C003C050 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (char *)v6;
      Template_q(v19, &EventProfilerExit, v20, 8002);
    }
    return (char *)MappedBase;
  }
  if ( !a5 )
  {
    v11 = *(char **)(v5 + 368);
    return &v11[a2];
  }
  return (char *)v6;
}
