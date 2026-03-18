/*
 * XREFs of KeReadGuestSchedulerAssistPriority @ 0x1401A5A6C
 * Callers:
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400EB950 (KiUpdateVPBackingThreadPriority.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140247B84 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiComputePriorityFloor @ 0x1400EDBBC (KiComputePriorityFloor.c)
 */

__int64 __fastcall KeReadGuestSchedulerAssistPriority(__int64 a1)
{
  __int64 v1; // rdx
  int v4; // ecx
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 1512);
  if ( !v1 )
    return (unsigned int)*(char *)(a1 + 195);
  if ( !*(_BYTE *)(v1 + 28) )
  {
    v4 = *(_DWORD *)v1;
    if ( (unsigned int)(*(_DWORD *)v1 - 1) > 0x1E )
      v4 = 1;
    if ( (KiVelocityFlags & 1) != 0 )
      goto LABEL_16;
    if ( (KiVelocityFlags & 8) != 0 )
    {
      v4 += PsPrioritySeparation;
      if ( v4 >= 16 )
        v4 = 15;
      goto LABEL_16;
    }
    v5 = *(char *)(a1 + 563);
    if ( v4 >= v5 )
    {
      if ( v4 < 16 )
        goto LABEL_16;
      v5 = v4;
      if ( (KiVelocityFlags & 0x80u) == 0 )
        v5 = 15;
    }
    v4 = v5;
LABEL_16:
    if ( (KiVelocityFlags & 4) != 0 && *(_BYTE *)(v1 + 25) && v4 < KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( (KiVelocityFlags & 0x20) != 0 && *(_DWORD *)(v1 + 20) && v4 < KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( (KiVelocityFlags & 0x40) != 0 && *(_BYTE *)(v1 + 27) && v4 < KiVpThreadSystemWorkPriority )
      LOBYTE(v4) = KiVpThreadSystemWorkPriority;
    return (unsigned int)KiComputePriorityFloor(a1, v4);
  }
  LOBYTE(v4) = 7;
  return (unsigned int)KiComputePriorityFloor(a1, v4);
}
