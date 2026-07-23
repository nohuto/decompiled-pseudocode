/*
 * XREFs of LdrpPrepareModuleForExecution @ 0x180021864
 * Callers:
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18002086C (LdrpReleaseLoaderLock.c)
 *     LdrpNotifyLoadOfGraph @ 0x180020E8C (LdrpNotifyLoadOfGraph.c)
 *     LdrpDynamicShimModule @ 0x1800217FC (LdrpDynamicShimModule.c)
 *     LdrpAcquireLoaderLock @ 0x18004B184 (LdrpAcquireLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x180072BC0 (LdrpInitializeGraphRecurse.c)
 *     LdrpCondenseGraph @ 0x180074A7C (LdrpCondenseGraph.c)
 *     LdrpAddNodeServiceTag @ 0x18007C5A8 (LdrpAddNodeServiceTag.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpPrepareModuleForExecution(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v9; // al
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return (unsigned int)v2;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) )
  {
    case 5:
      LdrpCondenseGraph();
      break;
    case 6:
      break;
    case 7:
      goto LABEL_9;
    default:
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) - 8) >= 2 )
        return (unsigned int)-1073741595;
      return (unsigned int)v2;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && LODWORD(NtCurrentTeb()->SubProcessTag) )
    LdrpAddNodeServiceTag(*(_QWORD *)(a1 + 152));
  v2 = LdrpNotifyLoadOfGraph(*(_QWORD *)(a1 + 152));
  if ( v2 >= 0 )
  {
    v2 = LdrpDynamicShimModule(*(__int64 **)(a1 + 152));
    if ( v2 >= 0 )
    {
LABEL_9:
      v5 = *(_QWORD *)(a1 + 176);
      if ( v5 && (*(_BYTE *)(v5 + 32) & 1) == 0 )
      {
        LdrpAcquireLoaderLock();
        v6 = *(_QWORD *)(a1 + 152);
        v10 = 0;
        v2 = LdrpInitializeGraphRecurse(v6, a2, &v10);
        LdrpReleaseLoaderLock(v7, 2, v2);
      }
      return (unsigned int)v2;
    }
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1792,
        (unsigned int)"LdrpPrepareModuleForExecution",
        1,
        "Failed to load for appcompat reasons\n");
      v9 = LdrpDebugFlags;
    }
    if ( (v9 & 0x40) != 0 )
      __debugbreak();
  }
  return (unsigned int)v2;
}
