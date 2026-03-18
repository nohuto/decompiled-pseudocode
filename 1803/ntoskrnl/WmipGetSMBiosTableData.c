/*
 * XREFs of WmipGetSMBiosTableData @ 0x14058A404
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x1400D3C50 (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x140589E50 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     WmipGetRegistryHideMachine @ 0x14058A504 (WmipGetRegistryHideMachine.c)
 *     WmipSMBiosHideMachine @ 0x1407A3708 (WmipSMBiosHideMachine.c)
 */

__int64 __fastcall WmipGetSMBiosTableData(void *a1, _DWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  void *v9; // rax
  void *v10; // rsi
  unsigned int v11; // ebx

  if ( !a2 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
  if ( a3 )
    *a3 = WmipSMBiosVersionInfo;
  if ( *a2 >= (unsigned int)WmipSMBiosTableLength )
  {
    if ( WmipSMBiosTablePhysicalAddress )
    {
      v9 = (void *)MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
      v10 = v9;
      if ( v9 )
      {
        v11 = WmipSMBiosTableLength;
        memmove(a1, v9, (unsigned int)WmipSMBiosTableLength);
        MmUnmapIoSpace(v10, v11);
        v7 = 0;
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
      v7 = -1073741808;
    }
  }
  else
  {
    v7 = -1073741789;
  }
  *a2 = WmipSMBiosTableLength;
  if ( (unsigned __int8)WmipGetRegistryHideMachine() )
  {
    if ( v7 >= 0 )
      WmipSMBiosHideMachine(a1, (unsigned int)*a2);
  }
  ExReleaseResourceLite(&WmipSMBiosLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
