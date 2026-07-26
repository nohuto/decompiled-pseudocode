/*
 * XREFs of ndisSignalD0CompleteWorkItem @ 0x1C0066690
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisSignalD0RequestComplete @ 0x1C000F564 (ndisSignalD0RequestComplete.c)
 */

void __fastcall ndisSignalD0CompleteWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // r9

  v4 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  a2->D0CompleteSignalWorkItem.Scheduled = 0;
  a2->LockDbg = 1709443;
  LODWORD(a1) = *(_DWORD *)(a1 + 80);
  a2->MiniportThread = 0LL;
  a2->LockDbg = 0;
  KeReleaseSpinLock(&a2->Lock, v4);
  ndisSignalD0RequestComplete(a2, a1);
  ndisDereferenceMiniport((__int64)a2, 0x11u, v5, v6);
}
