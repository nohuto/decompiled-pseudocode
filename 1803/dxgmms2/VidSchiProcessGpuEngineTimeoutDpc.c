/*
 * XREFs of VidSchiProcessGpuEngineTimeoutDpc @ 0x1C00332B0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000F330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002A5B8 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0012E90 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0012F08 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchiProcessGpuEngineTimeoutDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbx
  _BYTE v2[56]; // [rsp+20h] [rbp-38h] BYREF

  Next = ListEntry[2].Next;
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[378], ListEntry);
  AcquireSpinLock::AcquireSpinLock(
    (AcquireSpinLock *)v2,
    (unsigned __int64 *)(*((_QWORD *)&Next[1].Next + 1) + 1904LL),
    1,
    1);
  *((_DWORD *)&Next[124].Next + 3) = 1;
  *((_BYTE *)&Next[124].Next + 10) = 1;
  AcquireSpinLock::Release((AcquireSpinLock *)v2);
}
