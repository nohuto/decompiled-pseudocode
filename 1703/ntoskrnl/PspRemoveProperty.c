/*
 * XREFs of PspRemoveProperty @ 0x140037664
 * Callers:
 *     PsSetThreadProperty @ 0x140037620 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x140238E70 (PsSetJobProperty.c)
 *     PspEmptyPropertySet @ 0x14053F0CC (PspEmptyPropertySet.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     PspFindPropertySetEntry @ 0x14004B6F8 (PspFindPropertySetEntry.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRemoveProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  KIRQL v6; // r14
  PVOID *PropertySetEntry; // rax
  PVOID *v8; // rbx
  PVOID **v9; // rcx
  PVOID **v10; // rax

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  PropertySetEntry = (PVOID *)PspFindPropertySetEntry(a1, a2);
  v8 = PropertySetEntry;
  if ( PropertySetEntry )
  {
    if ( a3 )
      *a3 = PropertySetEntry[3];
    v9 = (PVOID **)*PropertySetEntry;
    v10 = (PVOID **)PropertySetEntry[1];
    if ( v9[1] != v8 || *v10 != v8 )
      __fastfail(3u);
    *v10 = (PVOID *)v9;
    v9[1] = (PVOID *)v10;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
  __writecr8(v6);
  if ( v8 )
  {
    ObfDereferenceObjectWithTag(v8[3], 0x72507350u);
    ExFreePoolWithTag(v8, 0x50737050u);
  }
  return 0LL;
}
