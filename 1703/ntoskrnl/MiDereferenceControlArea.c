/*
 * XREFs of MiDereferenceControlArea @ 0x14013645C
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiMapViewInSystemSpace @ 0x140497594 (MiMapViewInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v3) = v2;
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v3);
}
