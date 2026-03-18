/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0078A44
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00550FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007884C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C007A330 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C007A420 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00AEF30 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00AF9F0 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0016180 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00161A4 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C00533DC (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VidMmUnmapViewOfAllocation(struct _VIDMM_LOCAL_ALLOC *a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct _VIDMM_LOCAL_ALLOC *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rdx
  char v9; // al
  void *CurrentProcess; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v13; // rcx
  int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)a1;
  v6 = a1;
  v7 = *(unsigned int *)(*(_QWORD *)a1 + 76LL);
  if ( (v7 & 0x100) == 0 || (*(_DWORD *)(v4 + 80) & 0x80u) == 0 )
  {
    if ( (*(_BYTE *)(v4 + 84) & 4) == 0 && (*(_DWORD *)(*(_QWORD *)a1 + 76LL) & 0x100) == 0 )
    {
      v8 = **(unsigned int **)(v4 + 504);
      if ( (v8 & 8) == 0 )
      {
        LOBYTE(a1) = (v8 & 0x40000030) == 0;
        if ( ((unsigned __int8)a1 & (*(_BYTE *)(v4 + 80) >= 0)) != 0 )
        {
          if ( (v8 & 0x20000000) != 0 )
          {
            v9 = *((_BYTE *)v6 + 32);
            if ( (v9 & 8) != 0 )
            {
              CurrentProcess = 0LL;
              *((_BYTE *)v6 + 32) = v9 & 0xF7;
            }
            else
            {
              CurrentProcess = (void *)PsGetCurrentProcess(a1, v8, v7, a4);
            }
            VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(v4 + 360), a2);
          }
          else
          {
            v15 = 0LL;
            v14 = 8003;
            if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q((__int64)a1, (__int64)&EventProfilerEnter, v7, 8003);
            DXGETWPROFILER_BASE::PushProfilerEntry();
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)v6 + 1) + 24LL) + 64LL))(
              *(_QWORD *)(*((_QWORD *)v6 + 1) + 24LL),
              *((_QWORD *)v6 + 3));
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
            if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v11, (__int64)&EventProfilerExit, v12, v14);
          }
        }
      }
    }
    else
    {
      v13 = *(void **)(v4 + 368);
      if ( v13 )
      {
        MmUnmapViewInSystemSpace(v13);
        *(_QWORD *)(v4 + 368) = 0LL;
      }
    }
  }
}
