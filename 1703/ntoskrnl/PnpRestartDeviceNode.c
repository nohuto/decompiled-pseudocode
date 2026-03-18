/*
 * XREFs of PnpRestartDeviceNode @ 0x140695D4C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventRestartRemovalRelations @ 0x14059B460 (PiEventRestartRemovalRelations.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14069FAF0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessClearDeviceProblem @ 0x1406A6AB4 (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x1406A6EE8 (PiRestartDevice.c)
 *     PiEventQueryRemoveNoFdo @ 0x1406AA2D0 (PiEventQueryRemoveNoFdo.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1404A7AF4 (PipClearDevNodeUserFlags.c)
 */

__int64 __fastcall PnpRestartDeviceNode(__int64 a1)
{
  unsigned int v2; // edi
  bool v3; // zf
  void *v4; // rcx

  PpDevNodeLockTree(4);
  if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
  {
    PipClearDevNodeUserFlags(a1, 5);
    PipClearDevNodeFlags(a1, 1081344);
    *(_DWORD *)(a1 + 704) &= 0xFFFFFC03;
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 300) == 769;
    *(_DWORD *)(a1 + 296) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( !v3 )
    {
      PipClearDevNodeFlags(a1, 2082475264);
      if ( *(_WORD *)(a1 + 56) )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
        *(_DWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = *(void **)(a1 + 440);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(a1 + 440) = 0LL;
        PipClearDevNodeFlags(a1, 512);
      }
      KeReleaseGuardedMutex(&PiResourceListLock);
    }
    *(_DWORD *)(a1 + 660) = -1;
    PipSetDevNodeState(a1, 769);
  }
  else
  {
    v2 = -1073741823;
  }
  PpDevNodeUnlockTree(4);
  return v2;
}
