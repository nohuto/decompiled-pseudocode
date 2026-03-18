/*
 * XREFs of PspGetProperty @ 0x14004B658
 * Callers:
 *     PspGetJobProperty @ 0x140024CE4 (PspGetJobProperty.c)
 *     PsGetThreadProperty @ 0x14004BD90 (PsGetThreadProperty.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     PspFindPropertySetEntry @ 0x14004B6F8 (PspFindPropertySetEntry.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
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
