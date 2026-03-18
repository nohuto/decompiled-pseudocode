/*
 * XREFs of PspRemoveProperty @ 0x1400CE420
 * Callers:
 *     PsSetThreadProperty @ 0x1400CE300 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x1402843B0 (PsSetJobProperty.c)
 *     PspEmptyPropertySet @ 0x1404B9534 (PspEmptyPropertySet.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PspFindPropertySetEntry @ 0x1400CE4E4 (PspFindPropertySetEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspRemoveProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  KIRQL v6; // r14
  _QWORD *PropertySetEntry; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  PropertySetEntry = (_QWORD *)PspFindPropertySetEntry(a1, a2);
  v8 = PropertySetEntry;
  if ( PropertySetEntry )
  {
    if ( a3 )
      *a3 = PropertySetEntry[3];
    v9 = *PropertySetEntry;
    if ( *(_QWORD **)(v9 + 8) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
  __writecr8(v6);
  if ( v8 )
  {
    ObfDereferenceObjectWithTag((PVOID)v8[3], 0x72507350u);
    ExFreePoolWithTag(v8, 0x50737050u);
  }
  return 0LL;
}
