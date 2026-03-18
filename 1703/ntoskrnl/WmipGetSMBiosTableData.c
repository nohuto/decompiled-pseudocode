/*
 * XREFs of WmipGetSMBiosTableData @ 0x14055CA4C
 * Callers:
 *     WmipRawSMBiosTableHandler @ 0x140123150 (WmipRawSMBiosTableHandler.c)
 *     WmipQueryWmiDataBlock @ 0x14055C6B0 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     WmipGetRegistryHideMachine @ 0x14055CB4C (WmipGetRegistryHideMachine.c)
 *     WmipSMBiosHideMachine @ 0x140707A40 (WmipSMBiosHideMachine.c)
 */

__int64 __fastcall WmipGetSMBiosTableData(void *a1, _DWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  int v8; // ebx
  void *v10; // rax
  void *v11; // rsi
  unsigned int v12; // ebx

  if ( !a2 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
  if ( a3 )
    *a3 = WmipSMBiosVersionInfo;
  v7 = WmipSMBiosTableLength;
  if ( *a2 >= (unsigned int)WmipSMBiosTableLength )
  {
    if ( WmipSMBiosTablePhysicalAddress )
    {
      v10 = (void *)MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
      v11 = v10;
      if ( v10 )
      {
        v12 = WmipSMBiosTableLength;
        memmove(a1, v10, (unsigned int)WmipSMBiosTableLength);
        MmUnmapIoSpace(v11, v12);
        v8 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
      v7 = WmipSMBiosTableLength;
    }
    else
    {
      v8 = -1073741808;
    }
  }
  else
  {
    v8 = -1073741789;
  }
  *a2 = v7;
  if ( (unsigned __int8)WmipGetRegistryHideMachine() )
  {
    if ( v8 >= 0 )
      WmipSMBiosHideMachine(a1, (unsigned int)*a2);
  }
  ExReleaseResourceLite(&WmipSMBiosLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
