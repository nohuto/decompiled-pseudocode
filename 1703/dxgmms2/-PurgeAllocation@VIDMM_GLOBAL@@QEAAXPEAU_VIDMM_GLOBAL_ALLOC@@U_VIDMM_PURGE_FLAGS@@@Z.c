/*
 * XREFs of ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00949F8
 * Callers:
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C006F5EC (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00A0B04 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055A78 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllocation(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rax
  char v5; // bl
  char v8; // si

  v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  v5 = a3;
  v8 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
    v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  }
  if ( !*(_DWORD *)(a2 + 160) )
  {
    if ( *(_QWORD *)(a2 + 136) )
    {
      if ( *v4 )
        WdLogNewEntry5_WdTrace(a1);
      if ( (v5 & 2) != 0 || (v5 & 4) != 0 || (LOBYTE(a4) = 0, (v5 & 0x20) != 0) )
        LOBYTE(a4) = 1;
      LOBYTE(a3) = v5 & 1;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _BYTE, _QWORD))(**(_QWORD **)(a2 + 136) + 48LL))(
        *(_QWORD *)(a2 + 136),
        a2,
        a3,
        a4,
        0,
        0LL);
      v4 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
      v8 = 1;
    }
    if ( *(_QWORD *)(a2 + 264) )
    {
      if ( *v4 )
        WdLogNewEntry5_WdTrace(a1);
      if ( v8 == 1 )
        VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::EvictTemporaryAllocation(a1, (struct _VIDMM_GLOBAL_ALLOC *)a2);
      v8 = 1;
    }
    if ( v8 == 1 )
      VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
  }
}
