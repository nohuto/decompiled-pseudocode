/*
 * XREFs of PnpReallocateResources @ 0x1406D2960
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x1406D1B54 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140557750 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReleaseResourcesInternal @ 0x14055A56C (PnpReleaseResourcesInternal.c)
 *     PnpBuildCmResourceLists @ 0x14055A75C (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x14055B06C (PnpFindBestConfiguration.c)
 *     IopCommitConfiguration @ 0x14055B530 (IopCommitConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14058F1E4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRequestDeviceRemoval @ 0x1405EDBB0 (PnpRequestDeviceRemoval.c)
 *     PnpRestoreResourcesInternal @ 0x1406D2B30 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1406D4C1C (PnpRebalance.c)
 */

_QWORD *__fastcall PnpReallocateResources(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  __int64 v4; // rax
  int ResourceRequirementsForAssignTable; // edi
  int started; // eax
  int v7; // r8d
  _QWORD *v9[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+40h] [rbp-40h] BYREF
  char vars0; // [rsp+80h] [rbp+0h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x400) == 0 )
    goto LABEL_17;
  v3 = *(_DWORD *)(a1 + 396) & 0x100;
  PipClearDevNodeFlags(a1, 256);
  if ( (*(_DWORD *)(a1 + 396) & 0x800) != 0 )
  {
    memset(v10, 0, sizeof(v10));
    v4 = *(_QWORD *)(a1 + 32);
    v10[3] = 0LL;
    LODWORD(v10[1]) |= 0x280u;
    v10[0] = v4;
    HIDWORD(v10[1]) = 4;
    ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(
                                           (unsigned __int64)v10,
                                           (unsigned __int64)&vars0,
                                           &v12);
    if ( !v12 )
      goto LABEL_15;
    if ( *(_QWORD *)(a1 + 416) )
      PnpReleaseResourcesInternal((_QWORD *)a1);
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration((__int64)v10, v12, (__int64)v9);
    if ( ResourceRequirementsForAssignTable < 0
      || (ResourceRequirementsForAssignTable = IopCommitConfiguration(v9), ResourceRequirementsForAssignTable < 0) )
    {
      started = PnpRestoreResourcesInternal(a1);
      if ( started < 0 )
      {
        v7 = 14;
        goto LABEL_12;
      }
    }
    else
    {
      PipClearDevNodeFlags(a1, 3072);
      PnpBuildCmResourceLists((unsigned __int64)v10, (unsigned __int64)&vars0, 1);
      started = PnpStartDeviceNode(a1, 1, 1);
      ResourceRequirementsForAssignTable = started;
      if ( started < 0 )
      {
        v7 = 12;
LABEL_12:
        PnpRequestDeviceRemoval(a1, 0, v7, started);
      }
    }
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
    goto LABEL_15;
  }
  ResourceRequirementsForAssignTable = PnpRebalance(a1, 0LL, 0LL, 0LL);
LABEL_15:
  if ( ResourceRequirementsForAssignTable < 0 )
  {
    PipClearDevNodeFlags(a1, 256);
    PipSetDevNodeFlags(a1, v3);
  }
LABEL_17:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
