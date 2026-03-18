/*
 * XREFs of KeIntSteerAssignCpuSetForGsiv @ 0x1402056C0
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerAssignCpuSet @ 0x140205770 (KiIntSteerAssignCpuSet.c)
 *     KiIntSteerClearCpuSetAssignment @ 0x1402057CC (KiIntSteerClearCpuSetAssignment.c)
 */

__int64 __fastcall KeIntSteerAssignCpuSetForGsiv(int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v6; // ebx
  KIRQL v7; // al
  ULONG_PTR v8; // rcx
  ULONG_PTR *v9; // rdx
  KIRQL v10; // si

  v6 = a1 != -1 ? 0xC0000225 : 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  v8 = KiIntTrackRootList;
  v9 = &KiIntTrackRootList;
  v10 = v7;
  while ( (ULONG_PTR *)v8 != v9 )
  {
    if ( a1 == -1 )
    {
      KiIntSteerClearCpuSetAssignment(v8);
    }
    else if ( *(_DWORD *)(v8 + 32) == a1 )
    {
      v6 = KiIntSteerAssignCpuSet(v8, a2, a3);
      break;
    }
    v8 = *(_QWORD *)v8;
  }
  KxReleaseSpinLock(&KiIntTrackSpinlock);
  __writecr8(v10);
  return v6;
}
