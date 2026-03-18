/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x1400FEB6C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 *     IopDoDeferredSetInterfaceState @ 0x140555F3C (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
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
