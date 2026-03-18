/*
 * XREFs of RawInitiateDeleteVolume @ 0x1400FA43C
 * Callers:
 *     RawCompletionRoutine @ 0x1400FA230 (RawCompletionRoutine.c)
 *     RawVerifyVolume @ 0x1402502B4 (RawVerifyVolume.c)
 *     RawReadWriteDeviceControl @ 0x140547214 (RawReadWriteDeviceControl.c)
 *     RawCreate @ 0x1405472D0 (RawCreate.c)
 *     RawClose @ 0x140547450 (RawClose.c)
 *     RawCleanup @ 0x1405474D8 (RawCleanup.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RawCleanupVcb @ 0x140546D34 (RawCleanupVcb.c)
 *     RawDeleteVcb @ 0x140547910 (RawDeleteVcb.c)
 */

char __fastcall RawInitiateDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, int a2, int a3)
{
  char v3; // di
  KIRQL v7; // bp
  KIRQL v8; // dl
  void **FileContextSupportPointer; // rcx
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY *v12; // rcx
  void **v13; // rax
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY **v17; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  v3 = 0;
  if ( (*(_DWORD *)&AdvancedHeader[1].NodeTypeCode & 4) != 0 )
  {
    if ( LODWORD(AdvancedHeader[1].Resource) )
      return v3;
    v8 = KeAcquireQueuedSpinLock(9uLL);
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
      goto LABEL_5;
    KeReleaseQueuedSpinLock(9uLL, v8);
    ExAcquireFastMutex(&RawGlobalLock);
    Flink = AdvancedHeader[1].FilterContexts.Flink;
    if ( Flink->Blink != &AdvancedHeader[1].FilterContexts
      || (Blink = AdvancedHeader[1].FilterContexts.Blink, Blink->Flink != &AdvancedHeader[1].FilterContexts) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    KeReleaseGuardedMutex(&RawGlobalLock);
LABEL_11:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
    RawCleanupVcb(AdvancedHeader);
    RawDeleteVcb(AdvancedHeader);
    return 1;
  }
  v7 = KeAcquireQueuedSpinLock(9uLL);
  if ( !a2 && *(_DWORD *)&AdvancedHeader[1].Flags + *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) != a3 )
  {
    v8 = v7;
LABEL_5:
    KeReleaseQueuedSpinLock(9uLL, v8);
    return v3;
  }
  FileContextSupportPointer = AdvancedHeader[1].FileContextSupportPointer;
  if ( !(LODWORD(AdvancedHeader[1].Resource) + *((_DWORD *)FileContextSupportPointer + 7)) )
  {
    *((_WORD *)FileContextSupportPointer + 2) &= ~1u;
    *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 1) = 0LL;
    KeReleaseQueuedSpinLock(9uLL, v7);
    ExAcquireFastMutex(&RawGlobalLock);
    v11 = AdvancedHeader[1].FilterContexts.Flink;
    if ( v11->Blink != &AdvancedHeader[1].FilterContexts
      || (v12 = AdvancedHeader[1].FilterContexts.Blink, v12->Flink != &AdvancedHeader[1].FilterContexts) )
    {
      __fastfail(3u);
    }
    v12->Flink = v11;
    v11->Blink = v12;
    KeReleaseGuardedMutex(&RawGlobalLock);
    *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 2u;
    goto LABEL_11;
  }
  memset(AdvancedHeader[1].Oplock, 0, 0x60uLL);
  *(_WORD *)AdvancedHeader[1].Oplock = 10;
  *((_WORD *)AdvancedHeader[1].Oplock + 1) = 96;
  *((_QWORD *)AdvancedHeader[1].Oplock + 2) = *((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2);
  *((_QWORD *)AdvancedHeader[1].Oplock + 1) = 0LL;
  *((_WORD *)AdvancedHeader[1].Oplock + 2) = *((_WORD *)AdvancedHeader[1].FileContextSupportPointer + 2) & 8;
  *(_QWORD *)(*((_QWORD *)AdvancedHeader[1].FileContextSupportPointer + 2) + 56LL) = AdvancedHeader[1].Oplock;
  v13 = AdvancedHeader[1].FileContextSupportPointer;
  AdvancedHeader[1].Oplock = 0LL;
  *((_WORD *)v13 + 2) |= 4u;
  *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 8u;
  KeReleaseQueuedSpinLock(9uLL, v7);
  ExAcquireFastMutex(&RawGlobalLock);
  p_FilterContexts = &AdvancedHeader[1].FilterContexts;
  v15 = AdvancedHeader[1].FilterContexts.Flink;
  if ( v15->Blink != &AdvancedHeader[1].FilterContexts
    || (v16 = AdvancedHeader[1].FilterContexts.Blink, v16->Flink != p_FilterContexts) )
  {
    __fastfail(3u);
  }
  v16->Flink = v15;
  v15->Blink = v16;
  *(_DWORD *)&AdvancedHeader[1].NodeTypeCode |= 6u;
  v17 = (struct _LIST_ENTRY **)qword_140362808;
  if ( *(__int64 **)qword_140362808 != &RawDismountedQueue )
    __fastfail(3u);
  AdvancedHeader[1].FilterContexts.Blink = (struct _LIST_ENTRY *)qword_140362808;
  p_FilterContexts->Flink = (struct _LIST_ENTRY *)&RawDismountedQueue;
  *v17 = p_FilterContexts;
  qword_140362808 = (__int64)&AdvancedHeader[1].FilterContexts;
  KeReleaseGuardedMutex(&RawGlobalLock);
  return v3;
}
