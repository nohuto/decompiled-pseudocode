/*
 * XREFs of ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAX@Z @ 0x1C00A8AE0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C00A82A4 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::ResetUndo(VIDMM_PROCESS_HEAP *this, struct _VIDMM_PROCESS_HEAP_ALLOC *a2)
{
  __int64 *v2; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  ULONG Protect; // [rsp+60h] [rbp+28h] BYREF
  int v18; // [rsp+68h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+38h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+40h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 1);
  BaseAddress = 0LL;
  RegionSize = 0LL;
  Protect = 0;
  v5 = *v2;
  v18 = 0;
  if ( PsGetCurrentProcess(this) != v5 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
    v9[5] = 0LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    v9[3] = 270LL;
    v9[4] = 30LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7) + 24) = a2;
  LODWORD(v11) = VIDMM_PROCESS_HEAP::GetAllocationInfo(this, a2, &RegionSize, &BaseAddress, &Protect, &v18);
  if ( (int)v11 >= 0 )
  {
    v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000000u, Protect);
    v11 = v13;
    if ( v13 < 0 )
    {
      v15 = WdLogNewEntry5_WdEvent(v10, v14);
      *(_QWORD *)(v15 + 24) = v11;
      WdLogEvent5_WdEvent(v15);
    }
  }
  if ( (_DWORD)v11 == -1071775472 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_q(v10, &EventPerformanceWarning, v12, 18);
  if ( v18 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a2);
  return (unsigned int)v11;
}
