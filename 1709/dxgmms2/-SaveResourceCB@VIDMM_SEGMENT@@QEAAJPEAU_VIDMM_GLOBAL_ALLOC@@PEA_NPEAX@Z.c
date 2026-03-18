/*
 * XREFs of ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C009D060
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C040 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009D520 (-SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SaveResourceCB(VIDMM_SEGMENT *this, DXGFASTMUTEX **a2, bool *a3, void *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // r8
  DXGFASTMUTEX *v11; // rbx
  DXGFASTMUTEX *v12; // rdi

  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB((struct _VIDMM_GLOBAL_ALLOC *)a2) )
  {
    v8 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v8 + 24) = a2;
    WdLogEvent5_WdEvent(v8);
    DXGFASTMUTEX::Acquire(a2[40]);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a2 + 60, 0LL);
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0p((__int64)v9, &EventVidMmSaveResource, v10, a2);
    VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(v9, (struct _VIDMM_GLOBAL_ALLOC *)a2);
    v11 = a2[17];
    v12 = a2[18];
    VIDMM_MEMORY_SEGMENT::TransferToSystem(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 1u, a2[13], 1);
    a2[28] = v11;
    a2[27] = v12;
  }
  return 0LL;
}
