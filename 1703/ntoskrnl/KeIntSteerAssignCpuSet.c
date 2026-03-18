/*
 * XREFs of KeIntSteerAssignCpuSet @ 0x140205624
 * Callers:
 *     IoSteerInterrupt @ 0x1406924E0 (IoSteerInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerAssignCpuSet @ 0x140205770 (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1402057CC (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSet(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // bp

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0;
  if ( v3 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v8 = *(_QWORD *)(v3 + 16);
    v9 = v7;
    if ( a3 )
      v4 = KiIntSteerAssignCpuSet(v8, a2, a3);
    else
      KiIntSteerClearCpuSetAssignment(v8);
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    __writecr8(v9);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
