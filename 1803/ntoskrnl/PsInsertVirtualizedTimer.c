/*
 * XREFs of PsInsertVirtualizedTimer @ 0x1400C3F10
 * Callers:
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     NtCreateTimer @ 0x1404B2E9C (NtCreateTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerPause @ 0x1400C9404 (ExpTimerPause.c)
 */

KSPIN_LOCK **__fastcall PsInsertVirtualizedTimer(
        KSPIN_LOCK *Object,
        _QWORD *a2,
        KSPIN_LOCK *a3,
        __int64 a4,
        KSPIN_LOCK **a5)
{
  KSPIN_LOCK **result; // rax
  char v6; // r15
  KIRQL CurrentIrql; // bp
  KSPIN_LOCK *v11; // rbx
  PVOID *v12; // rcx

  result = (KSPIN_LOCK **)*((unsigned int *)Object + 193);
  v6 = a4;
  if ( ((unsigned int)result & 0x40000008) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v11 = Object + 252;
    if ( a3 )
    {
      CurrentIrql = KeAcquireSpinLockRaiseToDpc(Object + 252);
      KxAcquireSpinLock(a3);
    }
    v12 = (PVOID *)Object[254];
    if ( *v12 != Object + 253 )
      __fastfail(3u);
    *a2 = Object + 253;
    a2[1] = v12;
    *v12 = a2;
    Object[254] = (KSPIN_LOCK)a2;
    if ( v6 )
    {
      LOBYTE(a4) = 1;
      ExpTimerPause(a2 - 36, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008], a4);
    }
    ObfReferenceObjectWithTag(Object, 0x54567350u);
    result = a5;
    *a5 = Object;
    if ( a3 )
    {
      KxReleaseSpinLock(a3);
      KxReleaseSpinLock(v11);
      result = (KSPIN_LOCK **)CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
