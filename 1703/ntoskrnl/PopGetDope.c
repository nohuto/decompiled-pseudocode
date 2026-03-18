/*
 * XREFs of PopGetDope @ 0x140163F5C
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x140005970 (PoRegisterDeviceForIdleDetection.c)
 *     PoVolumeDevice @ 0x1405CB990 (PoVolumeDevice.c)
 *     PopAssociateThermalRequest @ 0x1405D6C98 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1406C69DC (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1406C6B88 (PopOrphanCoolingExtension.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
