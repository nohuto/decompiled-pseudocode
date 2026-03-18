/*
 * XREFs of MiSubsectionNeedsExtents @ 0x14021F908
 * Callers:
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiSubsectionNeedsExtents(_DWORD *a1)
{
  __int64 v1; // rdi
  KIRQL v3; // al
  unsigned __int64 v4; // rbx

  v1 = *(_QWORD *)a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  a1[13] |= 0x40000000u;
  v4 = v3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  __writecr8(v4);
}
