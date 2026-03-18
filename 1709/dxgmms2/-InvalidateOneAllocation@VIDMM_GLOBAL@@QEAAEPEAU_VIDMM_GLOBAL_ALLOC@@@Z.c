/*
 * XREFs of ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0079BF4
 * Callers:
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0075584 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C007B0F4 (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0079AEC (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::InvalidateOneAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  VIDMM_GLOBAL *CurrentThread; // rcx
  int v7; // eax
  __int64 v9; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v11[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 96) == 1 )
  {
    v9 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdEvent(v9);
    return 0;
  }
  DXGFASTMUTEX::Acquire(a2[40]);
  *((_BYTE *)a2 + 96) = 1;
  _InterlockedOr(v10, 0);
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v4, v5);
  if ( (*(_DWORD *)a2[63] & 0x40000000) == 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *(VIDMM_GLOBAL **)(*(_QWORD *)this + 8LL) )
  {
    memset(v11, 0, 0x58uLL);
    v7 = *((_DWORD *)a2 + 19) & 0x3F;
    LODWORD(v11[0]) = 103;
    HIDWORD(v11[0]) = v7;
    v11[5] = a2;
    VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v11);
    return 0;
  }
  return VIDMM_GLOBAL::CleanupPrimaryAllocation(CurrentThread, (struct _VIDMM_GLOBAL_ALLOC *)a2);
}
