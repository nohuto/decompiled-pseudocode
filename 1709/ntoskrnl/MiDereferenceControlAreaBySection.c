/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x1400A2854
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x1404D11B0 (MiSectionDelete.c)
 *     MiDereferenceFailedControlArea @ 0x14059ECFC (MiDereferenceFailedControlArea.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al

  v3 = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 48) -= v3;
  return MiCheckControlArea(a1, v4);
}
