/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x1400801A8
 * Callers:
 *     IopDoDeferredSetInterfaceState @ 0x14044FA88 (IopDoDeferredSetInterfaceState.c)
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PpMarkDeviceStackExtensionFlag(__int64 a1, int a2, char a3)
{
  KIRQL v6; // r9

  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 )
  {
    if ( a3 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= a2;
    else
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~a2;
    a1 = *(_QWORD *)(a1 + 24);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
}
