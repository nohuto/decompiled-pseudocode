/*
 * XREFs of PspRemoveProperty @ 0x140107BCC
 * Callers:
 *     PsSetThreadProperty @ 0x140107A30 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x14024E040 (PsSetJobProperty.c)
 *     PspEmptyPropertySet @ 0x1404D6A50 (PspEmptyPropertySet.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PspFindPropertySetEntry @ 0x140107F90 (PspFindPropertySetEntry.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
