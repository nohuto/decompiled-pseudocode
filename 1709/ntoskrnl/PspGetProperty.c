/*
 * XREFs of PspGetProperty @ 0x140107EFC
 * Callers:
 *     PspGetJobProperty @ 0x140107E94 (PspGetJobProperty.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     PspFindPropertySetEntry @ 0x140107F90 (PspFindPropertySetEntry.c)
 */

__int64 __fastcall PspGetProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // esi
  unsigned __int8 CurrentIrql; // r15
  __int64 PropertySetEntry; // rax
  __int64 v9; // rbx

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 16));
  PropertySetEntry = PspFindPropertySetEntry(a1, a2);
  v9 = PropertySetEntry;
  if ( PropertySetEntry )
    ObfReferenceObjectWithTag(*(PVOID *)(PropertySetEntry + 24), 0x72507350u);
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
  __writecr8(CurrentIrql);
  if ( v9 )
    *a3 = *(_QWORD *)(v9 + 24);
  else
    return (unsigned int)-1073741275;
  return v6;
}
