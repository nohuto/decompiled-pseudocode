/*
 * XREFs of PnpRestoreResourcesInternal @ 0x14073A6C4
 * Callers:
 *     PnpReallocateResources @ 0x14073A4F4 (PnpReallocateResources.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x1405DBF20 (PnpDetermineResourceListSize.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140615AE0 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpFindBestConfiguration @ 0x140615BD0 (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140615F30 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x1406168D4 (IopResourceRequirementsListToReqList.c)
 *     PnpCmResourcesToIoResources @ 0x140617938 (PnpCmResourcesToIoResources.c)
 *     IopCommitConfiguration @ 0x14061B098 (IopCommitConfiguration.c)
 *     IopRearrangeReqList @ 0x14064A918 (IopRearrangeReqList.c)
 */

__int64 __fastcall PnpRestoreResourcesInternal(__int64 a1)
{
  unsigned int *v1; // rdx
  char *v4; // rbx
  int BestConfiguration; // esi
  __int64 v6; // rbx
  _DWORD *v7; // rbx
  ULONG v8; // eax
  _QWORD *v9[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-40h] BYREF
  char vars0; // [rsp+70h] [rbp+0h] BYREF

  v1 = *(unsigned int **)(a1 + 416);
  if ( !v1 )
    return 0LL;
  v4 = PnpCmResourcesToIoResources(a1, v1, 0);
  if ( !v4 )
    return 3221225626LL;
  memset(v10, 0, sizeof(v10));
  v10[0] = *(_QWORD *)(a1 + 32);
  v10[3] = v4;
  HIDWORD(v10[1]) = 4;
  BestConfiguration = IopResourceRequirementsListToReqList((__int64)v10, &v10[4]);
  if ( BestConfiguration >= 0 && (v6 = v10[4]) != 0 )
  {
    IopRearrangeReqList(v10[4]);
    if ( !*(_QWORD *)(v6 + 24) )
    {
      PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
      return 3221225858LL;
    }
    BestConfiguration = PnpFindBestConfiguration((__int64)v10, 1u, (__int64)v9);
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
    if ( BestConfiguration >= 0 )
      BestConfiguration = IopCommitConfiguration(v9);
    if ( v10[5] )
      ExFreePoolWithTag((PVOID)v10[5], 0);
    if ( v10[6] )
      ExFreePoolWithTag((PVOID)v10[6], 0);
    v7 = *(_DWORD **)(a1 + 416);
    v8 = PnpDetermineResourceListSize(v7);
    IopWriteAllocatedResourcesToRegistry(a1, v7, v8);
  }
  else
  {
    ExFreePoolWithTag((PVOID)v10[3], 0);
  }
  return (unsigned int)BestConfiguration;
}
