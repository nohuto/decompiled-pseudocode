/*
 * XREFs of ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z @ 0x1C00B9A10
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C00B9204 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::ResetUndo(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  ULONG Protect; // [rsp+60h] [rbp+28h] BYREF
  int v20; // [rsp+68h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+40h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 1);
  BaseAddress = 0LL;
  RegionSize = 0LL;
  Protect = 0;
  v7 = *v4;
  v20 = 0;
  if ( PsGetCurrentProcess(this, a2, a3, a4) != v7 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 30LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = a2;
  LODWORD(v13) = VIDMM_PROCESS_HEAP::GetAllocationInfo(this, a2, &RegionSize, &BaseAddress, &Protect, &v20);
  if ( (int)v13 >= 0 )
  {
    v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000000u, Protect);
    v13 = v15;
    if ( v15 < 0 )
    {
      v17 = WdLogNewEntry5_WdEvent(v12, v16);
      *(_QWORD *)(v17 + 24) = v13;
      WdLogEvent5_WdEvent(v17);
    }
  }
  if ( (_DWORD)v13 == -1071775472
    && bTracingEnabled
    && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0q(v12, (__int64)&EventPerformanceWarning, v14, 18);
  }
  if ( v20 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a2);
  return (unsigned int)v13;
}
