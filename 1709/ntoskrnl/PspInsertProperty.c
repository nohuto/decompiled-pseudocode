/*
 * XREFs of PspInsertProperty @ 0x140107AF0
 * Callers:
 *     PsSetThreadProperty @ 0x140107A30 (PsSetThreadProperty.c)
 *     PsSetJobProperty @ 0x14024E040 (PsSetJobProperty.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PspFindPropertySetEntry @ 0x140107F90 (PspFindPropertySetEntry.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspInsertProperty(KSPIN_LOCK *a1, __int64 a2, void *a3)
{
  int v6; // edi
  _QWORD *PoolWithTag; // rbx
  KIRQL v8; // r12
  KSPIN_LOCK v9; // rax

  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x50737050u);
  if ( PoolWithTag )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
    if ( PspFindPropertySetEntry(a1, a2) )
    {
      v6 = -1073741771;
    }
    else
    {
      PoolWithTag[2] = a2;
      PoolWithTag[3] = a3;
      v9 = *a1;
      if ( *(KSPIN_LOCK **)(*a1 + 8) != a1 )
        __fastfail(3u);
      *PoolWithTag = v9;
      PoolWithTag[1] = a1;
      *(_QWORD *)(v9 + 8) = PoolWithTag;
      *a1 = (KSPIN_LOCK)PoolWithTag;
      ObfReferenceObjectWithTag(a3, 0x72507350u);
    }
    KxReleaseSpinLock(a1 + 2);
    __writecr8(v8);
    if ( v6 < 0 )
      ExFreePoolWithTag(PoolWithTag, 0x50737050u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
