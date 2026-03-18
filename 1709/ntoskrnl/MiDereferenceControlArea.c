/*
 * XREFs of MiDereferenceControlArea @ 0x140131C80
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiMapViewInSystemSpace @ 0x1404F7614 (MiMapViewInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v2);
}
