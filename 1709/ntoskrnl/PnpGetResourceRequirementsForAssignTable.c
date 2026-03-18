/*
 * XREFs of PnpGetResourceRequirementsForAssignTable @ 0x140557750
 * Callers:
 *     PnpAllocateResources @ 0x140554F4C (PnpAllocateResources.c)
 *     PnpReallocateResources @ 0x1406D2960 (PnpReallocateResources.c)
 *     PnpQueryRebalanceWorker @ 0x1406D49DC (PnpQueryRebalanceWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x140557B18 (IopQueryDeviceResources.c)
 *     IopRearrangeReqList @ 0x140558F5C (IopRearrangeReqList.c)
 *     IopResourceRequirementsListToReqList @ 0x1405596CC (IopResourceRequirementsListToReqList.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14058F1E4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpFilterResourceRequirementsList @ 0x1405CB624 (PnpFilterResourceRequirementsList.c)
 */

__int64 __fastcall PnpGetResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  _QWORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  int DeviceResources; // eax
  void *v13; // rcx
  int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // r8
  unsigned int v17; // ecx
  void *v18; // rcx

  *a3 = 0;
  if ( a1 < a2 )
  {
    v5 = a1 + 24;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 - 16);
      v7 = (_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 8) = 0LL;
      if ( (v6 & 0x20) == 0 )
        break;
LABEL_13:
      v5 += 64LL;
      if ( v5 - 24 >= a2 )
        return *a3 == 0 ? 0xC0000001 : 0;
    }
    *(_QWORD *)(v5 + 16) = 0LL;
    v8 = *(_QWORD *)(v5 - 24);
    *(_QWORD *)(v5 + 24) = 0LL;
    if ( v8 )
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
    else
      v9 = 0LL;
    ExAcquireFastMutex(&PiResourceListLock);
    if ( (*(_DWORD *)(v9 + 396) & 0x400) != 0 )
    {
      v18 = *(void **)(v9 + 440);
      if ( v18 )
      {
        ExFreePoolWithTag(v18, 0);
        *(_QWORD *)(v9 + 440) = 0LL;
        PipClearDevNodeFlags(v9, 512);
        *(_DWORD *)(v5 - 16) |= 0x400u;
      }
    }
    KeReleaseGuardedMutex(&PiResourceListLock);
    if ( !*(_QWORD *)v5 )
    {
      v10 = *(_QWORD *)(v9 + 440);
      if ( !v10 || (*(_DWORD *)(v9 + 396) & 0x200) != 0 )
      {
        DeviceResources = IopQueryDeviceResources(*(_QWORD *)(v5 - 24));
        if ( DeviceResources < 0 || !*(_QWORD *)v5 )
        {
          *(_DWORD *)(v5 + 32) = DeviceResources;
LABEL_12:
          *(_DWORD *)(v5 - 16) |= 0x20u;
          goto LABEL_13;
        }
        ExAcquireFastMutex(&PiResourceListLock);
        v13 = *(void **)(v9 + 440);
        if ( v13 )
        {
          ExFreePoolWithTag(v13, 0);
          PipClearDevNodeFlags(v9, 512);
        }
        *(_QWORD *)(v9 + 440) = *(_QWORD *)v5;
        KeReleaseGuardedMutex(&PiResourceListLock);
      }
      else
      {
        *(_QWORD *)v5 = v10;
        *(_DWORD *)(v5 - 12) = 4;
      }
    }
    if ( (*(_DWORD *)(v5 - 16) & 0x200) != 0 )
    {
      PnpFilterResourceRequirementsList(*(void **)v5);
      *(_DWORD *)(v5 - 16) &= ~0x200u;
    }
    v14 = IopResourceRequirementsListToReqList(v5 - 24, v5 + 8);
    if ( v14 >= 0 )
    {
      v15 = *v7;
      if ( *v7 )
      {
        IopRearrangeReqList(*v7);
        if ( *(_QWORD *)(v15 + 24) )
        {
          v17 = *(_DWORD *)(v15 + 32);
          *(_DWORD *)(v5 + 32) = v14;
          if ( v17 < 3 )
            v17 = 0;
          ++*a3;
          *(_DWORD *)(v5 - 8) = v17;
          goto LABEL_13;
        }
        PnpFreeResourceRequirementsForAssignTable(v5 - 24, v5 + 40, v16);
        v14 = -1073741438;
      }
    }
    *(_DWORD *)(v5 + 32) = v14;
    goto LABEL_12;
  }
  return *a3 == 0 ? 0xC0000001 : 0;
}
