/*
 * XREFs of PopGetDope @ 0x1401635CC
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x14009FA10 (PoRegisterDeviceForIdleDetection.c)
 *     PoVolumeDevice @ 0x1406048A8 (PoVolumeDevice.c)
 *     PopAssociateThermalRequest @ 0x140627198 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14075E88C (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14075EA38 (PopOrphanCoolingExtension.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopGetDope(__int64 a1)
{
  __int64 v1; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rbx
  KIRQL v5; // si

  v1 = *(_QWORD *)(a1 + 312);
  if ( !*(_QWORD *)(v1 + 24) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x45504F44u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x60uLL);
      v4[13] = 0;
      v4[14] = 0;
      *((_QWORD *)v4 + 3) = a1;
      *((_QWORD *)v4 + 5) = v4 + 8;
      *((_QWORD *)v4 + 4) = v4 + 8;
      v5 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      if ( !*(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 24) = v4;
        v4 = 0LL;
      }
      KxReleaseSpinLock(&PopDopeGlobalLock);
      __writecr8(v5);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x45504F44u);
    }
  }
  return *(_QWORD *)(v1 + 24);
}
