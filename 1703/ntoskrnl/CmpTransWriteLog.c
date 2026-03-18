/*
 * XREFs of CmpTransWriteLog @ 0x14042CE64
 * Callers:
 *     CmLogTmRmAction @ 0x14042C8DC (CmLogTmRmAction.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpComputeLogFillLevel @ 0x14042CF44 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x14042D068 (CmpDoTransWriteLogRecord.c)
 *     CmpLogCheckpoint @ 0x14042EAB0 (CmpLogCheckpoint.c)
 *     CmpAddRemoveRMLogContainer @ 0x14066BCA4 (CmpAddRemoveRMLogContainer.c)
 */

__int64 __fastcall CmpTransWriteLog(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, PCLFS_LSN plsnFinish)
{
  struct _KTHREAD *CurrentThread; // rax
  CLFS_LSN *v10; // rbp
  int v11; // edi
  __int64 v12; // rdx
  int v13; // esi
  __int64 v14; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  LODWORD(v18) = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
  v10 = plsnFinish;
  v11 = v18;
  while ( 1 )
  {
    v13 = CmpDoTransWriteLogRecord(a1, a2, a3, a4, v10);
    if ( v13 >= 0 )
      break;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_6;
LABEL_11:
      LODWORD(v18) = ++v11;
      if ( (int)CmpAddRemoveRMLogContainer(a1) < 0 )
        goto LABEL_6;
      LOBYTE(v17) = 1;
      CmpLogCheckpoint(a1, v16, v17);
    }
    else
    {
      v11 = 1;
      LOBYTE(v14) = 1;
      LODWORD(v18) = 1;
      if ( (int)CmpLogCheckpoint(a1, v12, v14) < 0 )
        goto LABEL_11;
    }
  }
  if ( (int)CmpComputeLogFillLevel(
              *(PLOG_FILE_OBJECT *)(a1 + 88),
              (PCLFS_LSN)(a1 + 120),
              v10,
              *(_DWORD *)(a1 + 72),
              *(_DWORD *)(a1 + 68),
              (__int64)&v18) >= 0
    && (unsigned int)v18 >= 0x50 )
  {
    CmpAddRemoveRMLogContainer(a1);
  }
LABEL_6:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
