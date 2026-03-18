/*
 * XREFs of PpDevCfgProcessDevices @ 0x1406246C4
 * Callers:
 *     PnpBootPhaseComplete @ 0x14062461C (PnpBootPhaseComplete.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     _CmGetDeviceStatus @ 0x140585D34 (_CmGetDeviceStatus.c)
 *     PipForDeviceNodeSubtree @ 0x1405CA500 (PipForDeviceNodeSubtree.c)
 *     PpDeviceRegistration @ 0x1405CC4FC (PpDeviceRegistration.c)
 *     _CmDeleteDevice @ 0x1407E7584 (_CmDeleteDevice.c)
 */

__int64 PpDevCfgProcessDevices()
{
  PVOID *v0; // rbx
  char v1; // si
  int v2; // edi
  PVOID *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  unsigned int v7; // [rsp+30h] [rbp-20h]
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+80h] [rbp+30h] BYREF
  __int64 v10; // [rsp+88h] [rbp+38h] BYREF
  __int64 v11; // [rsp+90h] [rbp+40h] BYREF
  PVOID v12; // [rsp+98h] [rbp+48h] BYREF

  v12 = 0LL;
  v9 = 0;
  v0 = P;
  LODWORD(v11) = 0;
  v1 = 0;
  LODWORD(v10) = 0;
  P[1] = P;
  P[0] = P;
  if ( (PiDevCfgMode & 2) != 0 )
  {
    v2 = PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PiDevCfgProcessDeviceCallback, (__int64)P);
    if ( v2 < 0 )
      goto LABEL_18;
    v0 = (PVOID *)P[0];
    if ( P[0] != P )
    {
      v2 = PiPnpRtlBeginOperation((__int64 **)&v12);
      if ( v2 >= 0 )
      {
        for ( i = (PVOID *)P[0]; i != P; i = (PVOID *)*i )
        {
          if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, (const WCHAR *)i[3], 0LL, &v9, &v11, &v10, v7) < 0
            || (v9 & 2) == 0 )
          {
            PpDevNodeLockTree(3);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            PpDeviceRegistration((__int64)(i + 2), 0LL, 0LL, 1);
            if ( (int)CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, i[3], 0LL) >= 0 )
              v1 = 1;
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            PpDevNodeUnlockTree(3);
          }
        }
        PiPnpRtlEndOperation((PVOID **)v12);
        if ( v1 )
          PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 8, 0, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_18;
    }
  }
  else
  {
    v2 = 0;
  }
  while ( v0 != P )
  {
    if ( v0[1] != P || (v6 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v6[1] = P;
    RtlFreeAnsiString((PUNICODE_STRING)v0 + 1);
    ExFreePoolWithTag(v0, 0);
LABEL_18:
    v0 = (PVOID *)P[0];
  }
  return (unsigned int)v2;
}
